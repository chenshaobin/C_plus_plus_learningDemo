/*
	* Write a program to create a vector with ten int elements.
	* Using an iterator, assign each element a value that is twice its current
	* value.
	* Test your program by printing the vector.
*/
#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,10 };
	cout << "The origin numbers:" << endl;
	for (auto v1 : vec)
	{
		cout << v1 << " ";
	}
	cout << endl;
	for (auto it = vec.begin();it != vec.end(); ++it)
		*it *= 2;

	cout << "value that is twice its current value:" << endl;

	for (auto v : vec)
	{
		cout << v << " ";
	}
	cout << endl;

	return 0;
}