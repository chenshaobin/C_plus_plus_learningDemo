#include<iostream>
int main()
{
	//ex1.9 ��50��100��51����֮��
	/*
		int sum = 0, val = 50;
		while (val <= 100)
		{
			sum += val;
			val++;
		}
		std::cout << "Sum of 50 to 100 inclusive is " << sum << std::endl;
	*/
	//ex1.10 ���δ�ӡ10-0֮�������
	/*
		int val = 10;
		while (val>=0)
		{
			std::cout << val << std::endl;
			val--;
		}
	*/
	//ex1.11 ��ʾ�û�����������������ӡ������������ָ���ķ�Χ�ڵ���������
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
	// �����ȡ����������һ���������ݵĺ�
	int sum = 0, value = 0;
	std::cout << "Please enter your numbers:" << std::endl;
	while (std::cin >> value)
	{
		// ��ȡ����ֱ���ļ�β���������ж������ݵĺ�
		sum += value;
	}
	std::cout << "Sum is: " << sum << std::endl;

	return 0;
}