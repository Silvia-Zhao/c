#define  _CRT_SECURE_NO_WARNINGS 1
//3.Ä£ÄâµÇÂ½
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
			printf("µÇÂ½³É¹¦!\n");
				break;
		}
		else
		{
			printf("ÃÜÂë´íÎó,ÇëÖØÐÂÊäÈë£¡\n");
		}
		}
	if (i == 3)
	{
		printf("3´ÎÃÜÂë´íÎó£¬ÍË³ö³ÌÐò\n");
	}
	system("pause");
	return 0;
}