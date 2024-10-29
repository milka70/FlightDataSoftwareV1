#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSerialPort>
#include <QTextEdit> // Include QTextEdit
#include <QTimer>    // Include QTimer

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void sendPIDConstants();
    void readSerialData(); // Slot to handle serial data
    void on_I_Value_valueChanged(double arg1);
    void on_P_Value_valueChanged(double arg1);
    void on_D_Value_valueChanged(double arg1);

private:
    Ui::MainWindow *ui;
    QSerialPort *serial;  // QSerialPort to read data
    QTextEdit *dataTextEdit; // New member for QTextEdit
    QTimer *readTimer; // Timer to control read frequency
    void updateInstrument(double roll, double pitch, double yaw, double outputPitch, double outputRoll, double rightElevonPos, double leftElevonPos, double P_ValDebug,double I_ValDebug,double D_ValDebug);
};

#endif // MAINWINDOW_H
