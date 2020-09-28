#include <iostream>
#include<string>
#include<vector>

using std::cin;
using std::cout;
using std::endl;
using std::vector;

void insertDoubleValue(vector<int> &vec, int some_value)
{
	auto cursor = vec.size()/2;
	auto iter = vec.begin(), mid = vec.begin() + cursor;
	while (iter != mid)
	{
		if (*iter == some_value)
		{
			iter = vec.insert(iter, 2 * some_value);
			++iter;
			++cursor;
			mid = vec.begin() + cursor;
		}
		++iter;
	}

}

void print(const vector<int>& iv)
{
	for (auto i : iv) cout << i << " ";
	cout << endl;
}



int main()
{
	vector<int> iv = { 1, 1, 1, 1, 1, 7, 1, 9 };
	insertDoubleValue(iv, 1);
	print(iv);
}