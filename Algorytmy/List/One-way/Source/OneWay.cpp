#include "../Header/OneWay.h"

template class OneWay<int>;
template class OneWay<unsigned>;
template class OneWay<float>;
template class OneWay<double>;

template <typename T>
OneWay<T>::OneWay() : BaseList<T>() {}

template <typename T>
OneWay<T>::~OneWay()
{
	DeleteList();
}

template <typename T>
int OneWay<T>::Count() const
{
	return countObject;
}

template <typename T>
void OneWay<T>::AddBeginning(T item)
{
	nodeList<T>* newItem = new nodeList<T>;
	newItem->item = item;
	newItem->next = head;

	head = newItem;

	if (last == nullptr)
		last = head;

	countObject++;
}

template <typename T>
void OneWay<T>::AddOnEnd(T item)
{
	if(head == nullptr)
	{
		AddBeginning(item);
		return;
	}

	nodeList<T>* newItem = new nodeList<T>;
	newItem->item = item;
	newItem->next = last->next;

	last->next = newItem;
	last = newItem;
	countObject++;
}

template <typename T>
void OneWay<T>::DeleteList()
{
	while (head != nullptr)
	{
		DeleteFirst();
	}
}

template <typename T>
void OneWay<T>::DeleteFirst()
{
	if (head == nullptr)
		return;

	if (head == last)
		last = head->next;

	nodeList<T>* helper = head;
	head = head->next;
	delete helper;

	if (countObject > 0)
		countObject--;
}

template <typename T>
void OneWay<T>::DeleteByItem(T item)
{
	if (head == nullptr)
		return;

	nodeList<T>* p0 = head;

	if(p0->item == item)
	{
		DeleteFirst();
		return;
	}

	nodeList<T>* p1 = head->next;

	while (p1 != nullptr)
	{
		if(p1->item == item)
		{
			if (p1 == last)
				last = p0;

			p0->next = p1->next;
			delete p1;

			if (countObject > 0)
				countObject--;

			break;
		}

		p0 = p1;
		p1 = p1->next;
	}
}

template <typename T>
void OneWay<T>::DeleteTwoEven()
{
	while(true)
	{
		if (head == nullptr || head->next == nullptr)
			return;

		if(static_cast<int>(head->item + head->next->item) % 2 == 0)
		{
			DeleteFirst();
			DeleteFirst();

			continue;
		}
		break;
	}

	nodeList<T>* p0 = head;
	nodeList<T>* p1 = head->next;

	nodeList<T>* h0; 
	nodeList<T>* h1;

	while(p1 != nullptr && p1->next != nullptr)
	{
		if (static_cast<int>(p1->item + p1->next->item) % 2 == 0)
		{
			h0 = p1;
			h1 = p1->next;

			p1 = h1->next;
			p0->next = p1;

			delete h0, h1;

			if (countObject > 1)
				countObject -= 2;

			continue;
		}

		p0 = p1;
		p1 = p1->next;
	}
}

template <typename T>
void OneWay<T>::ChangeWithNextByItem(T item)
{
	if (head == nullptr || head->next == nullptr)
		return;

	nodeList<T>* p0 = head;
	nodeList<T>* p1 = head->next;

	if(p0->item == item)
	{
		p0->next = p1->next;
		p1->next = p0;
		head = p1;
		return;
	}

	while (p1 != nullptr)
	{
		if(p1->item == item)
		{
			if (p1->next == nullptr)
				return;

			if (p1->next == last)
				last = p1;

			p0->next = p1->next;
			p1->next = p1->next->next;
			p0->next->next = p1;
			return;
		}

		p0 = p1;
		p1 = p1->next;
	}
}
