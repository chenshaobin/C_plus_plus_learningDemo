#include <iostream>

int main() 
{
	int ival = 42;
	int *p = &ival;
	std::cout << "*p = " << *p << std::endl;
	

	/*
		* ָ���ʼ�������ʹ��nullptr,����C++11�±�׼�������һ�ַ���;
		* �ɵ��÷����滹��ʹ��ͷ�ļ�cstdlib�ж����Ԥ�������NULL,����ֵ����0.
	*/
	int *p1 = nullptr;	//���ɿ�ָ��p1;
	// ����ָ��
	const double x1 = 0.02;
	const double *cptr = &x1;	//����һ���ײ�const������ı�cptr�����ֵ�����ǲ���ͨ�����ı���ָ��Ķ����ֵ

	// constָ��
	int errNumb = 0;
	int *const curErr = &errNumb;	// curErrΪָ��errNumb�ĳ���ָ��(һֱָ��errNumb��ָ�뱾���ֵ���ܸı�),����ͨ�����ı���ָ������ֵ
	const double pi = 3.14159;
	const double *const pip = &pi; // pipָ��һ��˫���ȸ����ͳ���pi������pipָ��Ķ���ֵ����pip�Լ��洢���Ǹ���ַ�����ܸı䣻


	return 0;
}