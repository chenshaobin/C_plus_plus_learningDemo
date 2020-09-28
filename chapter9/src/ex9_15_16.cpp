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
	* std::boolalpha������:
	* ʹbool�ͱ�������false��true�ĸ�ʽ�����
	* �粻ʹ�øñ�ʶ������ô����ᰴ��1��0�ĸ�ʽ�����
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