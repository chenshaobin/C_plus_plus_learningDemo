/*
	* 0-100之间分数段统计，以10分为一段，一共分11段。
*/


#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include<iterator>

int main()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	cout << "输入0-100之间的一组分数：" << endl;
	while (cin >> grade)
	{
		if (grade <= 100)
			++ (*(scores.begin() + grade / 10));
	}

	for (auto score : scores)
	{
		cout << score << " ";
	}
	cout << endl;
	return 0;
}