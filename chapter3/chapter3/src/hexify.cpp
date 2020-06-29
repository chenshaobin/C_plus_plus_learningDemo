#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

//#include <cstddef>
//using std::size_t;

// 实现把 0-15之间的十进制数转换成十六进制数


int main()
{
	const string hexdigits = "0123456789ABCDEF";
	cout << "Enter a series of numbers between 0 and 15"
		<< " separated by spaces.  Hit ENTER when finished: "
		<< endl;
	string result;
	string::size_type n;
	while (cin >> n)
	{
		if (n < hexdigits.size())
		{
			result += hexdigits[n];
		}
	}
	cout << "Your hex number is: " << result << endl;
	return 0;
}