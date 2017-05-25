#pragma once
#include "List/BaseList.h"

template <typename T> class OneWay : public BaseList<T>
{
public:

	OneWay();
	~OneWay();

	int Count() const;
	void AddBeginning(T item);
	void AddOnEnd(T item);
	void DeleteList();
	void DeleteFirst();
	void DeleteByItem(T item);
	void DeleteTwoEven();
	void ChangeWithNextByItem(T item);
};