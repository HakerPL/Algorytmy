#pragma once
#include "../BaseAlgorithm.h"
//#include "../../List/BaseList.h"

class BubbleSort : public BaseAlgorithmSort
{
public:
	BubbleSort() : BaseAlgorithmSort() {};
	~BubbleSort() {};

	template <typename T>
	void SortDesc(BaseList<T>* set);

	template <typename T>
	void SortAsc(BaseList<T>* set);
};


template <typename T>
void BubbleSort::SortDesc(BaseList<T>* set)
{
	nodeList<T>* lastChange;
	bool change;
	nodeList<T>* node0 = set->GetHead();
	if (node0 == nullptr || node0->next == nullptr)
		return;

	nodeList<T>* node1;
	nodeList<T>* node2;
	do
	{
		change = false;
		node0 = set->GetHead();

		if(node0->item < node0->next->item)
		{
			set->ChangeWithNextByPointer();
			node0 = set->GetHead();
		}

		node1 = node0->next;
		node2 = node1->next;

		while (node0 != nullptr && node1 != nullptr && node2 != nullptr)
		{
			if (lastChange != nullptr && lastChange == node0)
				break;

			if (node1->item < node2->item)
			{
				change = true;
				set->ChangeWithNextByPointer(node0);
				lastChange = node0;
			}

			node0 = node0->next;
			node1 = node0->next;
			node2 = node1->next;
		}
	} while (change);
}

template <typename T>
void BubbleSort::SortAsc(BaseList<T>* set)
{
	nodeList<T>* lastChange;
	bool change;
	nodeList<T>* node0 = set->GetHead();
	if (node0 == nullptr || node0->next == nullptr)
		return;

	nodeList<T>* node1;
	nodeList<T>* node2;
	do
	{
		change = false;
		node0 = set->GetHead();

		if (node0->item > node0->next->item)
		{
			set->ChangeWithNextByPointer();
			node0 = set->GetHead();
		}

		node1 = node0->next;
		node2 = node1->next;

		while (node0 != nullptr && node1 != nullptr && node2 != nullptr)
		{
			if (lastChange != nullptr && lastChange == node0)
				break;

			if (node1->item > node2->item)
			{
				change = true;
				set->ChangeWithNextByPointer(node0);
				lastChange = node0;
			}

			node0 = node0->next;
			node1 = node0->next;
			node2 = node1->next;
		}
	} while (change);
}