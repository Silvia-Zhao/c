#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_leap_year(int y)
{
	/*if ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0))
	{
		return 1;
	}
	return 0;*/
	return  ((y % 4 == 0) && (y % 100 != 0) || (y % 400 == 0));
}
int main()
{
	int year = 0;
	int count = 0;
	for (year = 1000; year <= 2000; year++)
	{

		if (is_leap_year(year) == 1)
		{
			printf("%d ", year);
			count++;
		}
			
	}
	printf("\n");
	printf("count = %d ", count);
	system("pause");
	return 0;
}