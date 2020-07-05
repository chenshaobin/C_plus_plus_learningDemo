#include <iostream> 
using std::cout;
using std::cin;
using std::endl;
using std::begin;
using std::end;

#include<iterator>
#include <vector>
using std::vector;


// pb point to begin of the array, pe point to end of the array.
bool compareArr(int *const pb1, int *const pe1, int *const pb2, int *const pe2)
{
	// have different size
	if ((pe1 - pb1) != (pe2 - pb2))
		return false;
	else
	{
		// have one different value. 
		for (int *i = pb1, *j = pb2; (i != pe1) && (j != pe2); ++i, ++j)
			if (*i != *j)
				return false;
	}
	return true;
}

int main()
{
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 1,2,3,4 };
	if (compareArr(begin(arr1), end(arr1), begin(arr2), end(arr2)))
		cout << "The two arrays are equal." << endl;
	else
		cout << "The two arrays are not equal." << endl;

	cout << "**************" << endl;

	vector<int> vec1 = { 1,2,3 };
	vector<int> vec2 = { 1,2,3 };
	if(vec1 == vec2)
		cout << "The two vectors are equal." << endl;
	else
		cout << "The two vectors are not equal." << endl;

	return 0;
}