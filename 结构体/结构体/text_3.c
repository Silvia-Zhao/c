#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	
//	int a = 10;
//	//ȡ��a��ַʱȡ�����������ַ���׵�ַ
//	int* p = &a;//int* ����p�����ͣ�����pΪָ�����(����:���һ����ַ)
//	//printf("%p\n", &a);//%p ��ӡ��ַ
//	//00CFFA28
//	*p = 20;//*�����ò�����(ͨ��p�����ĵ�ַ�ҵ�a)
//	printf("%d\n",*p);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a;
//	//int* pc = &a;
//	//printf("%d", sizeof(*pc));//���ָ��*pc��С
//	char ch = 'w';
//	char *pc = &ch;
//	printf("%d\n",sizeof(pc));
//	system("pause");
//}
//
//struct Stu//struct�ṹ��ؼ��� Stu�ṹ���ǩ
//{
//	char name[30];
//	int age;
//	float score;
//};

//int main()
//{
//	
//	struct Stu s = { "����",20, 55.5 };
//	struct Stu* ps = &s;//�ṹ���ָ�����
//	printf("%s\n", ps->name);//����
//	printf("%s\n",(*ps).name);//����
//	//������һ���ṹ�������ʱ�򣬷������ĳ�Ա�� .
//	//������һ��ָ��ṹ���ָ���ʱ���������ָ�����ĳ�Աʱ
//	//ps->�Ϳ����ˣ����ʱ�����˼��ps��ָ������name
//	//�ṹ����Դ�������
//	//�ṹ���ʼ��
//	//s-�ṹ�����
//	printf("%s\n", s.name);//����
//	//.������һ���ṹ�����
//	//���������е�ĳ����Աʱ 
//	//.�����ҵ�
//	printf("%d\n", s.age);
//	printf("%f\n", s.score);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("����\n");
//	else if (age >= 18 && age <= 30)
//	{
//		printf("����\n");
//		printf("���\n");
//	}
//	else if (age >= 30 && age <= 50)
//		printf("����\n");
//	else
//		printf("����\n");
//	system("pause");
//
//	return 0;
//}

//int main()
//{
//	int arr1[]= {1,2,3,4,5 };
//	int arr2[] = { 6,7,8,9,10 };
//	int tmp = 0;
//	int i = 0;
//	int sz = 0;
//	sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d\t", arr2[i]);
//	}
//	system("pause");
//	return 0;
//}
