#include "../Header/Algorytmy.h"
#include <QString>
#include <QScrollBar>

Algorytmy::Algorytmy(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::AlgorytmyClass)
{
	ui->setupUi(this);
	list = new OneWay<int>();
	WriteOnScreen("test function \n");
}

void Algorytmy::on_btnAddBeginning_clicked()
{
	list->AddBeginning(ui->sbInt->value());

	string text = "\n-Operation add on begine DONE.";
	WriteOnScreen(text);
}

void Algorytmy::on_btnAddOnEnd_clicked()
{
	list->AddOnEnd(ui->sbInt->value());

	string text = "\n-Operation add on end DONE.";
	WriteOnScreen(text);
}

void Algorytmy::on_btnDeleteList_clicked()
{
	list->DeleteList();

	string text = "\n-Operation delete all list DONE.";
	WriteOnScreen(text);
}

void Algorytmy::on_btnDeleteFirst_clicked()
{
	list->DeleteFirst();

	string text = "\n-Operation delete first element on list DONE.";
	WriteOnScreen(text);
}

void Algorytmy::on_btnDeleteByItem_clicked()
{
	list->DeleteByItem(ui->sbInt->value());

	string text = "\n-Operation delete element on list by item DONE.";
	WriteOnScreen(text);
}

void Algorytmy::on_btnDeleteTwoEven_clicked()
{
	list->DeleteTwoEven();

	string text = "\n-Operation delete two even item on list DONE.";
	WriteOnScreen(text);
}

void Algorytmy::on_btnChangeWithNext_clicked()
{
	list->ChangeWithNext(ui->sbInt->value());

	string text = "\n-Operation change with next element on list by item DONE.";
	WriteOnScreen(text);
}

void Algorytmy::on_btnRetrunContentOfList_clicked()
{
	string text = "\n-Item on list \n\t" + list->RetrunContentOfList();
	WriteOnScreen(text);
}

void Algorytmy::on_btnCount_clicked()
{
	string text = "\n-Item count on list = " + to_string(list->Count());
	WriteOnScreen(text);
}

void Algorytmy::WriteOnScreen(string text)
{
	QString tbScreenText = ui->tbScreen->toPlainText();
	tbScreenText += QString::fromStdString(text);
	ui->tbScreen->setText(tbScreenText);
	ui->tbScreen->verticalScrollBar()->setSliderPosition(ui->tbScreen->verticalScrollBar()->maximum());
}
