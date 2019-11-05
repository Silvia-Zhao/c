#define  _CRT_SECURE_NO_WARNINGS 1
//1.猜数字游戏
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
void menu()
{
	printf("######################################\n");
	printf("#########     猜数字游戏     #########\n");
	printf("#############   1.play   #############\n");
	printf("#############   0.exit   #############\n");
	printf("######################################\n");
	printf("请输入:>");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{	
		
		printf("请猜数字:>");
		scanf("%d", &guess);
		if (guess< ret)
		{
			printf("猜小了！\n");
		}
		
		else if (guess> ret)
		{
			printf("猜大了\n");
		}
		
		else 
		{
			printf("恭喜你，猜对了\n");
			printf("\n");
			break;
		}
	}
	
}
int main()
{
	srand((unsigned)time(null));	//建立一个随机起点
	int input = 0;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			game();
			break;
		}
		case 0:
		{
			printf("退出游戏！");
			break;
		}
		default:
		{
			printf("输入错误，请重新输入！\n");
			break;
		}
		}
	} while (input);
	
}

/* rand.c: this program seeds the random-number generator
* with the time, then displays 10 random integers.
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
void main(void)
{
	int i;
	/* seed the random-number generator with current time so that
	 * the numbers will be different every time we run.
	 */
	srand((unsigned)time(null));
	/* display 10 numbers. */
	for (i = 0; i < 10; i++)
		printf("  %6d\n", rand());
	system("pause");
}
