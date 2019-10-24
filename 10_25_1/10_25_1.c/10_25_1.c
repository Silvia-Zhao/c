#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr[10] = { -1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] > max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c);
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	//指针变量
//	*p = 20;
//	//*p解引用
//	printf("%d\n", a);
//	system("pause");
//}
//当实参传给形参的时候
//形参是实参的一份临时拷贝
//x,y 形参
//void Swap(int *px, int *py)
//{
//	int tmp = *px;
//	*px = *py;
//	*py = tmp;
//}
//int main()
//{
//	int a = 2;
//	int b = 1;
//	int c = 3;
//	if (a < b)
//	{
//		Swap(&a, &b);
//	}
//	if (a < c);
//	{
//		Swap(&a, &c);//断点
//	}
//	//a,c 实参
//	if (b < c)
//	{
//		Swap(&b, &c);
//	}
//	printf("%d %d %d\n", a, b, c);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int m = 24;
//	int n = 18;
//	while (tmp=m%n)
//	{
//		m = n;
//		n = tmp;
//	}
//	//while (m%n)
//	//{
//	//	int tmp = m % n;
//	//	m = n;
//	//	n = tmp;
//	//}
//	printf("%d\n", n);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int arr1[] = { 1,3,5,7 };
//	int arr2[] = { 2,4,6,8 };
//	int tmp = 0;
//	//数组名 eg.tmp 是一个地址，地址是不能改变的
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//		//sizeof(arr1)求数组大小，单位是字节（4*5=20）
//		{
//			int tmp = arr1[i];
//			arr1[i] = arr2[i];
//			arr2[i] = tmp;
//		}
//	for (i = 0; i < sz; i++)
//		{
//			printf("%d ", arr1[i]);
//		}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//		{
//		printf("%d ", arr2[i]);
//		}
//	printf("\n");
//	system("pause");
//	return 0;
//}