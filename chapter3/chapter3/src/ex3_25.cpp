/*
	* 0-100֮�������ͳ�ƣ���10��Ϊһ�Σ�һ����11�Ρ�
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
	cout << "����0-100֮���һ�������" << endl;
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