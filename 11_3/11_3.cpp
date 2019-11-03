#define  _CRT_SECURE_NO_WARNINGS 1
//输入一个字符串，求出该字符串包含的字符集合
//输入描述 :
//每组数据输入一个字符串，字符串最大长度为100，且只包含字母，不可能为空串，区分大小写。
//输出描述 :
//每组数据一行，按字符串原有的字符顺序，输出字符集合，即重复出现并靠后的字母不输出。
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	while (cin >> str)
	{
		int length = str.length();
		int arr[123] = { 0 };
		for (int i = 0; i < length; ++i)
		{
			arr[str[i]] = 1;
		}
		for (int i = 0; i < length; ++i)
		{
			if (arr[str[i]] == 1)
			{
				cout << str[i];
				arr[str[i]] = 0;
			}
		}
		cout << endl;
	}

	return 0;
}