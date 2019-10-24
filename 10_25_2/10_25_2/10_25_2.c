#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//			sum += flag*1.0 / i;
//			flag = -flag;
//	}
//	printf("%f\n", sum);
//	system("pause");
//	return 0;
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
//	printf("%d\n", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	int sum = 0;
//	scanf("%d", &n);
//	for (i =1;i<=n;i++)
//	{
//		ret *= i;
//		sum +=ret;
//	}
//	
//	printf("%d\n", sum);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int ret = 1;
//	int n = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("%d\n", ret);
//	system("pause");
//	return 0;
//}
//折半/二分查找(找一次去掉一半)
//最坏情况所花费的时间 log 2 n
//条件 有序数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int left = 0;
//	int right = sizeof(arr1)/sizeof(arr1[0])-1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr1[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr1[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n ", left);
//			break;
//		}
//
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	system("pause");
//	return 0;
//}

int BinarySearch(int arr1[], int k, int right, int left)
{
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr1[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr1[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}

	}
	return -1;
}

int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int left = 0;
	int right = sizeof(arr1) / sizeof(arr1[0]) - 1;
	//二分查找
	int ret = BinarySearch(arr1, k, right, left);
	//返回值不能是0；0代表正确值
	if (ret == -1)
	{
		printf("找不到");
	}
	else
	{
		printf("找到了，下标为：%d\n", ret);
	}
	system("pause");
	return 0;
}