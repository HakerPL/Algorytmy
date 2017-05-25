#include "BaseAlgorithm.h"

BaseAlgorithmSort::BaseAlgorithmSort()
{
	Reset();
}

BaseAlgorithmSort::~BaseAlgorithmSort() {}

int BaseAlgorithmSort::TotalAction()
{
	return constructionsAction + assignmentsAction + incrementsAction
		+ decrementAction + plusAction + plusAssignAction
		+ subtractAction + subtractAssignAction + differencesAction
		+ equalityAction + lessAction;
}

string BaseAlgorithmSort::ReportAlgorithm() 
{
	string algorithmReport =
		"Iterator stats: \n"
		"  Constructions:  " + to_string(constructionsAction)	+ "\n"
		"  Assignments:    " + to_string(assignmentsAction)		+ "\n"
		"  Increments:     " + to_string(incrementsAction)		+ "\n"
		"  Decrement:      " + to_string(decrementAction)		+ "\n"
		"  Plus:           " + to_string(plusAction)			+ "\n"
		"  PlusAssign:     " + to_string(plusAssignAction)		+ "\n"
		"  Subtract:       " + to_string(subtractAction)		+ "\n"
		"  SubtractAssign: " + to_string(subtractAssignAction)	+ "\n"
		"  Differences     " + to_string(differencesAction)		+ "\n"
		"  Equality comps: " + to_string(equalityAction)		+ "\n"
		"  Less comps:     " + to_string(lessAction)			+ "\n"
		"  TOTAL:          " + to_string(TotalAction())			+ "\n";

	return algorithmReport;
}

void BaseAlgorithmSort::Reset() {
	constructionsAction		= 0;
	assignmentsAction		= 0;
	incrementsAction		= 0;
	decrementAction			= 0;
	plusAction				= 0;
	plusAssignAction		= 0;
	subtractAction			= 0;
	subtractAssignAction	= 0;
	differencesAction		= 0;
	equalityAction			= 0;
	lessAction				= 0;
}