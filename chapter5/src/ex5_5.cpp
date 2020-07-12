/*
	* ʵ��ʹ��if else �����ֳɼ�ת������ĸ�ɼ���Ҫ��
	* < 60:"F"
	* 100:"A++"
	* 60-69 :"D"
	* �����ɼ�ÿ10�����ֳ�һ��
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
	cout << "������0-100�ķ���ֵ:" << endl;
	while (cin >> score)
	{
		string letterGrade;
		if (score < 60)
			letterGrade = grades[0];
		else
		{
			letterGrade = grades[(score - 50) / 10];
			if (score != 100)
			{
				if (score % 10 > 7)
					letterGrade += '+';
				else if(score % 10 < 3)
					letterGrade += '-';
			}

		}

		cout << letterGrade << endl;
	}
	return 0;
}