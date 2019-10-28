#define  _CRT_SECURE_NO_WARNINGS 1
//void Add(int *p)
//{
//	(*p)++;
//	//()必须存在，++作用于 *p
//	//如果没有(),++作用于p,就不改变地址了
//}
//
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int len=strlen("abcdef");
//	//printf("%d\n",len);
//	//printf("%d\n", strlen("abcdef")); 
//	printf("%d\n",printf("%d",printf("%d",43)));
//	system("pause");
//	return 0;
//}'
//
//
////函数的声明
//int Add(int x, int y);
//////函数的使用
//#include "Add.h"
//
//#pragma comment(lib,"Add.lib")
////表示引入的静态库，名称为 Add.lib。
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}
//函数的定义
//int Add(int x, int y)
//{
//	return x + y;
//}
//最简单的递归
//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}
//void print(unsigned int n)//1234
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 1234;
//	print(num);
//	//1234
//	//123 4
//	//12 3 4
//	//1 2 3 4
//	system("pause");
//	return 0;
//}
//
//int main()
//{
//	int len = strlen("abc");
//	printf("%d", len);
//	system("pause");
//	return 0;
//}
my_strlen()
{

}
int main()
{
	int len = my_strlen("abc");
	printf("%d", len);
	char *p = "abcdef";
	//把a对的地址赋值给了p
	system("pause");
	return 0;
}