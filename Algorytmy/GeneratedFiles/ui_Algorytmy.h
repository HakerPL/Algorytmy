/********************************************************************************
** Form generated from reading UI file 'Algorytmy.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ALGORYTMY_H
#define UI_ALGORYTMY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AlgorytmyClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *tbScreen;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpinBox *sbInt;
    QPushButton *btnAddBeginning;
    QPushButton *btnAddOnEnd;
    QPushButton *btnDeleteList;
    QPushButton *btnDeleteFirst;
    QPushButton *btnDeleteByItem;
    QPushButton *btnDeleteTwoEven;
    QPushButton *btnChangeWithNext;
    QPushButton *btnRetrunContentOfList;
    QPushButton *btnCount;

    void setupUi(QMainWindow *AlgorytmyClass)
    {
        if (AlgorytmyClass->objectName().isEmpty())
            AlgorytmyClass->setObjectName(QStringLiteral("AlgorytmyClass"));
        AlgorytmyClass->resize(593, 444);
        centralWidget = new QWidget(AlgorytmyClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinAndMaxSize);
        tbScreen = new QTextEdit(centralWidget);
        tbScreen->setObjectName(QStringLiteral("tbScreen"));
        tbScreen->setMinimumSize(QSize(300, 0));
        tbScreen->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tbScreen->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tbScreen->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tbScreen->setReadOnly(true);

        horizontalLayout_2->addWidget(tbScreen);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(160, 0));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(16777215, 10));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        sbInt = new QSpinBox(groupBox);
        sbInt->setObjectName(QStringLiteral("sbInt"));
        sbInt->setMinimum(-1000);
        sbInt->setMaximum(1000);

        verticalLayout->addWidget(sbInt);

        btnAddBeginning = new QPushButton(groupBox);
        btnAddBeginning->setObjectName(QStringLiteral("btnAddBeginning"));
        btnAddBeginning->setMinimumSize(QSize(140, 30));

        verticalLayout->addWidget(btnAddBeginning);

        btnAddOnEnd = new QPushButton(groupBox);
        btnAddOnEnd->setObjectName(QStringLiteral("btnAddOnEnd"));
        btnAddOnEnd->setMinimumSize(QSize(140, 30));

        verticalLayout->addWidget(btnAddOnEnd);

        btnDeleteList = new QPushButton(groupBox);
        btnDeleteList->setObjectName(QStringLiteral("btnDeleteList"));
        btnDeleteList->setMinimumSize(QSize(140, 30));

        verticalLayout->addWidget(btnDeleteList);

        btnDeleteFirst = new QPushButton(groupBox);
        btnDeleteFirst->setObjectName(QStringLiteral("btnDeleteFirst"));
        btnDeleteFirst->setMinimumSize(QSize(140, 30));

        verticalLayout->addWidget(btnDeleteFirst);

        btnDeleteByItem = new QPushButton(groupBox);
        btnDeleteByItem->setObjectName(QStringLiteral("btnDeleteByItem"));
        btnDeleteByItem->setMinimumSize(QSize(140, 30));

        verticalLayout->addWidget(btnDeleteByItem);

        btnDeleteTwoEven = new QPushButton(groupBox);
        btnDeleteTwoEven->setObjectName(QStringLiteral("btnDeleteTwoEven"));
        btnDeleteTwoEven->setMinimumSize(QSize(140, 30));

        verticalLayout->addWidget(btnDeleteTwoEven);

        btnChangeWithNext = new QPushButton(groupBox);
        btnChangeWithNext->setObjectName(QStringLiteral("btnChangeWithNext"));
        btnChangeWithNext->setMinimumSize(QSize(140, 30));

        verticalLayout->addWidget(btnChangeWithNext);

        btnRetrunContentOfList = new QPushButton(groupBox);
        btnRetrunContentOfList->setObjectName(QStringLiteral("btnRetrunContentOfList"));
        btnRetrunContentOfList->setMinimumSize(QSize(140, 30));

        verticalLayout->addWidget(btnRetrunContentOfList);

        btnCount = new QPushButton(groupBox);
        btnCount->setObjectName(QStringLiteral("btnCount"));
        btnCount->setMinimumSize(QSize(140, 30));

        verticalLayout->addWidget(btnCount);


        horizontalLayout_2->addWidget(groupBox);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        AlgorytmyClass->setCentralWidget(centralWidget);

        retranslateUi(AlgorytmyClass);

        QMetaObject::connectSlotsByName(AlgorytmyClass);
    } // setupUi

    void retranslateUi(QMainWindow *AlgorytmyClass)
    {
        AlgorytmyClass->setWindowTitle(QApplication::translate("AlgorytmyClass", "Algorytmy", Q_NULLPTR));
        groupBox->setTitle(QString());
        label->setText(QApplication::translate("AlgorytmyClass", "Number to Add or Delete", Q_NULLPTR));
        btnAddBeginning->setText(QApplication::translate("AlgorytmyClass", "Add Beginning", Q_NULLPTR));
        btnAddOnEnd->setText(QApplication::translate("AlgorytmyClass", "Add On End", Q_NULLPTR));
        btnDeleteList->setText(QApplication::translate("AlgorytmyClass", "Delete List", Q_NULLPTR));
        btnDeleteFirst->setText(QApplication::translate("AlgorytmyClass", "Delete First", Q_NULLPTR));
        btnDeleteByItem->setText(QApplication::translate("AlgorytmyClass", "Delete By Item", Q_NULLPTR));
        btnDeleteTwoEven->setText(QApplication::translate("AlgorytmyClass", "Delete Two Even", Q_NULLPTR));
        btnChangeWithNext->setText(QApplication::translate("AlgorytmyClass", "Change With Next", Q_NULLPTR));
        btnRetrunContentOfList->setText(QApplication::translate("AlgorytmyClass", "Show Content Of List", Q_NULLPTR));
        btnCount->setText(QApplication::translate("AlgorytmyClass", "Count Of Elements On List", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AlgorytmyClass: public Ui_AlgorytmyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGORYTMY_H
