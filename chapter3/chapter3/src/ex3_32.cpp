#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include<iterator>
#include<cstddef>

int main()
{
	// use array
	int arr1[10];
	for (size_t i = 0; i < 10; ++i)
		arr1[i] = i;
	int arr2[10];
	for (size_t i = 0; i < 10; ++i)
		arr2[i] = arr1[i];

	// use vector
	vector<int> vec1(10);
	for (auto it = vec1.begin(); it != vec1.end(); ++it)
		*it = it - vec1.begin();

	vector<int> vec2(vec1);
	for (auto i : vec2)
		cout << i << " ";

	cout << endl;

	return 0;
}