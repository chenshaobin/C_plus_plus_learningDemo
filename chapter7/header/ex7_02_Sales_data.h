#ifndef EX_7_02_SALES_DATA_H
#define EX_7_02_SALES_DATA_H

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::istream;
using std::ostream;

#include<string>
using std::string;

struct Sales_data;
istream &read(istream&, Sales_data&);

class Sales_data {
	friend istream &read(istream &is, Sales_data &item);
	friend ostream &print(ostream &os, const Sales_data &item);
	friend Sales_data add(const Sales_data &lhs, const Sales_data &rhs);
public:
	string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	// 构造函数
	Sales_data(const string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p * n) 
	{ 
		cout << "Sales_data(const string &s, unsigned, double)" << endl;
	}
	// Sales_data() = default;
	Sales_data():Sales_data("",0, 0.0f) 
	{
		// 默认构造函数(为委托构造函数)
		cout << "Sales_data()" << endl;
	}
	// Sales_data(const string &s):bookNo(s){ }
	Sales_data(const string &s) :Sales_data(s, 0, 0.0f)
	{
		cout << "Sales_data(const string &s)" << endl;
	}
	/*
	Sales_data(istream &is) { 
		// 从is中读取一条交易信息后存入this对象中, *this为调用该函数的对象 
		read(is, *this); 
	}
	*/
	Sales_data(istream &is) :Sales_data()
	{
		read(is, *this);
		cout << "Sales_data(istream &is)" << endl;
	}
private:
	inline double avg_price() const;	// 返回售出书籍的平均价格
	//类成员变量
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
/*
	* 外部构造函数
	* 在类的外部定义构造函数时，必须指明该构造函数是哪个类的成员
	* (*this)为调用该函数的对象，使用this来把对象当作一个整体访问，而非直接访问对象的某个成员。
*/


// member functions
inline double Sales_data::avg_price() const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;	// 解引用this指针以获得执行该函数的对象
}
// friend functions
/*
	* 因为IO类属于不能被拷贝的类型，因此只能通过引用来传递它们。
*/
istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = item.units_sold * price;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

/*
	Sales_data::Sales_data(istream &is)
		{
			read(is, *this);
		}
*/


#endif
