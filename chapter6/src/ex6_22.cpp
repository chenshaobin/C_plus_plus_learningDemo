/*
	* Write a function to swap two int pointers.
*/

#include<iostream>

using std::cin;
using std::cout;
using std::endl;

void swap(const int* ptr1, const int* ptr2)
{
	// ����������ʽ������Ҫ���������ͣ���Ȼ�Ǵﲻ������Ч����
	auto temp = ptr1;
	ptr1 = ptr2;
	ptr2 = temp;
}
int main()
{
	const int i = 1, j = 2;
	auto ptr3 = &i;
	auto ptr4 = &j;
	cout << "��ʼֵ��" << *ptr3 << " " << *ptr4 << endl;
	swap(ptr3, ptr4);
	cout << "����ָ����ֵ��" << *ptr3 << " " << *ptr4 << endl;
	return 0;
}