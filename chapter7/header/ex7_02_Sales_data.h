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
	// ���캯��
	Sales_data(const string &s, unsigned n, double p) :
		bookNo(s), units_sold(n), revenue(p * n) 
	{ 
		cout << "Sales_data(const string &s, unsigned, double)" << endl;
	}
	// Sales_data() = default;
	Sales_data():Sales_data("",0, 0.0f) 
	{
		// Ĭ�Ϲ��캯��(Ϊί�й��캯��)
		cout << "Sales_data()" << endl;
	}
	// Sales_data(const string &s):bookNo(s){ }
	Sales_data(const string &s) :Sales_data(s, 0, 0.0f)
	{
		cout << "Sales_data(const string &s)" << endl;
	}
	/*
	Sales_data(istream &is) { 
		// ��is�ж�ȡһ��������Ϣ�����this������, *thisΪ���øú����Ķ��� 
		read(is, *this); 
	}
	*/
	Sales_data(istream &is) :Sales_data()
	{
		read(is, *this);
		cout << "Sales_data(istream &is)" << endl;
	}
private:
	inline double avg_price() const;	// �����۳��鼮��ƽ���۸�
	//���Ա����
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};
/*
	* �ⲿ���캯��
	* ������ⲿ���幹�캯��ʱ������ָ���ù��캯�����ĸ���ĳ�Ա
	* (*this)Ϊ���øú����Ķ���ʹ��this���Ѷ�����һ��������ʣ�����ֱ�ӷ��ʶ����ĳ����Ա��
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
	return *this;	// ������thisָ���Ի��ִ�иú����Ķ���
}
// friend functions
/*
	* ��ΪIO�����ڲ��ܱ����������ͣ����ֻ��ͨ���������������ǡ�
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
