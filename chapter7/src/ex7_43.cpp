#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#include<vector>
using std::vector;


class NoDefault {
public:
	NoDefault(int){}
};

class C {
public:
	C(): def(0){}

private:
	NoDefault def;
};

int main() 
{
	C c;
	vector<C> vec(10);

	return 0;
}