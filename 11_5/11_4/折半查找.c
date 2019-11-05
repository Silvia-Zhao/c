#define  _CRT_SECURE_NO_WARNINGS 1
//2.折半查找
//写代码可以在整型有序数组中查找想要的数字
//找到了返回下标，否则，返回-1(折半查找)
#include<stdio.h>
int Binary_Search(int arr[], int n, int left, int right)
{
	while (left<=right)
	{
		int mid = left +( right-left) / 2;
		if (arr[mid] < n)
		{
			left = mid + 1;
		}
		else if (arr[mid] > n)
		{
			right = mid - 1;
		}
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10};
	//printf("请输入要查找的数字:>");
	int n = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int ret=Binary_Search(arr, n, left, right);
	if (ret == -1)
	{
		printf("找不到！\n");
	}
	else
	{
		printf("找到了，下标是%d\n", ret);
	}
	system("pause");
	return 0;
}
