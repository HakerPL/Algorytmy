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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
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
    QTabWidget *tabWidget;
    QWidget *tabList;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpinBox *sbInt;
    QPushButton *btnAddBeginning;
    QPushButton *btnAddOnEnd;
    QPushButton *btnDeleteList;
    QPushButton *btnDeleteFirst;
    QPushButton *btnDeleteByItem;
    QPushButton *btnDeleteTwoEven;
    QPushButton *btnChangeWithNext;
    QWidget *tabSortAlgorithm;
    QFormLayout *formLayout;
    QPushButton *btnBubbleSort;
    QPushButton *btnRetrunContentOfList_3;
    QPushButton *btnRetrunContentOfList_2;
    QPushButton *btnRetrunContentOfList_4;
    QPushButton *btnRetrunContentOfList_10;
    QPushButton *btnMergeSort;
    QPushButton *btnRetrunContentOfList_7;
    QPushButton *btnRetrunContentOfList_8;
    QPushButton *btnRetrunContentOfList_5;
    QPushButton *btnRetrunContentOfList_9;
    QWidget *tabSearAlgorithm;
    QLabel *label_2;
    QWidget *tabGraphAlgorithm;
    QLabel *label_3;
    QPushButton *btnRetrunContentOfList;
    QPushButton *btnCount;
    QLabel *label_4;

    void setupUi(QMainWindow *AlgorytmyClass)
    {
        if (AlgorytmyClass->objectName().isEmpty())
            AlgorytmyClass->setObjectName(QStringLiteral("AlgorytmyClass"));
        AlgorytmyClass->resize(914, 590);
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
        tbScreen->setMaximumSize(QSize(450, 16777215));
        tbScreen->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tbScreen->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tbScreen->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        tbScreen->setReadOnly(true);

        horizontalLayout_2->addWidget(tbScreen);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setMinimumSize(QSize(160, 0));
        groupBox->setAlignment(Qt::AlignCenter);
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        tabWidget = new QTabWidget(groupBox);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabList = new QWidget();
        tabList->setObjectName(QStringLiteral("tabList"));
        verticalLayout_2 = new QVBoxLayout(tabList);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(tabList);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(200, 25));
        label->setMaximumSize(QSize(200, 25));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label, 0, Qt::AlignHCenter);

        sbInt = new QSpinBox(tabList);
        sbInt->setObjectName(QStringLiteral("sbInt"));
        sbInt->setMinimumSize(QSize(200, 25));
        sbInt->setMaximumSize(QSize(200, 25));
        sbInt->setMinimum(-1000);
        sbInt->setMaximum(1000);

        verticalLayout_2->addWidget(sbInt, 0, Qt::AlignHCenter);

        btnAddBeginning = new QPushButton(tabList);
        btnAddBeginning->setObjectName(QStringLiteral("btnAddBeginning"));
        btnAddBeginning->setMinimumSize(QSize(200, 30));
        btnAddBeginning->setMaximumSize(QSize(200, 30));

        verticalLayout_2->addWidget(btnAddBeginning, 0, Qt::AlignHCenter);

        btnAddOnEnd = new QPushButton(tabList);
        btnAddOnEnd->setObjectName(QStringLiteral("btnAddOnEnd"));
        btnAddOnEnd->setMinimumSize(QSize(200, 30));
        btnAddOnEnd->setMaximumSize(QSize(200, 30));

        verticalLayout_2->addWidget(btnAddOnEnd, 0, Qt::AlignHCenter);

        btnDeleteList = new QPushButton(tabList);
        btnDeleteList->setObjectName(QStringLiteral("btnDeleteList"));
        btnDeleteList->setMinimumSize(QSize(200, 30));
        btnDeleteList->setMaximumSize(QSize(200, 30));

        verticalLayout_2->addWidget(btnDeleteList, 0, Qt::AlignHCenter);

        btnDeleteFirst = new QPushButton(tabList);
        btnDeleteFirst->setObjectName(QStringLiteral("btnDeleteFirst"));
        btnDeleteFirst->setMinimumSize(QSize(200, 30));
        btnDeleteFirst->setMaximumSize(QSize(200, 30));

        verticalLayout_2->addWidget(btnDeleteFirst, 0, Qt::AlignHCenter);

        btnDeleteByItem = new QPushButton(tabList);
        btnDeleteByItem->setObjectName(QStringLiteral("btnDeleteByItem"));
        btnDeleteByItem->setMinimumSize(QSize(200, 30));
        btnDeleteByItem->setMaximumSize(QSize(200, 30));

        verticalLayout_2->addWidget(btnDeleteByItem, 0, Qt::AlignHCenter);

        btnDeleteTwoEven = new QPushButton(tabList);
        btnDeleteTwoEven->setObjectName(QStringLiteral("btnDeleteTwoEven"));
        btnDeleteTwoEven->setMinimumSize(QSize(200, 30));
        btnDeleteTwoEven->setMaximumSize(QSize(200, 30));

        verticalLayout_2->addWidget(btnDeleteTwoEven, 0, Qt::AlignHCenter);

        btnChangeWithNext = new QPushButton(tabList);
        btnChangeWithNext->setObjectName(QStringLiteral("btnChangeWithNext"));
        btnChangeWithNext->setMinimumSize(QSize(200, 30));
        btnChangeWithNext->setMaximumSize(QSize(200, 30));

        verticalLayout_2->addWidget(btnChangeWithNext, 0, Qt::AlignHCenter);

        tabWidget->addTab(tabList, QString());
        btnChangeWithNext->raise();
        btnDeleteList->raise();
        btnDeleteByItem->raise();
        sbInt->raise();
        btnAddBeginning->raise();
        label->raise();
        btnDeleteFirst->raise();
        btnDeleteTwoEven->raise();
        btnAddOnEnd->raise();
        tabSortAlgorithm = new QWidget();
        tabSortAlgorithm->setObjectName(QStringLiteral("tabSortAlgorithm"));
        formLayout = new QFormLayout(tabSortAlgorithm);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        btnBubbleSort = new QPushButton(tabSortAlgorithm);
        btnBubbleSort->setObjectName(QStringLiteral("btnBubbleSort"));
        btnBubbleSort->setMinimumSize(QSize(200, 30));
        btnBubbleSort->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(0, QFormLayout::LabelRole, btnBubbleSort);

        btnRetrunContentOfList_3 = new QPushButton(tabSortAlgorithm);
        btnRetrunContentOfList_3->setObjectName(QStringLiteral("btnRetrunContentOfList_3"));
        btnRetrunContentOfList_3->setMinimumSize(QSize(200, 30));
        btnRetrunContentOfList_3->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(1, QFormLayout::LabelRole, btnRetrunContentOfList_3);

        btnRetrunContentOfList_2 = new QPushButton(tabSortAlgorithm);
        btnRetrunContentOfList_2->setObjectName(QStringLiteral("btnRetrunContentOfList_2"));
        btnRetrunContentOfList_2->setMinimumSize(QSize(200, 30));
        btnRetrunContentOfList_2->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(2, QFormLayout::LabelRole, btnRetrunContentOfList_2);

        btnRetrunContentOfList_4 = new QPushButton(tabSortAlgorithm);
        btnRetrunContentOfList_4->setObjectName(QStringLiteral("btnRetrunContentOfList_4"));
        btnRetrunContentOfList_4->setMinimumSize(QSize(200, 30));
        btnRetrunContentOfList_4->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(3, QFormLayout::LabelRole, btnRetrunContentOfList_4);

        btnRetrunContentOfList_10 = new QPushButton(tabSortAlgorithm);
        btnRetrunContentOfList_10->setObjectName(QStringLiteral("btnRetrunContentOfList_10"));
        btnRetrunContentOfList_10->setMinimumSize(QSize(200, 30));
        btnRetrunContentOfList_10->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(4, QFormLayout::LabelRole, btnRetrunContentOfList_10);

        btnMergeSort = new QPushButton(tabSortAlgorithm);
        btnMergeSort->setObjectName(QStringLiteral("btnMergeSort"));
        btnMergeSort->setMinimumSize(QSize(200, 30));
        btnMergeSort->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(0, QFormLayout::FieldRole, btnMergeSort);

        btnRetrunContentOfList_7 = new QPushButton(tabSortAlgorithm);
        btnRetrunContentOfList_7->setObjectName(QStringLiteral("btnRetrunContentOfList_7"));
        btnRetrunContentOfList_7->setMinimumSize(QSize(200, 30));
        btnRetrunContentOfList_7->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(1, QFormLayout::FieldRole, btnRetrunContentOfList_7);

        btnRetrunContentOfList_8 = new QPushButton(tabSortAlgorithm);
        btnRetrunContentOfList_8->setObjectName(QStringLiteral("btnRetrunContentOfList_8"));
        btnRetrunContentOfList_8->setMinimumSize(QSize(200, 30));
        btnRetrunContentOfList_8->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(2, QFormLayout::FieldRole, btnRetrunContentOfList_8);

        btnRetrunContentOfList_5 = new QPushButton(tabSortAlgorithm);
        btnRetrunContentOfList_5->setObjectName(QStringLiteral("btnRetrunContentOfList_5"));
        btnRetrunContentOfList_5->setMinimumSize(QSize(200, 30));
        btnRetrunContentOfList_5->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(3, QFormLayout::FieldRole, btnRetrunContentOfList_5);

        btnRetrunContentOfList_9 = new QPushButton(tabSortAlgorithm);
        btnRetrunContentOfList_9->setObjectName(QStringLiteral("btnRetrunContentOfList_9"));
        btnRetrunContentOfList_9->setEnabled(true);
        btnRetrunContentOfList_9->setMinimumSize(QSize(200, 30));
        btnRetrunContentOfList_9->setMaximumSize(QSize(200, 30));

        formLayout->setWidget(4, QFormLayout::FieldRole, btnRetrunContentOfList_9);

        tabWidget->addTab(tabSortAlgorithm, QString());
        tabSearAlgorithm = new QWidget();
        tabSearAlgorithm->setObjectName(QStringLiteral("tabSearAlgorithm"));
        label_2 = new QLabel(tabSearAlgorithm);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 100, 261, 61));
        label_2->setMinimumSize(QSize(200, 25));
        label_2->setMaximumSize(QSize(500, 100));
        QFont font;
        font.setPointSize(25);
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tabSearAlgorithm, QString());
        tabGraphAlgorithm = new QWidget();
        tabGraphAlgorithm->setObjectName(QStringLiteral("tabGraphAlgorithm"));
        label_3 = new QLabel(tabGraphAlgorithm);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 100, 261, 61));
        label_3->setMinimumSize(QSize(200, 25));
        label_3->setMaximumSize(QSize(500, 100));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);
        tabWidget->addTab(tabGraphAlgorithm, QString());

        verticalLayout->addWidget(tabWidget);

        btnRetrunContentOfList = new QPushButton(groupBox);
        btnRetrunContentOfList->setObjectName(QStringLiteral("btnRetrunContentOfList"));
        btnRetrunContentOfList->setMinimumSize(QSize(200, 30));
        btnRetrunContentOfList->setMaximumSize(QSize(200, 30));

        verticalLayout->addWidget(btnRetrunContentOfList, 0, Qt::AlignHCenter);

        btnCount = new QPushButton(groupBox);
        btnCount->setObjectName(QStringLiteral("btnCount"));
        btnCount->setMinimumSize(QSize(200, 30));
        btnCount->setMaximumSize(QSize(200, 30));
        btnCount->setLayoutDirection(Qt::LeftToRight);

        verticalLayout->addWidget(btnCount, 0, Qt::AlignHCenter);


        horizontalLayout_2->addWidget(groupBox);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setLayoutDirection(Qt::LeftToRight);
        label_4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_4->setMargin(0);

        gridLayout->addWidget(label_4, 1, 0, 1, 1);

        AlgorytmyClass->setCentralWidget(centralWidget);

        retranslateUi(AlgorytmyClass);

        tabWidget->setCurrentIndex(1);


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
        tabWidget->setTabText(tabWidget->indexOf(tabList), QApplication::translate("AlgorytmyClass", "List Operation", Q_NULLPTR));
        btnBubbleSort->setText(QApplication::translate("AlgorytmyClass", "Bubble Sort", Q_NULLPTR));
        btnRetrunContentOfList_3->setText(QApplication::translate("AlgorytmyClass", "Coming Soon", Q_NULLPTR));
        btnRetrunContentOfList_2->setText(QApplication::translate("AlgorytmyClass", "Coming Soon", Q_NULLPTR));
        btnRetrunContentOfList_4->setText(QApplication::translate("AlgorytmyClass", "Coming Soon", Q_NULLPTR));
        btnRetrunContentOfList_10->setText(QApplication::translate("AlgorytmyClass", "Coming Soon", Q_NULLPTR));
        btnMergeSort->setText(QApplication::translate("AlgorytmyClass", "Merge Sort", Q_NULLPTR));
        btnRetrunContentOfList_7->setText(QApplication::translate("AlgorytmyClass", "Coming Soon", Q_NULLPTR));
        btnRetrunContentOfList_8->setText(QApplication::translate("AlgorytmyClass", "Coming Soon", Q_NULLPTR));
        btnRetrunContentOfList_5->setText(QApplication::translate("AlgorytmyClass", "Coming Soon", Q_NULLPTR));
        btnRetrunContentOfList_9->setText(QApplication::translate("AlgorytmyClass", "Coming Soon", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabSortAlgorithm), QApplication::translate("AlgorytmyClass", "Sorting Algorithm", Q_NULLPTR));
        label_2->setText(QApplication::translate("AlgorytmyClass", "Coming Soon", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabSearAlgorithm), QApplication::translate("AlgorytmyClass", "Search Algorithms", Q_NULLPTR));
        label_3->setText(QApplication::translate("AlgorytmyClass", "Coming Soon", Q_NULLPTR));
        tabWidget->setTabText(tabWidget->indexOf(tabGraphAlgorithm), QApplication::translate("AlgorytmyClass", "Graph Algorithms", Q_NULLPTR));
        btnRetrunContentOfList->setText(QApplication::translate("AlgorytmyClass", "Show Content Of List", Q_NULLPTR));
        btnCount->setText(QApplication::translate("AlgorytmyClass", "Count Of Elements On List", Q_NULLPTR));
        label_4->setText(QApplication::translate("AlgorytmyClass", "Create by Adrian Rojek", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AlgorytmyClass: public Ui_AlgorytmyClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ALGORYTMY_H
