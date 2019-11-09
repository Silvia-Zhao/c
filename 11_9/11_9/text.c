#include<stdio.h>
#include<string.h>
//初始化数组
void Init(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = i;
	}
}
//清空数组
void Empty(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
//逆置数组元素
void Reverse(int arr[], int len)
{
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
//打印数组
void Print(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10];
	int len = sizeof(arr) / sizeof(arr[0]);
	Init(arr, len);
	printf("初始化数组元素:>\n");
	Print(arr, len);
	Reverse(arr, len);
	printf("逆置数组元素:>\n");
	Print(arr, len);
	Empty(arr, len);
	printf("清空数组元素:>\n");
	Print(arr, len);
	system("pause");
}
