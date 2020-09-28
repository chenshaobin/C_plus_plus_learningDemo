#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
#include<string>
using std::string;
#include<vector>
using std::vector;
#include<fstream>
using std::ifstream;

void readFileToVec(const string& fileName, vector<string>& vec)
{
	ifstream input(fileName);
	if (input)
	{
		cout << "��ȡ�ɹ�" << endl;
		string buf;
		while (input >> buf)
			vec.push_back(buf);
	}
	cout << "��ȡʧ��" << endl;
}

int main()
{
	vector<string> vec;
	readFileToVec("../data/book.txt", vec);
	for (const auto& str : vec)
	{
		cout << str << endl;
	}
	return 0;
}
