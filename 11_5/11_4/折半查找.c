#define  _CRT_SECURE_NO_WARNINGS 1
//2.�۰����
//д����������������������в�����Ҫ������
//�ҵ��˷����±꣬���򣬷���-1(�۰����)
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
	//printf("������Ҫ���ҵ�����:>");
	int n = 17;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	int ret=Binary_Search(arr, n, left, right);
	if (ret == -1)
	{
		printf("�Ҳ�����\n");
	}
	else
	{
		printf("�ҵ��ˣ��±���%d\n", ret);
	}
	system("pause");
	return 0;
}
