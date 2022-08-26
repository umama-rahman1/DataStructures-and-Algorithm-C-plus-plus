#pragma once

template <class T>
class ArrayList
{
public:
	T* arr;
	T* tempArr;
	int arraySize;
	int count = 0;

	//Constructor to initialise the list
	ArrayList(int size);

	//Insert an element at the end
	void insert(T element);

	//Performs binary search to find an element
	int binarySearch(T element, int low, int high);

	//Delete element from the list
	void remove(T element);

	//Print all elements
	void print();

};