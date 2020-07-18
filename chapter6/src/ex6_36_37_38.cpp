/*
	* 返回数组应用的各种函数声明
*/

#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

using ArrT = string[10];
string arrStr[10];

ArrT& func1(ArrT& arr)
{
	// 使用类型别名
}

auto func2(ArrT& arr) -> string(&)[10]
{
	// 使用尾置返回类型
}

decltype(arrStr) &func3(ArrT& arr)
{
	// 使用decltype 关键字
}

string(&func(string(&arrStr)[10]))[10]
{
	// 声明一个返回数组的引用并且该数组包含10个string对象；
}

int odd[] = { 1,3,5,7,9 };
int even[] = { 0,2,4,6,8 };

decltype(odd) &arrPtr(int i)
{
	return (i % 2) ? odd : even;
}

int main()
{
	
}