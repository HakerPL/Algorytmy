#pragma once

//#include <QtWidgets/QMainWindow>
#include "../../GeneratedFiles/ui_Algorytmy.h"
#include "../../List/One-way/Header/OneWay.h"

using namespace std;

class Algorytmy : public QMainWindow
{
	Q_OBJECT

public:
	Algorytmy(QWidget *parent = Q_NULLPTR);

private:
	Ui::AlgorytmyClass* ui;
	OneWay<int>* list;
	void WriteOnScreen(string text);

private slots:
	void on_btnAddBeginning_clicked();
	void on_btnAddOnEnd_clicked();
	void on_btnDeleteList_clicked();
	void on_btnDeleteFirst_clicked();
	void on_btnDeleteByItem_clicked();
	void on_btnDeleteTwoEven_clicked();
	void on_btnChangeWithNext_clicked();
	void on_btnRetrunContentOfList_clicked();
	void on_btnCount_clicked();
};
