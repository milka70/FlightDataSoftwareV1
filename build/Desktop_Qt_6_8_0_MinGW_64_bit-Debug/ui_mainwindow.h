/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qfi/qfi_ASI.h"
#include "qfi/qfi_EADI.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QWidget *widget_2;
    QFormLayout *formLayout;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    qfi_ASI *graphicsASI;
    QSpacerItem *horizontalSpacer_2;
    qfi_EADI *graphicsEADI;
    QFrame *line;
    QFrame *line_2;
    QTabWidget *tabWidget;
    QWidget *tab_3;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer_7;
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *I_Value;
    QDoubleSpinBox *D_Value;
    QLabel *label_3;
    QLabel *label;
    QDoubleSpinBox *P_Value;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *widget_4;
    QLabel *label_6;
    QLabel *label_7;
    QTextEdit *textEdit;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_6;
    QWidget *tab_4;
    QWidget *tab;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1183, 733);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        widget = new QWidget(centralwidget);
        widget->setObjectName("widget");
        widget_2 = new QWidget(widget);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(730, 0, 324, 711));
        formLayout = new QFormLayout(widget_2);
        formLayout->setObjectName("formLayout");
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout->setItem(0, QFormLayout::LabelRole, horizontalSpacer_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout->setItem(2, QFormLayout::LabelRole, horizontalSpacer);

        graphicsASI = new qfi_ASI(widget_2);
        graphicsASI->setObjectName("graphicsASI");
        graphicsASI->setEnabled(false);
        graphicsASI->setMinimumSize(QSize(300, 300));
        graphicsASI->setMaximumSize(QSize(300, 300));
        graphicsASI->setFrameShape(QFrame::Shape::NoFrame);
        graphicsASI->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        graphicsASI->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        graphicsASI->setInteractive(false);

        formLayout->setWidget(3, QFormLayout::LabelRole, graphicsASI);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout->setItem(4, QFormLayout::LabelRole, horizontalSpacer_2);

        graphicsEADI = new qfi_EADI(widget_2);
        graphicsEADI->setObjectName("graphicsEADI");
        graphicsEADI->setEnabled(false);
        graphicsEADI->setMinimumSize(QSize(300, 300));
        graphicsEADI->setMaximumSize(QSize(300, 300));
        graphicsEADI->setFrameShape(QFrame::Shape::NoFrame);
        graphicsEADI->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        graphicsEADI->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        graphicsEADI->setInteractive(false);

        formLayout->setWidget(1, QFormLayout::LabelRole, graphicsEADI);

        line = new QFrame(widget);
        line->setObjectName("line");
        line->setGeometry(QRect(703, -40, 20, 771));
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);
        line_2 = new QFrame(widget);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(720, 335, 451, 41));
        line_2->setFrameShape(QFrame::Shape::HLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);
        tabWidget = new QTabWidget(widget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(40, 10, 671, 691));
        QFont font;
        font.setFamilies({QString::fromUtf8("Source Code Pro Medium")});
        font.setPointSize(11);
        tabWidget->setFont(font);
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        gridLayout = new QGridLayout(tab_3);
        gridLayout->setObjectName("gridLayout");
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 0, 2, 1, 1);

        widget_3 = new QWidget(tab_3);
        widget_3->setObjectName("widget_3");
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        I_Value = new QDoubleSpinBox(widget_3);
        I_Value->setObjectName("I_Value");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Source Code Pro")});
        font1.setPointSize(11);
        I_Value->setFont(font1);

        gridLayout_2->addWidget(I_Value, 2, 1, 1, 1);

        D_Value = new QDoubleSpinBox(widget_3);
        D_Value->setObjectName("D_Value");
        D_Value->setFont(font1);

        gridLayout_2->addWidget(D_Value, 4, 1, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");
        label_3->setFont(font1);

        gridLayout_2->addWidget(label_3, 4, 0, 1, 1);

        label = new QLabel(widget_3);
        label->setObjectName("label");
        label->setFont(font1);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        P_Value = new QDoubleSpinBox(widget_3);
        P_Value->setObjectName("P_Value");
        P_Value->setFont(font1);
        P_Value->setMinimum(0.000000000000000);
        P_Value->setMaximum(10099999.000000000000000);

        gridLayout_2->addWidget(P_Value, 0, 1, 1, 1);

        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setFont(font1);

        gridLayout_2->addWidget(label_2, 2, 0, 1, 1);


        gridLayout->addWidget(widget_3, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 582, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 1, 1, 1, 1);

        widget_4 = new QWidget(tab_3);
        widget_4->setObjectName("widget_4");
        label_6 = new QLabel(widget_4);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 110, 49, 16));
        label_7 = new QLabel(widget_4);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 10, 121, 16));
        textEdit = new QTextEdit(widget_4);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(50, 40, 331, 491));
        textEdit->setFont(font1);
        textEdit->setAutoFillBackground(false);
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        textEdit->setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
        textEdit->setReadOnly(true);
        textEdit->setTextInteractionFlags(Qt::TextInteractionFlag::NoTextInteraction);

        gridLayout->addWidget(widget_4, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 582, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        gridLayout->addItem(verticalSpacer, 1, 3, 1, 1);

        horizontalSpacer_6 = new QSpacerItem(408, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout->addItem(horizontalSpacer_6, 2, 2, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());
        tab = new QWidget();
        tab->setObjectName("tab");
        tabWidget->addTab(tab, QString());

        verticalLayout->addWidget(widget);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Altas Flight", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "D:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "P:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "I:", nullptr));
        label_6->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "PID Tuning:", nullptr));
        textEdit->setDocumentTitle(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Setting", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Servo", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Remote Controll", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
