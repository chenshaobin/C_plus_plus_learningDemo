#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void reset(int &i)
{
	i = 0;
}

int main()
{
	int j = 42;
	cout << "The original number: " << j << endl;
	reset(j);
	cout << "The reset number: " << j << endl;
	return 0;
}