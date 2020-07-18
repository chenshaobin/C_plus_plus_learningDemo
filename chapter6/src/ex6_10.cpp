/*
	* Using pointers, write a function to swap the values of two ints.
    * Test the function by calling it and printing the swapped values.
*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(int* const val1, int* const val2)
{
	auto temp = *val1;
	*val1 = *val2;
	*val2 = temp;
}
int main()
{
	for (int a, b; cout << "Please enter two numbers:\n", cin >> a >> b; )
	{
		cout << "The number you input: " << endl;
		cout << "a = " << a << " b = " << b << endl;
		swap(&a, &b);
		cout << "swap two numbers:" << endl;
		cout << "a = " << a << " b = " << b << endl;
	}
	return 0;
}