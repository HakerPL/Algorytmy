#pragma once
#include "../BaseAlgorithm.h"

class MergeSort : public BaseAlgorithmSort
{
public:
	MergeSort() : BaseAlgorithmSort() {};
	~MergeSort() {};

	template <typename T>
	void SortDesc(BaseList<T>* set);

	template <typename T>
	void SortAsc(BaseList<T>* set);

private:

	template <typename T>
	void Split(BaseList<T>* head, BaseList<T>* first, BaseList<T>* secound);

	template <typename T>
	void MergeAsc(BaseList<T>* returnList, BaseList<T>* source1, BaseList<T>* source2);

	template <typename T>
	void MergeDesc(BaseList<T>* returnList, BaseList<T>* source1, BaseList<T>* source2);
};

template <typename T>
void MergeSort::MergeAsc(BaseList<T>* returnList, BaseList<T>* source1, BaseList<T>* source2)
{
	while (source1->GetHead() != nullptr && source2->GetHead() != nullptr)
	{
		if (source1->GetHead()->item < source2->GetHead()->item)
			returnList->PushOnEnd(source1->PopFirst());
		else
			returnList->PushOnEnd(source2->PopFirst());
	}

	if (source1->GetHead() == nullptr)
	{
		returnList->PushOnEnd(source2->GetHead());
		source2->ClearList();
	}
	else
	{
		returnList->PushOnEnd(source1->GetHead());
		source1->ClearList();
	}
}

template <typename T>
void MergeSort::MergeDesc(BaseList<T>* returnList, BaseList<T>* source1, BaseList<T>* source2)
{
	while (source1->GetHead() != nullptr && source2->GetHead() != nullptr)
	{
		if (source1->GetHead()->item > source2->GetHead()->item)
			returnList->PushOnEnd(source1->PopFirst());
		else
			returnList->PushOnEnd(source2->PopFirst());
	}

	if (source1->GetHead() == nullptr)
	{
		returnList->PushOnEnd(source2->GetHead());
		source2->ClearList();
	}
	else
	{
		returnList->PushOnEnd(source1->GetHead());
		source1->ClearList();
	}
}

template <typename T>
void MergeSort::Split(BaseList<T>* head, BaseList<T>* first, BaseList<T>* secound)
{
	int counter = 0;
	while(head->GetHead() != nullptr)
	{
		counter++;
		nodeList<T>* item = head->PopFirst();

		if (counter % 2 == 0)
			first->PushOnEnd(item);
		else
			secound->PushOnEnd(item);
	}
}

template <typename T>
void MergeSort::SortDesc(BaseList<T>* set)
{
	if (set->GetCount() <= 1)
		return;

	BaseList<T>* list1 = new BaseList<T>();
	BaseList<T>* list2 = new BaseList<T>();;

	Split(set, list1, list2);
	SortDesc(list1);
	SortDesc(list2);

	MergeDesc(set, list1, list2);
}

template <typename T>
void MergeSort::SortAsc(BaseList<T>* set)
{
	if (set->GetCount() <= 1)
		return;

	BaseList<T>* list1 = new BaseList<T>();
	BaseList<T>* list2 = new BaseList<T>();;

	Split(set, list1, list2);
	SortAsc(list1);
	SortAsc(list2);

	MergeAsc(set, list1, list2);
}