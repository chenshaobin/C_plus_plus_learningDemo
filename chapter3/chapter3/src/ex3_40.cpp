/*
	* Write a program to define two character arrays initialized
	* from string literals. Now define a third character array to hold the
	* concatenation of the two arrays. Use `strcpy` and `strcat` to copy the two
	* arrays into the third.
*/
#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include<cstring>
//#include<cstddef>

int main()
{
	const char arr1[] = "Hello";
	const char arr2[] = "World!";
	size_t newSize = strlen(arr1) + strlen(" ") + strlen(arr2) + 1;
	//char *arr3 = new char[newSize];
	char arr3[50];
	strcpy(arr3, arr1);
	strcat(arr3, " ");
	strcat(arr3, arr2);

	//cout << arr3 <<endl;
	return 0;
}