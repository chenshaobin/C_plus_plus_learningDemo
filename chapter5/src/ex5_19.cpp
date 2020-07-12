#include <iostream>

using std::cin;
using std::cout;
using std::endl;

#include<string>
using std::string;

int main()
{
	string rsp;		// 作为循环的条件
	do {
		cout << "Please enter two strings:" << endl;
		string str1, str2;
		cin >> str1 >> str2;
		cout << (str1 <= str2 ? str1 : str2) << " is less than the other!" << endl;
		cout << "More? Enter 'yes' or 'n0' :" << endl;
		cin >> rsp;
	} while (!rsp.empty() && rsp[0] == 'y');

	return 0;
}