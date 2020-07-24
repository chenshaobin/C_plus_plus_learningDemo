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
	// 窗口中每个屏幕的编号
	using ScreenIndex = vector<Screen>::size_type;
	// 按照编号将指定的Screen重置为空白。
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
	char get() const		// 读取光标处的字符
	{
		return contents[cursor];
	}	// 隐式内联
	inline char get(pos ht, pos wd) const;		// 显式内联
	Screen &move(pos r, pos c);
	Screen &set(char);
	Screen &set(pos r, pos col, char ch);
	// 根据对象是否是const 重载了display函数
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


	mutable size_t access_ctr;		// 可变数据成员
};

inline Screen& Screen::move(pos r, pos c)
{
	pos row = r * width;	// 计算行的位置
	cursor = row + c;		// 在行内将光标移动到指定的列
	return *this;
}

char Screen::get(pos r, pos c) const
{
	pos row = r * width;
	return contents[row + c];		// 返回给定列的字符
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
	contents[r * width + col] = ch;		// 设置给定位置的新值
	return *this;

}

inline void Window_mgr::clear(ScreenIndex i)
{
	if (i >= screens.size()) return;	// 如果屏幕索引值超出，则退出
	Screen &s = screens[i];
	s.contents = string(s.height * s.width, ' ');
}








#endif
