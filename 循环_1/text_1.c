#define  _CRT_SECURE_NO_WARNINGS 1
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int a = 0;
	int sum = 0;
	int temp = 0;
	scanf("%d", &a);
	for (i = 0; i < 5; i++)
	{
		temp = temp * 10 + a;
		printf("%d + ", temp);
		sum += temp;
	}
	printf(" = %d", sum);
	system("pause");
}
//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	for (i = 2; i < 1000; i++)
//	{
//		a = i %10;
//		b = i / 10 % 10;
//		c = i / 100;
//		if (i == a * a*a + b * b*b + c * c*c)
//			printf("%d\n", i);
//	}
//	system("pause");
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int maxline = 0;
//	scanf("%d", &maxline);
//	for (i = 1; i < maxline; i++)
//	{
//		for (j = 0; j <( 2*i - 1); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (i = 1; i < maxline; i++)
//	{
//		for (j = 0; j < (2*(maxline-i)-3); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	system("pause");
//}
//int main()
//{
//	int i=1;
//	do {
//		printf("%d", i);
//		i++;
//	} while (i < 10);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0; k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}
////一次也不循环，判断也有值，此处每次判断值均为0；


//for (;;)
//{
//	printf("hehe\n");
//	//死循环的呵呵
//	//没有判断 默认为真
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
// 		printf("hehe\n");
//	    //死循环
//		arr[i] = 0;
//		}
//	system("pause");
//	return 0;
//}

