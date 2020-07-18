#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<vector>
using std::vector;

int add(int a, int b)
{
	return a + b;
}
int substract(int a, int b)
{
	return a - b;
}
int multiply(int a, int b)
{
	return a * b;
}
int divide(int a, int b)
{
	return b != 0 ? a / b : 0;
}

int main()
{
	int func(int a, int b);
	using pFunc1 = decltype(func) *;
	using pFunc2 = decltype(func);
	typedef decltype(func) * pFunc3;
	typedef int(*pFunc4)(int a, int b);
	using pFunc5 = int(*)(int a, int b);
	using pFunc6 = int (int a, int b);

	vector<pFunc1> vec1;
	vector<pFunc2*> vec2;
	vector<pFunc3> vec3;
	vector<pFunc4> vec4;
	vector<pFunc5> vec5;
	vector<pFunc6*> vec6;

	vec1 = { add, substract, multiply,divide };
	for (auto f : vec1)
	{
		cout << f(6, 2) << endl;
	}
	return 0;
}