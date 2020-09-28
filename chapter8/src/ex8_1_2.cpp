#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;

#include<string>
using std::string;

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
	istream& is = func(cin);
	cout << is.rdstate() << endl;
	return 0;

}