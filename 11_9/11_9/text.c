#include<stdio.h>
#include<string.h>
//��ʼ������
void Init(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = i;
	}
}
//�������
void Empty(int arr[], int len)
{
	int i = 0;
	for (i = 0; i < len; i++)
	{
		arr[i] = 0;
	}
}
//��������Ԫ��
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
//��ӡ����
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
	printf("��ʼ������Ԫ��:>\n");
	Print(arr, len);
	Reverse(arr, len);
	printf("��������Ԫ��:>\n");
	Print(arr, len);
	Empty(arr, len);
	printf("�������Ԫ��:>\n");
	Print(arr, len);
	system("pause");
}
