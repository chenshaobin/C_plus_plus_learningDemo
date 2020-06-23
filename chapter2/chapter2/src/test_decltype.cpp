#include<iostream>

int main()
{
	// 练习2.36
	/*
		int a = 3, b = 4;
		decltype (a) c = a;
		decltype((b)) d = a;
		++c;
		++d;
	*/
	// 练习2.37
	int a = 3, b = 4;
	decltype (a) c = a;
	decltype (a = b) d = a;		// 赋值是会产生引用的一类典型表达式，引用的类型就是左值的类型

	return 0;
}