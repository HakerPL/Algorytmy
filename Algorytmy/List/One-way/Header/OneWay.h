#pragma once
#include <string>

using namespace std;

template <typename T> struct nodeList
{
	T item;
	nodeList* next;
};

template <typename T> class OneWay
{
public:

	OneWay();
	~OneWay();

	string RetrunContentOfList() const;
	int Count() const;
	void AddBeginning(T item);
	void AddOnEnd(T item);
	void DeleteList();
	void DeleteFirst();
	void DeleteByItem(T item);
	void DeleteTwoEven();
	void ChangeWithNext(T item);

private:

	nodeList<T>* head;
	nodeList<T>* last;
	int count;
};