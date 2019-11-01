#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////结构体
//struct Stu
//{
//	char name[20];
//	short int age;
//	char sex[10];
//};
//void print(struct Stu* ps)
//{
//	printf("%s %d %s\n", ps->name, ps->age, ps->sex);
//}
//int main()
//{
//	struct Stu s = {"张三",20,"男"};//初始化
//	//struc Stu 类型，s,变量 初始化:把变量赋为默认值
//	//printf("%s %d %s\n", s.name, s.age, s.sex);
//	print(&s);
//	//直接传结构体是不合适的，会导致空间浪费，传地址
//	system("pause");
//	return 0;
// }
//
//int main()
//{
//	//int num = 1234;
//	//char a = num;
//	////发生截断
//	////1234
//	////00000000 00000000 00000100 11010010‬
//	////11010010‬  D2
//	char a = 3;
//	char b = 127;
//	//00000000 00000000 00000000 00000011
//	//00000011~a
//	//00000000 00000000 00000000 01111111
//	//01111111~b
//	//00000000 00000000 00000000 10000010
//	//10000010
//	//11111111 11111111 11111111 10000010-补码(最高位是1，补1)
//	//11111111 11111111 11111111 10000001
//	//10000000 00000000 00000000 01111110-原码 减一取反
//	//-126
//	char c = a + b;
//	printf("%d\n", c);
//	//-126

//int main()
//{
//	/*int a = 10;
//	unsigned int b = 20;
//	a + b;*/
//	int a = 10;
//	int b = 20;
//	int c = a + b * 10;
//	c = a + b + 10;		
//	return 0;
//}

//	system("pause");
//	return 0;
//	}