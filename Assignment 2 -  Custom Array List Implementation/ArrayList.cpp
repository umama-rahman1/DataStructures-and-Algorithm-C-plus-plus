#include "ArrayList.h"
#include <iostream>
using namespace std;

//constructor
template<class T>
ArrayList<T>::ArrayList(int size) 
{
	arr = new T[size];
	arraySize = size;
}

//insert function
template<class T>
void ArrayList<T>::insert(T element)
{
	arr[count] = element;
	count++;
}

//binary search function
template<class T>
int ArrayList<T>::binarySearch(T element, int low, int high)
{
	if (low > high)
	{
		return -1;
	}
	else 
	{
		int mid = (low + high) / 2;
		if (element == arr[mid])
		{
			return mid;
		}
		else if (element > arr[mid])
		{
			return binarySearch(element, mid + 1, high);
		}
		else
		{
			return binarySearch(element, low, mid - 1);
		}
	}
	
}
//delete function
template<class T>
void ArrayList<T>::remove(T element)
{
	for (int i = 0; i < count; i++) 
	{
		if (arr[i] == element) 
		{
			for (int j = i; j < count - 1; j++)
			{
				arr[j] = arr[j + 1];
			}
			count--;
			break;
		}
	}
}


//print function
template<class T>
void ArrayList<T>::print()
{
	for (int i = 0; i < count; i++)
	{
		cout << arr[i] << endl;
	}
}

