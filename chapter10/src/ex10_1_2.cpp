#include<iostream>
#include<vector>
#include<list>
#include<string>
#include<algorithm>


using std::cin;
using std::cout;
using std::vector;
using std::string;
using std::list;
using std::end;

int main()
{
	vector<int> my_vec = { 1,2,3,4,6,7,5 };
	cout << "ex10_1:" << count(my_vec.cbegin(), my_vec.cend(), 6);
	list<string> my_list = { "aa","bb","ccc","a" ,"aa"};
	cout << "ex10_2:" << count(my_list.cbegin(), my_list.cend(), "aa");


}