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
	vector<string> v1{ "a", "an", "the" };
	for (auto i : v1)
	{
		cout << i << " ";
	}
	cout << endl;
	/*
		* 只能通过成员函数push_back向vector对象中添加元素，而不能用下标形式添加
		* 只能对确知已存在的元素执行下标操作。
	*/

	/*

	// 从标准输入中读取单词，将其作为vector对象的元素输入
	string word;
	vector<string> text;
	cout << "请输入单词：" << endl;
	while (cin >> word)
	{

		// 将word添加到text后面,
		text.push_back(word);	
	}

	*/

	// 统计各个分数段各有多少个成绩
	vector<unsigned> scores(11, 0);		// 一共11个分数段，全部初始化为0
	unsigned grade;
	cout << "请输入一组0-100的分数" << endl;
	while (cin >> grade) 
	{
		if (grade <= 100)
			++scores[grade / 10];
	}

	for (auto i : scores)
	{
		cout << i << " ";
	}


	return 0;
}