#pragma once
#include <string>
#include "../List/BaseList.h"

using namespace std;

class BaseAlgorithmSort
{
public:

	BaseAlgorithmSort();
	virtual ~BaseAlgorithmSort();
	int TotalAction();
	string ReportAlgorithm();

protected:
	int constructionsAction;
	int assignmentsAction;
	int incrementsAction;
	int decrementAction;
	int plusAction;
	int plusAssignAction;
	int subtractAction;
	int subtractAssignAction;
	int differencesAction;
	int equalityAction;
	int lessAction;

	void Reset();

	void Increment()
	{
		++incrementsAction;
	}

	void Decrement()
	{
		++decrementAction;
	}

	void Plus()
	{
		++plusAction;
	}

	void PlusAssign()
	{
		++plusAssignAction;
	}

	void Subtract()
	{
		++subtractAction;
	}

	void SubtractAssign()
	{
		++subtractAssignAction;
	}

	void Constructions()
	{
		++constructionsAction;
	}

	void Assignments()
	{
		++assignmentsAction;
	}

	void Differences()
	{
		++differencesAction;
	}

	void EqualityComps()
	{
		++equalityAction;
	}

	void LessComps()
	{
		++lessAction;
	}

};

