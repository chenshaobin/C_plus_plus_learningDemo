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

int main()
{
	ifstream input("../data/book.txt");
	if (input)
	{
		vector<string> vecLine;
		string line;
		while (getline(input, line))
		{
			vecLine.push_back(line);
		}
		for (auto &str : vecLine)
		{
			istringstream iss(str);
			string word;
			while (iss >> word) cout << word << endl;
		}
	}
	else
	{
		cerr << "No Data!" << endl;
		return -1;
	}
	return 0;
}