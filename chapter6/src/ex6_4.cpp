#include<iostream>
#include "../header/chapter6.h"

using std::cin;
using std::cout;
using std::endl;

int fact(int val)
{
	int ret = 1;
	while (val > 1)
	{
		ret *= val--;
	}
	return ret;
}

void interactWithUser()
{
	for (int val = 0; cout << "Please enter a number within[0,13)£º", cin >> val;)
	{
		if (val < 0 || val >12)
			continue;
		cout << val << " ! = " << fact(val) << endl;
	}
}
/*
int main()
{
	interactWithUser();
	return 0;
}
*/