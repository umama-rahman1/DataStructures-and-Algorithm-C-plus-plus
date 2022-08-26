// Assignment2.cpp
//Umama Rahman

#include <iostream>
#include "ArrayList.cpp"
using namespace std;

int main()
{
    std::cout << "Hello there!\n";
    ArrayList<int> array(10);
    array.insert(0);
    array.insert(5);
    array.insert(6);
    array.insert(7);
    array.insert(9);
    array.insert(10);
    array.insert(12);
    array.insert(15);

    cout << "\n";

    cout << "Here is the array:" << endl;
    array.print();

    cout << "\n";

    cout << "Index of 6 is: " << array.binarySearch(6, 0, 10) << endl;

    cout << "\n";

    array.remove(12);
    
    cout << "Here is the new array (without 12):" << endl;
    array.print();
}

