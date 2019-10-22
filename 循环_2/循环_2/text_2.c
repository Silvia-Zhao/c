#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

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


//int main()
//{
//	int ch = 0;
//	
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//		
//	system("pause");
//	return 0;
//}
//getchar 获取字符（最好用int接收）
//putchar 打印字符
//int main()
//{
//	int ch = 0;
//	//EOF-end of file 文件结束标志
//	//ctrl+z 退出这个循环
//	while ((ch = getchar()) != EOF)//eof — -1
//		//getchar获取错误会返回一个EOF，即-1；
//		//鼠标选中转到定义，可以知道它具体意义
//		putchar(ch);
//	return 0;
//	//int ret = getchar();
//	//putchar(ret);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		//这里导致死循环
////跳过本次循环continue后面的代码，继续下次循环
//		//if (i == 5)
//			//break;
//		//1234
////在循环中遇到break，就停止循环，直接终止循环
////所以while语句中的break是用来永久终止循环的
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	//for (i = i; i < 100; i++)
//	//{
//	//	if (i % 2 == 1)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//	/*else
//	//	{
//	//		continue;
//	//	}*/
//	//}
//	system("pause");
//	return 0;
//}


//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	for (i = 1; i <=100; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1.0 / i;
//		else
//			sum -=1.0 / i;
//	}
//	printf("%f\n", sum);
//	system("pause");
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	system("pause");
//}


//int main()
//{
//	int ch = 0;
//	
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//		
//	system("pause");
//	return 0;
//}
//getchar 获取字符（最好用int接收）
//putchar 打印字符
//int main()
//{
//	int ch = 0;
//	//EOF-end of file 文件结束标志
//	//ctrl+z 退出这个循环
//	while ((ch = getchar()) != EOF)//eof — -1
//		//getchar获取错误会返回一个EOF，即-1；
//		//鼠标选中转到定义，可以知道它具体意义
//		putchar(ch);
//	return 0;
//	//int ret = getchar();
//	//putchar(ret);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		//这里导致死循环
////跳过本次循环continue后面的代码，继续下次循环
//		//if (i == 5)
//			//break;
//		//1234
////在循环中遇到break，就停止循环，直接终止循环
////所以while语句中的break是用来永久终止循环的
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("工作日\n");
//			break;
//		case 6:
//		case 7:
//			printf("休息日\n");
//			break;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	//for (i = i; i < 100; i++)
//	//{
//	//	if (i % 2 == 1)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//	/*else
//	//	{
//	//		continue;
//	//	}*/
//	//}
//	system("pause");
//	return 0;
//}


//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	for (i = 1; i <=100; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1.0 / i;
//		else
//			sum -=1.0 / i;
//	}
//	printf("%f\n", sum);
//	system("pause");
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	system("pause");
//}