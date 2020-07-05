/*
	* 将含有整型元素的vector对象拷贝给一个整型数组
*/

#include <iostream> 
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

#include<vector>
using std::vector;


int main()
{
	vector<int> vec{ 0,1,2,3,4,5 };
	int arr[6];
	for (int * i = begin(arr); i != end(arr); ++i)
		*i = vec[i - begin(arr)];

	for (auto i : arr)
		cout << i << ",";

	cout << endl;
	return 0;
}