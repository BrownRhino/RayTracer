/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created: Fri Dec 12 16:30:33 2014
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpinBox>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_frmMain
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLabel *label_2;
    QFrame *controlFrame;
    QPushButton *pushButton;
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QSpinBox *spinBox;
    QLCDNumber *lcdNumber;
    QSpinBox *spinBox_2;
    QLCDNumber *lcdNumber_2;
    QSpinBox *spinBox_3;
    QLCDNumber *lcdNumber_3;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QScrollArea *glWidgetArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *frmMain)
    {
        if (frmMain->objectName().isEmpty())
            frmMain->setObjectName(QString::fromUtf8("frmMain"));
        frmMain->resize(930, 526);
        gridLayout = new QGridLayout(frmMain);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(frmMain);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 16));
        label->setMaximumSize(QSize(100, 16));

        gridLayout->addWidget(label, 0, 1, 1, 1);

        label_2 = new QLabel(frmMain);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 16));
        label_2->setMaximumSize(QSize(100, 16));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        controlFrame = new QFrame(frmMain);
        controlFrame->setObjectName(QString::fromUtf8("controlFrame"));
        controlFrame->setMinimumSize(QSize(200, 470));
        controlFrame->setMaximumSize(QSize(200, 16777215));
        controlFrame->setFrameShape(QFrame::StyledPanel);
        controlFrame->setFrameShadow(QFrame::Raised);
        pushButton = new QPushButton(controlFrame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 10, 78, 54));
        pushButton_4 = new QPushButton(controlFrame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(40, 420, 110, 32));
        layoutWidget = new QWidget(controlFrame);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 70, 164, 60));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout->addWidget(pushButton_3);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        formLayoutWidget = new QWidget(controlFrame);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(20, 160, 151, 175));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        spinBox = new QSpinBox(formLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setMinimum(49);
        spinBox->setMaximum(590);
        spinBox->setValue(49);

        formLayout->setWidget(1, QFormLayout::LabelRole, spinBox);

        lcdNumber = new QLCDNumber(formLayoutWidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setProperty("intValue", QVariant(49));

        formLayout->setWidget(1, QFormLayout::FieldRole, lcdNumber);

        spinBox_2 = new QSpinBox(formLayoutWidget);
        spinBox_2->setObjectName(QString::fromUtf8("spinBox_2"));
        spinBox_2->setMinimum(9);
        spinBox_2->setMaximum(349);
        spinBox_2->setValue(300);

        formLayout->setWidget(3, QFormLayout::LabelRole, spinBox_2);

        lcdNumber_2 = new QLCDNumber(formLayoutWidget);
        lcdNumber_2->setObjectName(QString::fromUtf8("lcdNumber_2"));
        lcdNumber_2->setProperty("intValue", QVariant(300));

        formLayout->setWidget(3, QFormLayout::FieldRole, lcdNumber_2);

        spinBox_3 = new QSpinBox(formLayoutWidget);
        spinBox_3->setObjectName(QString::fromUtf8("spinBox_3"));
        spinBox_3->setMinimum(25);
        spinBox_3->setMaximum(590);
        spinBox_3->setValue(50);

        formLayout->setWidget(5, QFormLayout::LabelRole, spinBox_3);

        lcdNumber_3 = new QLCDNumber(formLayoutWidget);
        lcdNumber_3->setObjectName(QString::fromUtf8("lcdNumber_3"));
        lcdNumber_3->setProperty("intValue", QVariant(50));

        formLayout->setWidget(5, QFormLayout::FieldRole, lcdNumber_3);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        label_6 = new QLabel(controlFrame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 140, 91, 16));

        gridLayout->addWidget(controlFrame, 1, 1, 1, 1);

        glWidgetArea = new QScrollArea(frmMain);
        glWidgetArea->setObjectName(QString::fromUtf8("glWidgetArea"));
        QSizePolicy sizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(glWidgetArea->sizePolicy().hasHeightForWidth());
        glWidgetArea->setSizePolicy(sizePolicy);
        glWidgetArea->setMinimumSize(QSize(580, 470));
        glWidgetArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        glWidgetArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        glWidgetArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 688, 468));
        glWidgetArea->setWidget(scrollAreaWidgetContents);

        gridLayout->addWidget(glWidgetArea, 1, 2, 1, 2);


        retranslateUi(frmMain);
        QObject::connect(pushButton, SIGNAL(clicked()), frmMain, SLOT(openImage()));
        QObject::connect(pushButton_2, SIGNAL(clicked()), frmMain, SLOT(saveImage()));
        QObject::connect(pushButton_3, SIGNAL(clicked()), frmMain, SLOT(makeImage()));
        QObject::connect(pushButton_4, SIGNAL(clicked()), frmMain, SLOT(close()));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), lcdNumber_2, SLOT(display(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), lcdNumber_3, SLOT(display(int)));
        QObject::connect(spinBox, SIGNAL(valueChanged(int)), frmMain, SLOT(changeLightx(int)));
        QObject::connect(spinBox_2, SIGNAL(valueChanged(int)), frmMain, SLOT(changeLighty(int)));
        QObject::connect(spinBox_3, SIGNAL(valueChanged(int)), frmMain, SLOT(changeLightz(int)));

        QMetaObject::connectSlotsByName(frmMain);
    } // setupUi

    void retranslateUi(QWidget *frmMain)
    {
        frmMain->setWindowTitle(QApplication::translate("frmMain", "QT skeleton - BW 2014", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("frmMain", "Control Panel", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("frmMain", "OpenGL Window", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("frmMain", "open\n"
"image", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("frmMain", "Quit", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("frmMain", "make\n"
"image", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("frmMain", "save\n"
"image", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("frmMain", "X", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("frmMain", "Y", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("frmMain", "Z", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("frmMain", "Light Position", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class frmMain: public Ui_frmMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
