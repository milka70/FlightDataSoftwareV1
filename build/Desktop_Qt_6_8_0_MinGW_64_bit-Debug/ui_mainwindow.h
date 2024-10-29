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
    QWidget *widget_3;
    QGridLayout *gridLayout_2;
    QLabel *label_2;
    QLabel *label;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_4;
    QDoubleSpinBox *doubleSpinBox_2;
    QDoubleSpinBox *doubleSpinBox;
    QDoubleSpinBox *doubleSpinBox_3;
    QWidget *tab_4;
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
        tabWidget->setGeometry(QRect(40, 10, 641, 671));
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        widget_3 = new QWidget(tab_3);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(40, 30, 151, 221));
        gridLayout_2 = new QGridLayout(widget_3);
        gridLayout_2->setObjectName("gridLayout_2");
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");

        gridLayout_2->addWidget(label_2, 3, 0, 1, 1);

        label = new QLabel(widget_3);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(70, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 2, 0, 1, 1);

        label_3 = new QLabel(widget_3);
        label_3->setObjectName("label_3");

        gridLayout_2->addWidget(label_3, 6, 0, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(70, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 5, 0, 1, 1);

        doubleSpinBox_2 = new QDoubleSpinBox(widget_3);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");

        gridLayout_2->addWidget(doubleSpinBox_2, 3, 1, 1, 1);

        doubleSpinBox = new QDoubleSpinBox(widget_3);
        doubleSpinBox->setObjectName("doubleSpinBox");

        gridLayout_2->addWidget(doubleSpinBox, 0, 1, 1, 1);

        doubleSpinBox_3 = new QDoubleSpinBox(widget_3);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");

        gridLayout_2->addWidget(doubleSpinBox_3, 6, 1, 1, 1);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());

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
        label_2->setText(QCoreApplication::translate("MainWindow", "I:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "P:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "D:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
