#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include<cstddef>

int main()
{
	int arr[10];
	for (size_t i = 0; i < 10; ++i)
		arr[i] = i;
	
	for (auto i : arr)
		cout << i << " ";

	cout << endl;

	return 0;
}