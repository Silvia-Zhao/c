#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

//for (;;)
//{
//	printf("hehe\n");
//	//��ѭ���ĺǺ�
//	//û���ж� Ĭ��Ϊ��
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	for (i = 0; i <= 12; i++)
//	{
// 		printf("hehe\n");
//	    //��ѭ��
//		arr[i] = 0;
//		}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int ch = 0;
//	
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//		
//	system("pause");
//	return 0;
//}
//getchar ��ȡ�ַ��������int���գ�
//putchar ��ӡ�ַ�
//int main()
//{
//	int ch = 0;
//	//EOF-end of file �ļ�������־
//	//ctrl+z �˳����ѭ��
//	while ((ch = getchar()) != EOF)//eof �� -1
//		//getchar��ȡ����᷵��һ��EOF����-1��
//		//���ѡ��ת�����壬����֪������������
//		putchar(ch);
//	return 0;
//	//int ret = getchar();
//	//putchar(ret);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		//���ﵼ����ѭ��
////��������ѭ��continue����Ĵ��룬�����´�ѭ��
//		//if (i == 5)
//			//break;
//		//1234
////��ѭ��������break����ֹͣѭ����ֱ����ֹѭ��
////����while����е�break������������ֹѭ����
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//		case 7:
//			printf("��Ϣ��\n");
//			break;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	//for (i = i; i < 100; i++)
//	//{
//	//	if (i % 2 == 1)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//	/*else
//	//	{
//	//		continue;
//	//	}*/
//	//}
//	system("pause");
//	return 0;
//}


//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	for (i = 1; i <=100; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1.0 / i;
//		else
//			sum -=1.0 / i;
//	}
//	printf("%f\n", sum);
//	system("pause");
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
//	printf("count=%d\n", count);
//	system("pause");
//}


//int main()
//{
//	int ch = 0;
//	
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//		
//	system("pause");
//	return 0;
//}
//getchar ��ȡ�ַ��������int���գ�
//putchar ��ӡ�ַ�
//int main()
//{
//	int ch = 0;
//	//EOF-end of file �ļ�������־
//	//ctrl+z �˳����ѭ��
//	while ((ch = getchar()) != EOF)//eof �� -1
//		//getchar��ȡ����᷵��һ��EOF����-1��
//		//���ѡ��ת�����壬����֪������������
//		putchar(ch);
//	return 0;
//	//int ret = getchar();
//	//putchar(ret);
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		//���ﵼ����ѭ��
////��������ѭ��continue����Ĵ��룬�����´�ѭ��
//		//if (i == 5)
//			//break;
//		//1234
////��ѭ��������break����ֹͣѭ����ֱ����ֹѭ��
////����while����е�break������������ֹѭ����
//		printf("%d ", i);
//		i++;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//		case 1:
//		case 2:
//		case 3:
//		case 4:
//		case 5:
//			printf("������\n");
//			break;
//		case 6:
//		case 7:
//			printf("��Ϣ��\n");
//			break;
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i += 2)
//	{
//		printf("%d ", i);
//	}
//	//for (i = i; i < 100; i++)
//	//{
//	//	if (i % 2 == 1)
//	//	{
//	//		printf("%d ", i);
//	//	}
//	//	/*else
//	//	{
//	//		continue;
//	//	}*/
//	//}
//	system("pause");
//	return 0;
//}


//#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	float sum = 0;
//	for (i = 1; i <=100; i++)
//	{
//		if (i % 2 == 1)
//			sum += 1.0 / i;
//		else
//			sum -=1.0 / i;
//	}
//	printf("%f\n", sum);
//	system("pause");
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
//	printf("count=%d\n", count);
//	system("pause");
//}