// Umama Rahman; ID: 202000915
// ECE 4400 - Assignment 1 : Question 3 : Class template with arithmetic operations


#include <iostream>
using namespace std;

template <class T>

class NumVar
{
public:

	//default constructor
	NumVar(T n) : num(n) {};

	//addition function
	T add(T num)
	{
		return this->num + num;
	}

	//subtraction function
	T subtract(T num)
	{
		return this->num - num;
	}

	//multiplication function
	T multiply(T num)
	{
		return this->num * num;
	}

	//division function
	T divide(T num)
	{
		return this->num / num;
	}

	//get function
	T& getNum()
	{
		return num;
	}

private:
	T num;
};

int main()
{
    std::cout << "Hello there!\n";

    //create object with integer type
    NumVar<double> num1(6.0);
    NumVar<double> num2(9.0);

    cout << "double num1 = " << num1.getNum() << endl;
    cout << "double num2 = " << num2.getNum() << endl;

	cout << "Following arithmetics: " << endl;

    cout << "num1 + num2 = " << num1.add(num2.getNum()) << endl;

    cout << "num1 - num2 = " << num1.subtract(num2.getNum()) << endl;

    cout << "num1 * num2 = " << num1.multiply(num2.getNum()) << endl;

    cout << "num1 / num2 = " << num1.divide(num2.getNum()) << endl;

}
