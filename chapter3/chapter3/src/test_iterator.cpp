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
	// ʵ������ĸ��д
	if (s.begin() != s.end())	// ��֤s��Ϊ��
	{
		auto it = s.begin();
		*it = toupper(*it);	//����ǰ�ַ���Ϊ��д
	}

	cout << "����ĸ��д: "<<s << endl;
	// ʵ���׸����ʴ�д
	for (auto it = s.begin();it != s.end() && !isspace(*it); ++it)
		*it = toupper(*it);

	cout << "�׵��ʴ�д: " << s << endl;

	return 0;
}
