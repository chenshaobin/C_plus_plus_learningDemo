#include"../header/ex7_23_Screen.h"
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";

	return 0;
}