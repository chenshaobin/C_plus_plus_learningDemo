#ifndef EX_7_04_PERSON_H
#define EX_7_04_PERSON_H

#include<string>
using std::string;

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::istream;
using std::ostream;

struct Person;
istream &read(istream &, Person &);


struct Person
{
	friend istream &read(istream &is, Person &person);
	friend ostream &print(ostream &os, const Person &person);

public:
	Person() = default;
	Person(const string sName,  const string sAddr):
		name(sName), address(sAddr) { }
	Person(istream &is) { read(is, *this); }
	string getName() const { return name; };
	string getAddress() const { return address; }

private:
	string name;
	string address;

	/*
		* Should these functions be const?
		* Yes, A const following the parameter list indicates that this is a pointer to const.
		* These functions can read but not write to the data members of the objects on which it is called.
	*/
};

istream &read(istream &is, Person &person)
{
	is >> person.name >> person.address;
	if (!is) person = Person();
	return is;
}

ostream &print(ostream &os, const Person &person)
{
	os << person.name << " " << person.address;
	return os;
}











#endif
