#define  _CRT_SECURE_NO_WARNINGS 1
//4.дһ�����򣬿���һֱ�ռ����ַ�
//�����Сд�ַ����������Ӧ�Ĵ�д�ַ�
//����Ǵ�д�ַ����������Ӧ��Сд�ַ�
//��������֣������
#include<stdio.h>
int main()
{
	int ch;
	printf("�������ַ�\n");
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