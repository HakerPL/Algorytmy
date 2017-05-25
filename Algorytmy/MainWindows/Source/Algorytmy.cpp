#include "../Header/Algorytmy.h"
#include <QString>
#include <QScrollBar>
#include <QMenuBar>
#include <QMouseEvent>

Algorytmy::Algorytmy(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::AlgorytmyClass)
{
	ui->setupUi(this);

	//setWindowIcon(QIcon(":../../Resources/logo.png"));

	list = new OneWay<int>();
	WriteOnScreen("Program showing the operation of one-way list and algorithms \n sorting, search, graph. \n");

	bubbleSort = BubbleSort();
	mergeSort = MergeSort();
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
	list->ChangeWithNextByItem(ui->sbInt->value());

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

void Algorytmy::on_btnBubbleSort_clicked()
{
	menu = new QMenu(this);

	actionAsc = new QAction("Sort Asc", this);
	actionDesc = new QAction("Sort Desc", this);
	connect(actionAsc, SIGNAL(triggered()), this, SLOT(BubbleSortAsc()));
	connect(actionDesc, SIGNAL(triggered()), this, SLOT(BubbleSortDesc()));

	menu->addAction(actionAsc);
	menu->addAction(actionDesc);

	QPoint pp = QCursor::pos();
	menu->popup(pp);
}

void Algorytmy::BubbleSortAsc()
{
	bubbleSort.SortAsc<int>(list);
	bubbleSort.ReportAlgorithm();
	WriteOnScreen("\n-BubbleSort Asc DONE");
}

void Algorytmy::BubbleSortDesc()
{
	bubbleSort.SortDesc<int>(list);
	bubbleSort.ReportAlgorithm();
	WriteOnScreen("\n-BubbleSort Desc DONE");
}

void Algorytmy::on_btnMergeSort_clicked()
{
	menu = new QMenu(this);

	actionAsc = new QAction("Sort Asc", this);
	actionDesc = new QAction("Sort Desc", this);
	connect(actionAsc, SIGNAL(triggered()), this, SLOT(MergeSortAsc()));
	connect(actionDesc, SIGNAL(triggered()), this, SLOT(MergeSortDesc()));

	menu->addAction(actionAsc);
	menu->addAction(actionDesc);

	QPoint pp = QCursor::pos();
	menu->popup(pp);
}

void Algorytmy::MergeSortAsc()
{
	mergeSort.SortAsc<int>(list);
	mergeSort.ReportAlgorithm();
	WriteOnScreen("\n-MergeSort Asc DONE");
}

void Algorytmy::MergeSortDesc()
{
	mergeSort.SortDesc<int>(list);
	mergeSort.ReportAlgorithm();
	WriteOnScreen("\n-MergeSort Desc DONE");
}

void Algorytmy::WriteOnScreen(string text)
{
	QString tbScreenText = ui->tbScreen->toPlainText();
	tbScreenText += QString::fromStdString(text);
	ui->tbScreen->setText(tbScreenText);
	ui->tbScreen->verticalScrollBar()->setSliderPosition(ui->tbScreen->verticalScrollBar()->maximum());
}
