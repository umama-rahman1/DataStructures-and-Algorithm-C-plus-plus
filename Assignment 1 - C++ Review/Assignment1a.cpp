// Umama Rahman; ID: 202000915
// ECE 4400 - Assignment 1 : Question 1 : Maximum function


#include <iostream>
using namespace std;

void getMaxNum(int numList[], int size) {
    int maxNum = numList[0];

    for (int i = 1; i < size; i++) {
        if (numList[i] > maxNum) {
            maxNum = numList[i];
        }
    }
    cout << "Maximum number is: " << maxNum << "\n";
}

int main()
{
    int size;
    int numList[50];

    std::cout << "Hello there!\n";
    cout << "Enter size of data set (max 50):\n";
    
    cin >> size;
    
    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> numList[i];
    }

    getMaxNum(numList, size);
}
