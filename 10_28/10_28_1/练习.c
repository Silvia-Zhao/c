#define  _CRT_SECURE_NO_WARNINGS 1
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
