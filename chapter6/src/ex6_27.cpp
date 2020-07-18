#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include <initializer_list>
using std::initializer_list;

int sum(const initializer_list<int> il)
{
	int sum = 0;
	for (auto i : il)
		sum += i;

	return sum;
}
int main()
{
	cout << "the sum of 1 to 5:" << endl;
	cout << sum({ 1,2,3,4,5 }) << endl;


	return 0;
}