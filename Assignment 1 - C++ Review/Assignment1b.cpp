// Umama Rahman; ID: 202000915
// ECE 4400 - Assignment 1 : Question 2 : Swap function


#include <iostream>
using namespace std;

template <class T>
void swapVar(T* a, T* b) {
	T z = *a;
	*a = *b;
	*b = z;
}

int main()
{
	int a = 6;
	int b = 9;

	cout << "Before:\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";

	swapVar(&a, &b);

	cout << "After:\n";
	cout << "a = " << a << "\n";
	cout << "b = " << b << "\n";
}