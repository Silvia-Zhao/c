#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("**********************************\n");
	printf("**********    1.play    **********\n");
	printf("**********    0.exit    **********\n");
	printf("**********************************\n");
}
//RAND_MAX
//0-32767
//
#include<time.h>
void game()
{
	int ret = 0;
	int guess;
	//1.���������
	ret = rand()%100+1;
	//%100  �õ���Ϊ0-99
	//printf("%d\n", ret);
	//2.������
	while (1)
	{
		printf("�������:>");
			scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´���\n");
		}
		else if (guess < ret)
		{
			printf("��С��\n");
		}
		else
		{
			printf("��ϲ�㣬�¶��ˣ�\n");
			break;
		}
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{	game();
		break;
		}
		case 0:
		{	printf("�˳���Ϸ\n");
		break;
		}
		default:
		{
			printf("�������\n");
			break;
		}
		}
	} while (input);
	system("pause");
	return 0;
}