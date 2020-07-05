#include <iostream> 
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
	string s("some string!");
	// 实现首字母大写
	if (s.begin() != s.end())	// 保证s不为空
	{
		auto it = s.begin();
		*it = toupper(*it);	//将当前字符改为大写
	}

	cout << "首字母大写: "<<s << endl;
	// 实现首个单词大写
	for (auto it = s.begin();it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);

	cout << "首单词大写: " << s << endl;

	return 0;
}
