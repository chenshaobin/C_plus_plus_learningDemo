#include<iostream>

int main() 
{
	/*
		//��ϰ2.33
		int i = 0, &r = i;
		auto a = r;		// a��һ������
		const int ci = i, &cr = ci;
		auto b = ci;	// b��һ������
		auto c = cr;	// c��һ������
		auto d = &i;	// d��һ������ָ��
		auto e = &ci;	// e��һ��ָ������������ָ�� const int *
		auto &g = ci;	// g��һ�����ͳ������ã� const int &
		const auto &j = 42;
		a = 42;
		b = 42;
		c = 42;
		// ���ܸ�d, e, g������ֵ
	*/
	// ��ϰ2.35
	const int i = 42;
	auto j = i;	// ����const int ������int,��Ϊauto����Ե�����const��
	const auto &k = i;	// const int &
	auto *p = &i;	//const int *
	const auto j2 = i, &k2 = i;		// j2:const int, k2: const int & ���������Ƕ���const.


	return 0;

}