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
	//1.生成随机数
	ret = rand()%100+1;
	//%100  得的数为0-99
	//printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字:>");
			scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了\n");
		}
		else if (guess < ret)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
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
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{	game();
		break;
		}
		case 0:
		{	printf("退出游戏\n");
		break;
		}
		default:
		{
			printf("输入错误\n");
			break;
		}
		}
	} while (input);
	system("pause");
	return 0;
}