#pragma once
#include<stdio.h>
void InsertSort(int *a,int n)
int main()
{
	for (int i = 1; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if(tmp<a)
		}
	}
}
void QuickSort(int* a, int left, int right)
{
	if (left > right)
	{

	}
}
//单项走前后指针发

int PartSort3(int* a, int left, int right)
	{
		int key = [right];
		int prev = left - 1, cur = left;
		while (cur < right)
		{
			if (a[cur] < key&&++prev != cur)
			{
				Swap(&a[cur], &a[prev]);
			}
			++cur;
		}
		++prev;
		Swap(&a[right], &a[perv]);

		return prev;
	}