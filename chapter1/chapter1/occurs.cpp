#include<iostream>
int main()
{
	//���ܣ�ͳ��������ÿ��ֵ�����������������˶��ٴ�
	int currVal = 0, val = 0;	// currValΪ��������ͳ�Ƶ�����valΪ�������ֵ
	if (std::cin >> currVal)
	{
		//��ȡ��һ��������ȷ��ȷʵ�����ݿ��Դ���
		int cnt = 1;  //���ڱ������ڴ���ĵ�ǰֵ�ĸ���
		while (std::cin >> val)
		{
			//��ȡʣ�����
			if (val == currVal) {
				++cnt;	//ֵ��ͬ��������һ
			}
			else
			{
				//�����ӡǰһ��ֵ�ĸ���
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				//��ס��ֵ�����ü�����
				currVal = val;
				cnt = 1;
			}

		}
		//������һ��ֵ�ĸ���
		std::cout << currVal << " occurs " << cnt << "times" << std::endl;
	}
	return 0;
}