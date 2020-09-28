#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::istream;
#include<string>
using std::string;
#include<vector>
using std::vector;
#include <sstream>
using std::istringstream;
#include <fstream>
using std::ifstream;

struct PersonInfo {
	string name;
	vector<string> phones;
};

int main()
{
	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	cout << "请输入用户信息，包括姓名，电话号码：" << endl;
	while (getline(cin, line))
	{
		PersonInfo info;
		record.clear();
		record.str(line);
		record >> info.name;
		while (record >> word)
		{
			info.phones.push_back(word);
		}
		people.push_back(info);
	}
	for (auto& p : people)
	{
		cout << p.name << " ";
		for (auto& phone : p.phones)
		{
			cout << phone << " ";
		}
		cout << endl;
	}
	return 0;
}