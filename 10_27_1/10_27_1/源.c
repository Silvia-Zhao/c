#define  _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
////TDD-������������
////github
////stackoverflow����Ա��֪��
////
////welcome to bit!!!!!
////###################
////w#################!
////we###############!!
////wel#############!!!
////...
//int main()
//{
//	int arr1[] = "welcome to bit!!!!!";
//	int arr2[] = "###################";
//	int left = 0;
//	int right = strlen(arr1)-1;
//	whiile(left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//��λ�Ǻ���
//		system("cls");
//		left++;
//		right--;
//	}
//	system("pause");
//	return 0;
//int main()
//{
//	int i = 0;
//	int password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", password);
//		//strcmp(arr1,arr2)���Է���3�������arr1>arr1 ���ش���0
//			if (strcmp(password,"123456") == 0)
//			{
//				printf("��¼�ɹ�\n");
//				break;
//			}
//			else
//			{
//				printf("�����������������\n");
//			}
//	}
//	if (i == 3)
//	{
//		printf("3����������˳�����\n");
//	}
//		system("pause");
//	return 0;
//}
//
//void menu()
//{
//	printf("**********************************\n");
//	printf("**********    1.play    **********\n");
//	printf("**********    0.exit    **********\n");
//	printf("**********************************\n");
//}
////RAND_MAX
////0-32767
////
//#include<time.h>
//void game()
//{
//	int ret = 0;
//	int guess;
//	//1.���������
//	ret = rand()%100+1;
//	//%100  �õ���Ϊ0-99
//	//printf("%d\n", ret);
//	//2.������
//	while (1)
//	{
//		printf("�������:>");
//			scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶��ˣ�\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{	game();
//		break;
//		}
//		case 0:
//		{	printf("�˳���Ϸ\n");
//		break;
//		}
//		default:
//		{
//			printf("�������\n");
//			break;
//		}
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//goto��������ѭ��������
//	again:
//	printf("hehe\n");
//	goto again;
//	system("pause");
//	return 0;
//}
////�ػ�����
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬������һ�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s", input);
//	//strcmpƥ���ַ���
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	while (1)
//	{
//		printf("��ע�⣬������һ�����ڹػ���������룺��������ȡ���ػ�\n");
//		scanf("%s", input);
//		//strcmpƥ���ַ���
//		if (strcmp(input, "������") == 0)
//		{
//			system("shutdown -a");
//		}
//		
//	}
//	
//	return 0;
//}

////���� ��cר�ұ�̡�
////����(function)
////1.�⺯��
////www.cplusplus.com
////zn.cppreferrence.com
////2.�Զ��庯��
//int main()
//{
//	//strcpy�ַ�������
//	//��������ʵ��һ����ַ
//	char arr1[20] = "aaaaaaaa";
//	char arr2[] = "Hel";
//	strcpy(arr1, arr2);
//	//�Ƚϵ���������ǵ�ַ
//	//strcpy(Ŀ��, Դ);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//#include<Windows.h>
//int main()
//{
//	//memset �ڴ�����
//	char arr[] = "hello world";
//	memset(arr, 'a', 5);
//	printf("%s\n", arr);
//	system("pause");
//	return 0;
//}
//int get_max(int x, int y)
//{
//	/*if (x > y)
//		return x;
//	else
//		return y;*/
//	return (x > y)?(x):(y);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//scanf("%d %d", &a, &b);
//	int max=get_max(a,b);
//	printf("max = %d\n", max);
//	system("pause");
//	return 0;
//}


////��ʵ�δ����βε�ʱ��
////�β���ʵ�ε�һ����ʱ����
////���βε��޸Ĳ���ı�ʵ��
////
////void ��ʾ��������Ҫ����
////�β�
////void Swap(int x, int y)
////{
////	int tmp = x;
////	x = y;
////	y = tmp;
////
////}
//void Swap(int *pa, int *pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a,&b);
//	printf("a = %d b = %d\n", a, b);
//	system("pause");
//	return 0;
//}
//.md markdown�﷨
//#�Ķ���Ӱ������Ĵ�С
//>����
//... �м����д���� ...
//#include<math.h>
//int is_prime(int x)
//{
//	for (int j = 2; j < sqrt(x); j++)
//	{
//		if (x%j == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж��Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}

//