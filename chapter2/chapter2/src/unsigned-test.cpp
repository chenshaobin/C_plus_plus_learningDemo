#include <iostream>

int global_int;
int main()
{
	unsigned u = 10, u2 = 42;
	std::cout << "u2 - u = " << u2 - u << std::endl;
	std::cout << "u - u2 = " << u - u2 << std::endl;

	int i = 10, i2 = 42;
	std::cout << "i2 - i = " << i2 - i << std::endl;
	std::cout << "i - i2 = " << i - i2 << std::endl;
	std::cout << "i - u = " << i - u << std::endl;
	std::cout << "u - i = " << u - i << std::endl;

	std::cout << "global_int: " << global_int << std::endl;		//函数体外定义的变量初始化为0

	//测试变量作用域
	int i3 = 100, sum = 0;
	for (int j = 0; j != 10; ++j) //这里的j不能换为i，否则是对i多次初始化，将会报错。
		sum += j;
	std::cout << "i2 = " << i3 << " " << "sum = " << sum << std::endl;

	//测试引用
	int a = 0, &r1 = a;
	double d = 0, &r2 = d;
	r2 = r1;
	std::cout << "r2: " << r2 << std::endl;
	
	// 习题 2.17
	std::cout << "习题2.17" << std::endl;
	int b, &r3 = b;
	b = 5;
	r3 = 10;
	std::cout << "r3 = " << r3 << " b = " << b << std::endl;
	/*
	//测试引用
	
	*/

	return 0;
}