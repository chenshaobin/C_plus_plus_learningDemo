//Redo the first exercise from 3.3.3 using iterators.

#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

// #include <iterator>

	void check(const vector<int>& vec)
	{
		if (vec.empty())
		{
			cout << "size: 0; no value." << endl;
		}
		else
		{
			cout << "size: " << vec.size() << ";values:";
			for (auto it = vec.cbegin(); it != vec.cend(); ++it)
			{
				cout << *it << ",";
			}
			cout << "\b." << endl;
		}
	}
	void check(vector<string>& vec)
	{
		if (vec.empty())
		{
			cout << "size: 0; no value." << endl;
		}
		else
		{
			cout << "size: " << vec.size() << ";values:";
			for (auto it = vec.cbegin(); it != vec.cend(); ++it)
			{
				if (it->empty())  // it->empty ¼´(*it).empty()
					cout << "(null)" << ",";
			}
			cout << "\b." << endl;
		}
	}

	int main()
	{
		vector<int> v1;
		vector<int> v2(10);
		vector<int> v3(10, 42);
		vector<int> v4{ 10 };
		vector<int> v5{ 10, 42 };
		vector<string> v6{ 10 };
		vector<string> v7{ 10, "hi" };
		check(v1);
		check(v2);
		check(v3);
		check(v4);
		check(v5);
		check(v6);
		check(v7);

		return 0;
	}