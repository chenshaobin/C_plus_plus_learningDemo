#include <iostream> 
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

#include<iterator>

int main()
{
	int arr[5] = {0,1,2,3,4};
	int *beg = begin(arr);
	int *last = end(arr);
	cout << "The original arr: " << endl;
	for (int * i = beg; i != last; ++i)
		cout << *i << "  ";

	cout << endl;
	cout << "The reset arr: " << endl;

	for (int *i = beg; i != last; ++i)
		* i = 0;

	for (auto i : arr)
		cout << i << " ";

	cout << endl;
	return 0;

}