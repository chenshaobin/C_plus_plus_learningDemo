#include<iostream>

int main() 
{
	/*
		//练习2.33
		int i = 0, &r = i;
		auto a = r;		// a是一个整数
		const int ci = i, &cr = ci;
		auto b = ci;	// b是一个整数
		auto c = cr;	// c是一个整数
		auto d = &i;	// d是一个整数指针
		auto e = &ci;	// e是一个指向整数常量的指针 const int *
		auto &g = ci;	// g是一个整型常量引用， const int &
		const auto &j = 42;
		a = 42;
		b = 42;
		c = 42;
		// 不能给d, e, g赋字面值
	*/
	// 练习2.35
	const int i = 42;
	auto j = i;	// 不是const int ，而是int,因为auto会忽略掉顶层const，
	const auto &k = i;	// const int &
	auto *p = &i;	//const int *
	const auto j2 = i, &k2 = i;		// j2:const int, k2: const int & ；两个都是顶层const.


	return 0;

}