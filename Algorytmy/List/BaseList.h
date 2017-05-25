#pragma once
#include <string>

using namespace std;

template <typename T> struct nodeList
{
	T item;
	nodeList* next;
};

template <typename T> class BaseList
{
public:

	BaseList() 
	{
		head = nullptr;
		last = nullptr;
		countObject = 0;
	}

	virtual ~BaseList() {}

	virtual nodeList<T>* PopFirst()
	{
		if (head == nullptr)
			return nullptr;

		nodeList<T>* returnElement = head;
		head = head->next;
		returnElement->next = nullptr;

		if (last == returnElement)
			last = nullptr;

		countObject--;

		return returnElement;
	}

	/******************
	 * ADD ELEMENT ON END BY POINTER
	 ******************/
	virtual void PushOnEnd(nodeList<T>* item)
	{
		if (head == nullptr)
			head = item;

		if (last != nullptr)
			last->next = item;

		last = item;
		countObject++;
	}

	virtual string RetrunContentOfList() const
	{
		string contentReturn = "HEAD->";
		nodeList<T>* helper = head;

		while (helper != nullptr)
		{
			contentReturn += "(" + to_string(helper->item) + ")->";
			helper = helper->next;
		}

		contentReturn += "NULL";
		return contentReturn;
	}

protected:
	friend class BubbleSort;
	friend class MergeSort;

	nodeList<T>* GetHead()
	{
		return head;
	}

	void ClearList()
	{
		head = last = nullptr;
		countObject = 0;
	}

	int GetCount()
	{
		return countObject;
	}

	/**
	* \brief Send pointer before two element that you want switch or send nullptr if you want change element on head
	* (example 2->3->4->5 and you want change 4 with 5 so You must send pointer on 3)
	* \param item
	* \return number of operation
	*/
	virtual int ChangeWithNextByPointer(nodeList<T>* item = nullptr)
	{
		int operation = 0;
		if (head == nullptr || head->next == nullptr)
			return 2;

		nodeList<T>* p0 = head;
		nodeList<T>* p1 = head->next;

		if (item == nullptr)
		{
			p0->next = p1->next;
			p1->next = p0;
			head = p1;
			return 8;
		}

		p0 = item;
		p1 = item->next;

		if (p1 == nullptr || p1->next == nullptr)
			return 9;

		if (p1->next == last)
		{
			last = p1;
			operation = 11;
		}

		p0->next = p1->next;
		p1->next = p1->next->next;
		p0->next->next = p1;
		operation += 3;
		return operation;
	}

	nodeList<T>* head;
	nodeList<T>* last;
	int countObject;

};