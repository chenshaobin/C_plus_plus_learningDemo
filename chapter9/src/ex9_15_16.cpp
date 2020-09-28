#include <iostream>
#include<string>
#include<vector>
#include<list>

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::string;
using std::vector;


/*
	* std::boolalpha的作用:
	* 使bool型变量按照false、true的格式输出。
	* 如不使用该标识符，那么结果会按照1、0的格式输出。
*/
int main()
{
	vector<int> vec1{ 1, 2, 3, 4, 5 };
	vector<int> vec2{ 1, 2, 3, 4, 5 };
	vector<int> vec3{ 1, 2, 3, 4 };
	list<int> list{ 1, 2, 3, 4, 5 };

	// cout << (vec1 == vec2) << endl;
	cout << std::boolalpha << (vec1 == vec2) << endl;
	cout << std::boolalpha << (vec1 == vec3) << endl;
	cout << std::boolalpha << (vector<int>(list.begin(), list.end()) == vec1);
	cout << std::boolalpha << (vector<int>(list.begin(), list.end()) == vec2);

	return 0;
}