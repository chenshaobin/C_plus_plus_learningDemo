#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<vector>
using std::vector;
bool find(vector<int>::iterator beg, vector<int>::iterator end, int value)
{
	for (auto item = beg; item != end; ++item)
	{
		if (*item == value)
			return true;
	}
	return false;
}

vector<int>::iterator find_vector(vector<int>::iterator beg, vector<int>::iterator end, int value)
{
	for (auto item = beg; item != end; ++item)
	{
		if (*item == value)
			return item;
	}
	return end;
}

int main()
{
	
	return 0;
}
	
