#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	
//	int a = 10;
//	//取出a地址时取出的是这个地址的首地址
//	int* p = &a;//int* 就是p的类型，这里p为指针变量(作用:存放一个地址)
//	//printf("%p\n", &a);//%p 打印地址
//	//00CFFA28
//	*p = 20;//*解引用操作符(通过p里面存的地址找到a)
//	printf("%d\n",*p);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a;
//	//int* pc = &a;
//	//printf("%d", sizeof(*pc));//输出指针*pc大小
//	char ch = 'w';
//	char *pc = &ch;
//	printf("%d\n",sizeof(pc));
//	system("pause");
//}
//
//struct Stu//struct结构体关键字 Stu结构体标签
//{
//	char name[30];
//	int age;
//	float score;
//};

//int main()
//{
//	
//	struct Stu s = { "张三",20, 55.5 };
//	struct Stu* ps = &s;//结构体的指针变量
//	printf("%s\n", ps->name);//张三
//	printf("%s\n",(*ps).name);//张三
//	//当我有一个结构体变量的时候，访问它的成员用 .
//	//当我有一个指向结构体的指针的时候，想访问它指向对象的成员时
//	//ps->就可以了，这个时候的意思是ps所指向对象的name
//	//结构体可以创建变量
//	//结构体初始化
//	//s-结构体变量
//	printf("%s\n", s.name);//张三
//	//.当我有一个结构体变量
//	//访问它其中的某个成员时 
//	//.可以找到
//	printf("%d\n", s.age);
//	printf("%f\n", s.score);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int age = 20;
//	if (age < 18)
//		printf("少年\n");
//	else if (age >= 18 && age <= 30)
//	{
//		printf("青年\n");
//		printf("结婚\n");
//	}
//	else if (age >= 30 && age <= 50)
//		printf("中年\n");
//	else
//		printf("老年\n");
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
