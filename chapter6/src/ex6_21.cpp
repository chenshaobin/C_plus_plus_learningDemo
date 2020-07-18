/*
	* Write a function that takes an int and a pointer to an int and
	* returns the larger of the int value or the value to which the
    * pointer points. What type should you use for the pointer?
*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int largeOne(int i, const int* const ptr)
{
	return (i > *ptr) ? i : *ptr;
}

int main()
{
	int a = 0, b =0;
	cout << "Please enter two numbers:" << endl;
	cin >> a >> b;
	cout << "The large one is " << largeOne(a, &b) << endl;

	return 0;
}