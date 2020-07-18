/*
	* Write a function to swap two int pointers.
*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(const int* ptr1, const int* ptr2)
{
	// 本函数的形式参数需要用引用类型，不然是达不到交换效果的
	auto temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}
int main()
{
	const int i = 1, j = 2;
	auto ptr3 = &i;
	auto ptr4 = &j;
	cout << "初始值：" << *ptr3 << " " << *ptr4 << endl;
	swap(ptr3, ptr4);
	cout << "交换指针后的值：" << *ptr3 << " " << *ptr4 << endl;
	return 0;
}