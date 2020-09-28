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
using std::ostringstream;
#include <fstream>
using std::ifstream;

struct PersonInfo {
	string name;
	vector<string> phones;
};

bool valid(const string& str)
{
	return isdigit(str[0]);
}
string format(const string& str)
{
	return str.substr(0, 3) + "-" + str.substr(3, 3) + "-" + str.substr(6);
}

int main()
{
	ifstream input("../data/phoneNumbers.txt");
	if (!input)
	{
		cerr << "No Data!" << endl;
		return -1;
	}
	string line, word;
	vector<PersonInfo> people;
	istringstream record;
	while (getline(input,line))
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
	for (const auto &entry : people)
	{
		// cout << entry.name << " ";
		ostringstream formatted, badNums;
		for (const auto &nums : entry.phones)	// 对每个号码进行验证
		{
			if (!valid(nums))
			{
				badNums << " " << nums;
			}
			else
			{
				formatted << " " << format(nums);
			}
		}
		if (badNums.str().empty())
		{
			// 没有错误的数
			cout << entry.name << " " << formatted.str() << endl;
		} 
		else
		{
			cerr << "input error:" << entry.name << "invalid numbers(s) " << badNums.str() << endl;
		}
	}

	return 0;
}