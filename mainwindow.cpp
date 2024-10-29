#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPortInfo>
#include <QDebug>
#include <QTextEdit> // Include QTextEdit

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow), serial(new QSerialPort(this))
{
    ui->setupUi(this);

    // Assuming textEdit is set in the UI file and created by Qt Designer
    ui->textEdit->setReadOnly(true); // Make it read-only

    // Set up the serial port
    serial->setPortName("COM3");   // Change this to the correct port for your setup
    serial->setBaudRate(QSerialPort::Baud115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    if (serial->open(QIODevice::ReadWrite)) { // Change to ReadWrite to send data
        connect(serial, &QSerialPort::readyRead, this, &MainWindow::readSerialData);
    } else {
        qDebug() << "Failed to open port";
    }

    // Initial read of PID constants
    sendPIDConstants(); // Call to sendPIDConstants at startup
}

MainWindow::~MainWindow()
{
    if (serial->isOpen())
        serial->close();
    delete ui;
}

void MainWindow::readSerialData()
{
    static QByteArray buffer;
    buffer.append(serial->readAll());

    int endIdx;
    while ((endIdx = buffer.indexOf('\n')) != -1) {
        // Read a full line of data
        QByteArray line = buffer.left(endIdx).trimmed();
        buffer.remove(0, endIdx + 1);

        // Split data by commas
        QList<QByteArray> values = line.split(',');

        // Assuming the first 10 values are roll, pitch, yaw, outputPitch, outputRoll, rightElevonPos, leftElevonPos, P_ValDebug, I_ValDebug, D_ValDebug
        if (values.size() == 10) {  // Now expecting 10 values
            double roll = values[0].toDouble();
            double pitch = values[1].toDouble();
            double yaw = values[2].toDouble();
            double outputPitch = values[3].toDouble();
            double outputRoll = values[4].toDouble();
            double rightElevonPos = values[5].toDouble();
            double leftElevonPos = values[6].toDouble();
            double P_ValDebug = values[7].toDouble();
            double I_ValDebug = values[8].toDouble();
            double D_ValDebug = values[9].toDouble();

            // Update the QDoubleSpinBox values
            ui->P_Value->setValue(P_ValDebug);
            ui->I_Value->setValue(I_ValDebug);
            ui->D_Value->setValue(D_ValDebug);

            // Call the updateInstrument method with the received values
            updateInstrument(roll, pitch, yaw, outputPitch, outputRoll, rightElevonPos, leftElevonPos, P_ValDebug, I_ValDebug, D_ValDebug);
        } else {
            qDebug() << "Received unexpected number of values:" << values.size();
        }
    }
}

void MainWindow::updateInstrument(double roll, double pitch, double yaw, double outputPitch, double outputRoll, double rightElevonPos, double leftElevonPos, double P_ValDebug, double I_ValDebug, double D_ValDebug)
{
    ui->graphicsEADI->setRoll(roll);
    ui->graphicsEADI->setPitch(pitch);
    ui->graphicsEADI->setHeading(yaw);
    ui->graphicsEADI->redraw();

    // Prepare new data string including the specified values and PID arguments
    QString text = QString("Output Pitch: %1\n\n"
                           "Output Roll:  %2\n\n"
                           "Right Elevon: %3\n\n"
                           "Left Elevon:  %4\n\n\n\n"
                           "PID Values Send By Arduino For Conformation:\n\n"
                           "P Value:      %5\n\n"
                           "I Value:      %6\n\n"
                           "D Value:      %7")
                       .arg(outputPitch)
                       .arg(outputRoll)
                       .arg(rightElevonPos)
                       .arg(leftElevonPos)
                       .arg(P_ValDebug)
                       .arg(I_ValDebug)
                       .arg(D_ValDebug);

    // Clear previous data and set the new text
    ui->textEdit->clear(); // Clear the previous content
    ui->textEdit->setPlainText(text); // Set the new text
}

//---------------------------------------------------------------------------------------------------------------------
// PID Constants adjustment

void MainWindow::on_P_Value_valueChanged(double arg1)
{
    sendPIDConstants(); // Directly send updated Kp
}

void MainWindow::on_I_Value_valueChanged(double arg1)
{
    sendPIDConstants(); // Directly send updated Ki
}

void MainWindow::on_D_Value_valueChanged(double arg1)
{
    sendPIDConstants(); // Directly send updated Kd
}

// Function to send the PID constants to Arduino
void MainWindow::sendPIDConstants()
{
    if (serial->isOpen()) {
        // Format: Kp,Ki,Kd\n
        QString pidValues = QString("%1,%2,%3\n")
                                .arg(ui->P_Value->value()) // Assuming you have QDoubleSpinBox for PID values
                                .arg(ui->I_Value->value())
                                .arg(ui->D_Value->value());
        serial->write(pidValues.toUtf8());
        serial->flush(); // Ensure the data is sent immediately
    }
}
