#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;
#include<string>
using std::string;
#include <sstream>
using std::istringstream;

istream& func(istream &is)
{
	string buf;
	while (cin >> buf)
	{
		cout << buf << endl;
	}
	is.clear();
	return is;
}

int main()
{
	istringstream iss("Hello Ethan!");
	func(iss);

	return 0;

}