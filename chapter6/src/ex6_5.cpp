#include<iostream>

using std::cin;
using std::cout;
using std::endl;

int returnAbsoluteValue(int val)
{
	if (val >=0)
		return val;
	else
		return -val;
}
int main()
{
	cout << "Please enter a number:" << endl;
	int val = 0;
	cin >> val;
	cout << returnAbsoluteValue(val) << endl;

	return 0;

}