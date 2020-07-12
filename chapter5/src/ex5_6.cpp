/*
	* 实现使用条件运算符把数字成绩转换成字母成绩的要求
	* < 60:"F"
	* 100:"A++"
	* 60-69 :"D"
	* 其他成绩每10个划分成一组
*/
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include <string>

using std::string;

#include <vector>

using std::vector;

int main()
{
	const vector<string> grades = { "F","D", "C", "B", "A", "A++" };
	int score = 0;
	cout << "请输入0-100的分数值:" << endl;
	while (cin >> score)
	{
		string letterGrade = score < 60 ? "grades[0]" : grades[(score - 50) / 10];
		letterGrade += ((score == 100 || score < 60) 
						? "" 
						: ((score % 10 > 7) ? "+" : (score % 10 < 3) ? "-" : ""));
		cout << letterGrade << endl;
	}

	return 0;
}