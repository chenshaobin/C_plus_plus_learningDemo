#include<iostream>
int main()
{
	//ex1.9 求50到100这51个数之和
	/*
		int sum = 0, val = 50;
		while (val <= 100)
		{
			sum += val;
			val++;
		}
		std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	*/
	//ex1.10 依次打印10-0之间的整数
	/*
		int val = 10;
		while (val>=0)
		{
			std::cout << val << std::endl;
			val--;
		}
	*/
	//ex1.11 提示用户输入两个整数，打印这两个整数所指定的范围内的所有整数
	/*
		std::cout << "Please enter two numbers:" << std::endl;
		int v1 = 0, v2 = 0, start = 0, end = 0;
		std::cin >> v1 >> v2;
		if (v1 >> v2)
		{
			start = v2;
			end = v1;
		}
		else
		{
			start = v1;
			end = v2;

		}
		while (start <= end)
		{
			std::cout << start << std::endl;
			start++;
		}
		
	*/
	// 计算读取数量不定的一组输入数据的和
	int sum = 0, value = 0;
	std::cout << "Please enter your numbers:" << std::endl;
	while (std::cin >> value)
	{
		// 读取数据直到文件尾，计算所有读入数据的和
		sum += value;
	}
	std::cout << "Sum is: " << sum << std::endl;

	return 0;
}