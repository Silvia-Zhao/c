#define  _CRT_SECURE_NO_WARNINGS 1
//4.写一个程序，可以一直收键盘字符
//如果是小写字符，就输出对应的大写字符
//如果是大写字符，就输出对应的小写字符
//如果是数字，则不输出
#include<stdio.h>
int main()
{
	int ch;
	printf("请输入字符\n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'A'&&ch <= 'Z')
		{
			printf("%c\n", ch + 32);
		}
		if (ch >= 'a'&&ch <= 'z')
		{
			printf("%c\n", ch -32);
		}
		if (ch >= '0'&&ch <= '9')
		{
			continue;
		}

		
}
	return 0;
}