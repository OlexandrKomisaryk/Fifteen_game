/********************************************************************************
** Form generated from reading UI file 'fifteen.ui'
**
** Created by: Qt User Interface Compiler version 5.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIFTEEN_H
#define UI_FIFTEEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fifteen
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn10;
    QPushButton *btn13;
    QPushButton *btn5;
    QPushButton *btn15;
    QPushButton *btn3;
    QPushButton *btn2;
    QPushButton *btn14;
    QPushButton *btn8;
    QPushButton *btn1;
    QPushButton *btn11;
    QPushButton *btn7;
    QPushButton *btn6;
    QPushButton *btn9;
    QPushButton *btn12;
    QPushButton *btn4;
    QGroupBox *controlBox;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_2;
    QPushButton *btn_shufle;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpinBox *btnSizeBox;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QSpinBox *layoutSizeBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *count_move;
    QLabel *count;
    QComboBox *levelBox;

    void setupUi(QMainWindow *Fifteen)
    {
        if (Fifteen->objectName().isEmpty())
            Fifteen->setObjectName(QStringLiteral("Fifteen"));
        Fifteen->resize(496, 382);
        Fifteen->setStyleSheet(QStringLiteral("background-color: rgb(220, 255, 200);"));
        centralWidget = new QWidget(Fifteen);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 295, 295));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setSpacing(3);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetFixedSize);
        gridLayout->setContentsMargins(3, 3, 3, 3);
        btn10 = new QPushButton(layoutWidget);
        btn10->setObjectName(QStringLiteral("btn10"));
        btn10->setMinimumSize(QSize(70, 70));
        btn10->setMaximumSize(QSize(70, 70));
        btn10->setBaseSize(QSize(70, 70));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        btn10->setFont(font);
        btn10->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn10, 2, 1, 1, 1);

        btn13 = new QPushButton(layoutWidget);
        btn13->setObjectName(QStringLiteral("btn13"));
        btn13->setMinimumSize(QSize(70, 70));
        btn13->setMaximumSize(QSize(70, 70));
        btn13->setBaseSize(QSize(70, 70));
        btn13->setFont(font);
        btn13->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn13, 3, 0, 1, 1);

        btn5 = new QPushButton(layoutWidget);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setMinimumSize(QSize(70, 70));
        btn5->setMaximumSize(QSize(70, 70));
        btn5->setBaseSize(QSize(70, 70));
        btn5->setFont(font);
        btn5->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn5, 1, 0, 1, 1);

        btn15 = new QPushButton(layoutWidget);
        btn15->setObjectName(QStringLiteral("btn15"));
        btn15->setMinimumSize(QSize(70, 70));
        btn15->setMaximumSize(QSize(70, 70));
        btn15->setBaseSize(QSize(70, 70));
        btn15->setFont(font);
        btn15->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn15, 3, 2, 1, 1);

        btn3 = new QPushButton(layoutWidget);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setMinimumSize(QSize(70, 70));
        btn3->setMaximumSize(QSize(70, 70));
        btn3->setBaseSize(QSize(70, 70));
        btn3->setFont(font);
        btn3->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn3, 0, 2, 1, 1);

        btn2 = new QPushButton(layoutWidget);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setMinimumSize(QSize(70, 70));
        btn2->setMaximumSize(QSize(70, 70));
        btn2->setBaseSize(QSize(70, 70));
        btn2->setFont(font);
        btn2->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn2, 0, 1, 1, 1);

        btn14 = new QPushButton(layoutWidget);
        btn14->setObjectName(QStringLiteral("btn14"));
        btn14->setMinimumSize(QSize(70, 70));
        btn14->setMaximumSize(QSize(70, 70));
        btn14->setBaseSize(QSize(70, 70));
        btn14->setFont(font);
        btn14->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn14, 3, 1, 1, 1);

        btn8 = new QPushButton(layoutWidget);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setMinimumSize(QSize(70, 70));
        btn8->setMaximumSize(QSize(70, 70));
        btn8->setBaseSize(QSize(70, 70));
        btn8->setFont(font);
        btn8->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn8, 1, 3, 1, 1);

        btn1 = new QPushButton(layoutWidget);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setMinimumSize(QSize(70, 70));
        btn1->setMaximumSize(QSize(70, 70));
        btn1->setBaseSize(QSize(70, 70));
        btn1->setFont(font);
        btn1->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn1, 0, 0, 1, 1);

        btn11 = new QPushButton(layoutWidget);
        btn11->setObjectName(QStringLiteral("btn11"));
        btn11->setMinimumSize(QSize(70, 70));
        btn11->setMaximumSize(QSize(70, 70));
        btn11->setBaseSize(QSize(70, 70));
        btn11->setFont(font);
        btn11->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn11, 2, 2, 1, 1);

        btn7 = new QPushButton(layoutWidget);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setMinimumSize(QSize(70, 70));
        btn7->setMaximumSize(QSize(70, 70));
        btn7->setBaseSize(QSize(70, 70));
        btn7->setFont(font);
        btn7->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn7, 1, 2, 1, 1);

        btn6 = new QPushButton(layoutWidget);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setMinimumSize(QSize(70, 70));
        btn6->setMaximumSize(QSize(70, 70));
        btn6->setBaseSize(QSize(70, 70));
        btn6->setFont(font);
        btn6->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn6, 1, 1, 1, 1);

        btn9 = new QPushButton(layoutWidget);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setMinimumSize(QSize(70, 70));
        btn9->setMaximumSize(QSize(70, 70));
        btn9->setBaseSize(QSize(70, 70));
        btn9->setFont(font);
        btn9->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn9, 2, 0, 1, 1);

        btn12 = new QPushButton(layoutWidget);
        btn12->setObjectName(QStringLiteral("btn12"));
        btn12->setMinimumSize(QSize(70, 70));
        btn12->setMaximumSize(QSize(70, 70));
        btn12->setBaseSize(QSize(70, 70));
        btn12->setFont(font);
        btn12->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn12, 2, 3, 1, 1);

        btn4 = new QPushButton(layoutWidget);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setMinimumSize(QSize(70, 70));
        btn4->setMaximumSize(QSize(70, 70));
        btn4->setBaseSize(QSize(70, 70));
        btn4->setFont(font);
        btn4->setStyleSheet(QLatin1String("background-color: rgb(90, 90, 90);\n"
"color: rgb(255, 255, 255);"));

        gridLayout->addWidget(btn4, 0, 3, 1, 1);

        controlBox = new QGroupBox(centralWidget);
        controlBox->setObjectName(QStringLiteral("controlBox"));
        controlBox->setGeometry(QRect(320, 20, 160, 200));
        controlBox->setMinimumSize(QSize(160, 140));
        controlBox->setMaximumSize(QSize(160, 200));
        layoutWidget1 = new QWidget(controlBox);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 11, 142, 184));
        gridLayout_2 = new QGridLayout(layoutWidget1);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        btn_shufle = new QPushButton(layoutWidget1);
        btn_shufle->setObjectName(QStringLiteral("btn_shufle"));
        btn_shufle->setMinimumSize(QSize(140, 40));
        btn_shufle->setMaximumSize(QSize(140, 40));
        QFont font1;
        font1.setPointSize(16);
        btn_shufle->setFont(font1);
        btn_shufle->setStyleSheet(QLatin1String("background-color: rgb(0, 100, 0);\n"
"color: rgb(255, 255, 255);"));

        gridLayout_2->addWidget(btn_shufle, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(17, 7, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 1, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setPointSize(12);
        label->setFont(font2);

        horizontalLayout->addWidget(label);

        btnSizeBox = new QSpinBox(layoutWidget1);
        btnSizeBox->setObjectName(QStringLiteral("btnSizeBox"));
        btnSizeBox->setMinimumSize(QSize(50, 20));
        btnSizeBox->setMaximumSize(QSize(50, 20));
        btnSizeBox->setFont(font2);
        btnSizeBox->setValue(90);

        horizontalLayout->addWidget(btnSizeBox);


        gridLayout_2->addLayout(horizontalLayout, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(17, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font2);

        horizontalLayout_2->addWidget(label_2);

        layoutSizeBox = new QSpinBox(layoutWidget1);
        layoutSizeBox->setObjectName(QStringLiteral("layoutSizeBox"));
        layoutSizeBox->setMinimumSize(QSize(50, 20));
        layoutSizeBox->setMaximumSize(QSize(50, 20));
        layoutSizeBox->setFont(font2);
        layoutSizeBox->setValue(5);

        horizontalLayout_2->addWidget(layoutSizeBox);


        gridLayout_2->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        count_move = new QLabel(layoutWidget1);
        count_move->setObjectName(QStringLiteral("count_move"));
        count_move->setMinimumSize(QSize(100, 20));
        count_move->setMaximumSize(QSize(50, 20));
        count_move->setFont(font2);

        horizontalLayout_3->addWidget(count_move);

        count = new QLabel(layoutWidget1);
        count->setObjectName(QStringLiteral("count"));
        count->setMinimumSize(QSize(25, 15));
        count->setMaximumSize(QSize(25, 16777215));
        count->setFont(font2);

        horizontalLayout_3->addWidget(count);


        gridLayout_2->addLayout(horizontalLayout_3, 5, 0, 1, 1);

        levelBox = new QComboBox(layoutWidget1);
        levelBox->setObjectName(QStringLiteral("levelBox"));
        levelBox->setFont(font2);

        gridLayout_2->addWidget(levelBox, 6, 0, 1, 1);

        Fifteen->setCentralWidget(centralWidget);

        retranslateUi(Fifteen);

        QMetaObject::connectSlotsByName(Fifteen);
    } // setupUi

    void retranslateUi(QMainWindow *Fifteen)
    {
        Fifteen->setWindowTitle(QApplication::translate("Fifteen", "Fifteen", 0));
        btn10->setText(QApplication::translate("Fifteen", "10", 0));
        btn13->setText(QApplication::translate("Fifteen", "13", 0));
        btn5->setText(QApplication::translate("Fifteen", "5", 0));
        btn15->setText(QApplication::translate("Fifteen", "15", 0));
        btn3->setText(QApplication::translate("Fifteen", "3", 0));
        btn2->setText(QApplication::translate("Fifteen", "2", 0));
        btn14->setText(QApplication::translate("Fifteen", "14", 0));
        btn8->setText(QApplication::translate("Fifteen", "8", 0));
        btn1->setText(QApplication::translate("Fifteen", "1", 0));
        btn11->setText(QApplication::translate("Fifteen", "11", 0));
        btn7->setText(QApplication::translate("Fifteen", "7", 0));
        btn6->setText(QApplication::translate("Fifteen", "6", 0));
        btn9->setText(QApplication::translate("Fifteen", "9", 0));
        btn12->setText(QApplication::translate("Fifteen", "12", 0));
        btn4->setText(QApplication::translate("Fifteen", "4", 0));
        controlBox->setTitle(QString());
        btn_shufle->setText(QApplication::translate("Fifteen", "Shuffle", 0));
        label->setText(QApplication::translate("Fifteen", "Button size", 0));
        label_2->setText(QApplication::translate("Fifteen", "Layout size", 0));
        count_move->setText(QApplication::translate("Fifteen", "Count move", 0));
        count->setText(QApplication::translate("Fifteen", "0", 0));
        levelBox->clear();
        levelBox->insertItems(0, QStringList()
         << QApplication::translate("Fifteen", "Clasical", 0)
         << QApplication::translate("Fifteen", "Palm", 0)
         << QApplication::translate("Fifteen", "Rome", 0)
         << QApplication::translate("Fifteen", "Cat", 0)
         << QApplication::translate("Fifteen", "Castle", 0)
        );
    } // retranslateUi

};

namespace Ui {
    class Fifteen: public Ui_Fifteen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIFTEEN_H
