#pragma once

#include <QtWidgets/QMainWindow>
#include "../../GeneratedFiles/ui_Algorytmy.h"
#include "../../List/One-way/Header/OneWay.h"
#include "../../Algorithm/BubbleSort/BubbleSort.h"
#include "../../Algorithm/MergeSort/MergeSort.h"

using namespace std;

class Algorytmy : public QMainWindow
{
	Q_OBJECT

public:
	Algorytmy(QWidget *parent = Q_NULLPTR);

private:
	Ui::AlgorytmyClass* ui;
	OneWay<int>* list;
	BubbleSort bubbleSort;
	MergeSort mergeSort;
	QPoint mousePos;

	QMenu* menu;
	QAction* actionAsc;
	QAction* actionDesc;

	void WriteOnScreen(string text);

private slots:

	/*********************
	 * BUTTONS
	 *********************/
	void on_btnAddBeginning_clicked();
	void on_btnAddOnEnd_clicked();
	void on_btnDeleteList_clicked();
	void on_btnDeleteFirst_clicked();
	void on_btnDeleteByItem_clicked();
	void on_btnDeleteTwoEven_clicked();
	void on_btnChangeWithNext_clicked();
	void on_btnRetrunContentOfList_clicked();
	void on_btnCount_clicked();
	void on_btnBubbleSort_clicked();
	void on_btnMergeSort_clicked();


	/*********************
	 * SORTING FUNCTION
	 *********************/
	void BubbleSortAsc();
	void BubbleSortDesc();

	void MergeSortAsc();
	void MergeSortDesc();
};
