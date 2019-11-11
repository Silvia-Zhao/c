#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Reverse(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	char str[20];
	scanf("%s", str);
	int sz = sizeof(str) / sizeof(str[0]);
	Reverse(str,sz);
}


