#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <=200; i+=2)
//	{
//		//printf("%d", i);
//		//�ж�i�Ƿ�Ϊ����
//		//2 - i-1
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i%j == 0)
//				break;
//		}
//		if (j> sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//			
//	}
//	printf("\n");
//	printf("\ncount=%d\n", count);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i, j, i*j);
//			//%2d�Ҷ���(��ӡ��λ����)
//			//%-2d�����(��ӡ��λ����)
//		}
//		printf("\n");
//	}
//	system("pause");
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4 == 0) && (year%100!=0)) || (year % 400 == 0))
//		printf("%d ", year);
//	}
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//01010-a
//	//10100-b
//	//11110
//	printf("a=%d b=%d\n", a, b);
//	//������ʱ��������
//	/*int tmp = 0;
//	tmp = a;
//	a = b;
//	b = tmp;*/
//	//��������ʱ����
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	   //��λ���(�ŵ㣺����ջ���)
//	//�˷���ֻ�����������֮��Ľ���
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a=%d b=%d\n", a, b);
//	//������ʱ�������ŵ�
//		//Ч�ʸ�
//		//�׶�
//	
//	system("pause");
//	return 0;
//}
