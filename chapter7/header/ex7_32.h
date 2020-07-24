#ifndef EX7_32_H
#define EX7_32_H

#include<iostream>
using std::cin;
using std::cout;
using std::endl;
using std::cerr;
using std::istream;
using std::ostream;

#include<string>
using std::string;

#include<vector>
using std::vector;

class Screen;

class Window_mgr {
public:
	// ������ÿ����Ļ�ı��
	using ScreenIndex = vector<Screen>::size_type;
	// ���ձ�Ž�ָ����Screen����Ϊ�հס�
	void clear(ScreenIndex);
private:
	vector<Screen> screens{ Screen(24, 80, ' ') };

};


class Screen {
	friend void Window_mgr::clear(ScreenIndex);
public:
	using pos = string::size_type;
	Screen() = default;
	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) { }
	char get() const		// ��ȡ��괦���ַ�
	{
		return contents[cursor];
	}	// ��ʽ����
	inline char get(pos ht, pos wd) const;		// ��ʽ����
	Screen &move(pos r, pos c);
	Screen &set(char);
	Screen &set(pos r, pos col, char ch);
	// ���ݶ����Ƿ���const ������display����
	Screen $display(ostream &os)
	{
		do_display(os);
		return *this;
	}
	const Screen &display(ostream &os) const
	{
		do_display(os);
		return *this;
	}

	void some_member() const;

private:
	void do_display(ostream &os) const
	{
		os << contents;
	}

private:
	pos cursor = 0;
	pos height = 0, width = 0;
	string contents;


	mutable size_t access_ctr;		// �ɱ����ݳ�Ա
};

inline Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;	// �����е�λ��
	cursor = row + c;		// �����ڽ�����ƶ���ָ������
	return *this;
}

char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];		// ���ظ����е��ַ�
}
void Screen::some_member() const
{
	++access_ctr;
}
inline Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}
inline Screen& Screen::set(pos r, pos col, char ch)
{
	contents[r * width + col] = ch;		// ���ø���λ�õ���ֵ
	return *this;

}

inline void Window_mgr::clear(ScreenIndex i)
{
	if (i >= screens.size()) return;	// �����Ļ����ֵ���������˳�
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}








#endif
