#include <iostream>

int main() 
{
	int ival = 42;
	int *p = &ival;
	std::cout << "*p = " << *p << std::endl;
	

	/*
		* 指针初始化，最好使用nullptr,这是C++11新标准刚引入的一种方法;
		* 旧的用法里面还会使用头文件cstdlib中定义的预处理变量NULL,它的值就是0.
	*/
	int *p1 = nullptr;	//生成空指针p1;
	// 常量指针
	const double x1 = 0.02;
	const double *cptr = &x1;	//这是一个底层const，允许改变cptr本身的值，但是不能通过它改变所指向的对象的值

	// const指针
	int errNumb = 0;
	int *const curErr = &errNumb;	// curErr为指向errNumb的常量指针(一直指向errNumb，指针本身的值不能改变),可以通过它改变所指向对象的值
	const double pi = 3.14159;
	const double *const pip = &pi; // pip指向一个双精度浮点型常量pi，无论pip指向的对象值还是pip自己存储的那个地址都不能改变；


	return 0;
}