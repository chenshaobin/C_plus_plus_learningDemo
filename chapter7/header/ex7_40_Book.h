#ifndef EX7_40_BOOK_H
#define EX7_40_BOOK_H

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::istream;

#include<string>
using std::string;


class Book {
public:
	Book(unsigned no, string name, string author, string pubdate) : no_(no), name_(name), author_(author), pubdate_(pubdate) { }
	// Book() = default;
	Book() :Book(0, "", "", ""){ }
	Book(istream &is) { is >> no_ >> name_ >> author_ >> pubdate_; }


private:
	unsigned no_;
	string name_;
	string author_;
	string pubdate_;
};





#endif
