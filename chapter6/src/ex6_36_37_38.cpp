/*
	* ��������Ӧ�õĸ��ֺ�������
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
	// ʹ�����ͱ���
}

auto func2(ArrT& arr) -> string(&)[10]
{
	// ʹ��β�÷�������
}

decltype(arrStr) &func3(ArrT& arr)
{
	// ʹ��decltype �ؼ���
}

string(&func(string(&arrStr)[10]))[10]
{
	// ����һ��������������ò��Ҹ��������10��string����
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