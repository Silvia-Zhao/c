#define  _CRT_SECURE_NO_WARNINGS 1
//3.ģ���½
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i = 0;
	int password[20] = { 0 };
	for ( i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)
		{
			printf("��½�ɹ�!\n");
				break;
		}
		else
		{
			printf("�������,���������룡\n");
		}
		}
	if (i == 3)
	{
		printf("3����������˳�����\n");
	}
	system("pause");
	return 0;
}