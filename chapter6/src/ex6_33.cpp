#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::next;

#include <vector>
using std::vector;

using Iter = vector<int>::iterator;

void print(Iter beg, Iter end)
{
	if (beg != end)
	{
		cout << *beg << " ";
		print(next(beg), end);
	}
}

int main()
{
	vector<int> vec{ 1,2,3,4,5 };
	print(vec.begin(), vec.end());
}