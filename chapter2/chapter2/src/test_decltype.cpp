#include<iostream>

int main()
{
	// ��ϰ2.36
	/*
		int a = 3, b = 4;
		decltype (a) c = a;
		decltype((b)) d = a;
		++c;
		++d;
	*/
	// ��ϰ2.37
	int a = 3, b = 4;
	decltype (a) c = a;
	decltype (a = b) d = a;		// ��ֵ�ǻ�������õ�һ����ͱ��ʽ�����õ����;�����ֵ������

	return 0;
}