#include<iostream>
int main()
{
	//功能：统计输入中每个值（整数）连续出现了多少次
	int currVal = 0, val = 0;	// currVal为我们正在统计的数，val为读入的新值
	if (std::cin >> currVal)
	{
		//读取第一个数，并确保确实有数据可以处理
		int cnt = 1;  //用于保存正在处理的当前值的个数
		while (std::cin >> val)
		{
			//读取剩余的数
			if (val == currVal) {
				++cnt;	//值相同，计数加一
			}
			else
			{
				//否则打印前一个值的个数
				std::cout << currVal << " occurs " << cnt << " times " << std::endl;
				//记住新值，重置计数器
				currVal = val;
				cnt = 1;
			}

		}
		//输出最后一个值的个数
		std::cout << currVal << " occurs " << cnt << "times" << std::endl;
	}
	return 0;
}