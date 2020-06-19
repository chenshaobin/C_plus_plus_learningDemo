#include<iostream>
int main()
{
	//使用for计算从1加到10
	/*
		int sum = 0;
		for (int val = 1; val <= 10; ++val)
			sum += val;
		std::cout << "Sum of 1 to 10 inclusive is " << sum << std::endl;
	*/
	int sum = 0;
	for (int i = -100; i <= 100;i++) 
		sum += i;
	std::cout << sum << std::endl;
	return 0;
}