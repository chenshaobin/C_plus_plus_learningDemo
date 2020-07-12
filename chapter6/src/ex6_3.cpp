#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int fact(int val)
{
	if (val == 0 || val == 1)
	{
		return 1;
	}
	else
		return val * fact(val - 1);
}

int main()
{
	int j = fact(5);
	cout << "5! is " << j << endl;

	return 0;
}