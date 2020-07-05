/*
	* 使用整型数组初始化一个vector对象
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
	int int_arr[] = { 0,1,2,3,4,5 };
	vector<int> vec(begin(int_arr), end(int_arr));
	for (auto i : vec)
		cout << i << ",";

	cout << endl;

	return 0;

}
