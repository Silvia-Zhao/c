#define  _CRT_SECURE_NO_WARNINGS 1
//����һ���ַ�����������ַ����������ַ�����
//�������� :
//ÿ����������һ���ַ������ַ�����󳤶�Ϊ100����ֻ������ĸ��������Ϊ�մ������ִ�Сд��
//������� :
//ÿ������һ�У����ַ���ԭ�е��ַ�˳������ַ����ϣ����ظ����ֲ��������ĸ�������
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