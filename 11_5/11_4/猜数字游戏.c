#define  _CRT_SECURE_NO_WARNINGS 1
//1.��������Ϸ
#include<stdlib.h>
#include<time.h>
#include<stdio.h>
void menu()
{
	printf("######################################\n");
	printf("#########     ��������Ϸ     #########\n");
	printf("#############   1.play   #############\n");
	printf("#############   0.exit   #############\n");
	printf("######################################\n");
	printf("������:>");
}
void game()
{
	int guess = 0;
	int ret = rand() % 100 + 1;
	while (1)
	{	
		
		printf("�������:>");
		scanf("%d", &guess);
		if (guess< ret)
		{
			printf("��С�ˣ�\n");
		}
		
		else if (guess> ret)
		{
			printf("�´���\n");
		}
		
		else 
		{
			printf("��ϲ�㣬�¶���\n");
			printf("\n");
			break;
		}
	}
	
}
int main()
{
	srand((unsigned)time(null));	//����һ��������
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
			printf("�˳���Ϸ��");
			break;
		}
		default:
		{
			printf("����������������룡\n");
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
