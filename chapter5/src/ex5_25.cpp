#include <iostream>
#include <stdexcept>
using std::cin;
using std::cout;
using std::endl;
using std::runtime_error;

int main()
{
	int a, b;
	cout << "Please enter two numbers:" << endl;
	while (cin >> a >> b)
	{
		try {
			if (b == 0)
				throw runtime_error("divisor is 0");
			cout << static_cast<double>(a) / b << endl;
			cout << "Please enter two numbers:" << endl;

		}
		catch (runtime_error err)
		{
			cout << err.what();
			cout << "\n Try again? Please enter y or n" << endl;
			char c;
			cin >> c;
			if (!cin || c == 'n')
				break;
			else
				cout << "Please enter two numbers:" << endl;
		}
	}
	return 0;
}