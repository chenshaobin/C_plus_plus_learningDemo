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
		* ֻ��ͨ����Ա����push_back��vector���������Ԫ�أ����������±���ʽ���
		* ֻ�ܶ�ȷ֪�Ѵ��ڵ�Ԫ��ִ���±������
	*/

	/*

	// �ӱ�׼�����ж�ȡ���ʣ�������Ϊvector�����Ԫ������
	string word;
	vector<string> text;
	cout << "�����뵥�ʣ�" << endl;
	while (cin >> word)
	{

		// ��word��ӵ�text����,
		text.push_back(word);	
	}

	*/

	// ͳ�Ƹ��������θ��ж��ٸ��ɼ�
	vector<unsigned> scores(11, 0);		// һ��11�������Σ�ȫ����ʼ��Ϊ0
	unsigned grade;
	cout << "������һ��0-100�ķ���" << endl;
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