#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//用MSDN查头文件
//标准输入输出头文件
#include <stdlib.h>
#include <string.h>
//define定义标识符常量
#define MAX 100
//define定义宏
//宏是代参的
#define ADD(x,y) x+y
//区别：有没有参数
int main()
{
	//int a=max;
	int sum = ADD(2, 3);
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}
#define SQUARE(x) x*x

int main()
{
	printf("%d\n", SQUARE(2 + 1));
	//printf("%d\n",2+1*2+1);
	system("pause");
}
//void text()
//{
//	//num生命周期延长了
//	static int num = 0;
//	//123456...
//	//int num = 0;
//	//111111...
//	num++;
//	printf("%d", num);
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		text();
//	}
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max=a > b ? a : b;//三目(条件)操作符
//	printf("%d",a)
//		system("pause");
//
//}
//
//int main()
//{
//	int a = (int)3.14;
//	printf("%d\n", a);//3
//	//int a = int(3.14);//err
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//	int c = ++a;//后置++，先++，再使用
//	printf("%d\n", a);//11
//	printf("%d\n", c);//10
//
//	system("pause");
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", !a);
//	printf("%d\n", ~a);
//	system("pause");
//}
//int main() 
//{
//	int a = 3;
//	int b = 5;
//	int c1 = a & b;//按位与
//	//011
//	//101
//	//001
//	//
//	printf("%d\n", c1);
//
//	int c2 = a | b;//按位或
//	//011
//	//101
//	//111
//	//
//	printf("%d\n", c2);
//
//	int c3 = a ^ b;//按位异或(相同为0，相异为1)
//	//011
//	//101
//	//110
//	//
//	printf("%d\n", c3);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	int a = -1;
//	//100000000000000000000001
//	//111111111111111111111110
//	//111111111111111111111111
//	//左移补码
//	//111111111111111111111110
//	//100000000000000000000010
//	int b = a << 1;
//	
//	printf("%d\n", b);
//	printf("%d\n", a);
//
//	system("pause");
//	return 0;
//}
    

//int main()
//{
//	int a = 3 / 2;
//	float b = 3 / 2;
//	float c = 3 / 2.0;
//	printf("%d\n", a);//1
//	printf("%f\n", a);//1.000000
//	printf("%f\n", b);//1.000000
//	printf("%f\n", c);//1.500000
//	
//	//两个数都是整型，
//	//执行的整数除法而只要有一个是浮点数，则为浮点数除法
//	int a1 = 5 % 2;
//	printf("a=%d\n", a1);
//	//%只能对整数取模
//	//整数
//	//正数(原反补相同)
//	//负数
//	//在二进制中储存的三种形式
//	//原码
//	//反码
//	//补码(移位移的是补码的形式)
//	//内存里存的是一个数转换成二进制的补码
//	//反码 + 1 = 补码
//	
//	int a2 = 10;
//	int b2 = a2 << 1;
//	//左移操作符，移的是二进制位
//	//
//	//1111
//	//8421
//	//1010 - 8
//	//000000000000000000001010
//	//左边丢一位，右边补一位
//	//整数 - 4字节 - 32bit
//	printf("%d\n", b2);
//	printf("%d\n", a2);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//数组(一组相同类型元素的集合)
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char arr2[20] = { 0 };
//	//使得第一个为0；后面默认为0
//	//下标来访问数组
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	
//	system("pause");
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	//sum = num1 + num2;
//	//报错，C语言规定  变量创建必须在代码块前面
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}



////循环
////1.for
////2.while
////3.do while 
//int main()
//{
//	int line = 0;
//	while (line <= 20000)
//	{
//		printf("好好学习\n");
//		line++;
//	}
//	printf("大牛:%d\n", line);
//	system("pause");
//	return 0;
//}



////两种选择
////1.if
////2.switch
//int main()
//{
//	int input = 0;
//	printf("加入我们，你要好好学习吗？\n");
//	scanf("%d", &input);
//	if (1 == input)
//	{
//		printf("好offer");
//	}
//	else
//	{
//		printf("卖红薯");
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:test\328\test.c"));
//	printf("%c\n", '\x30');
//	printf("%d\n", 'a');
//		//这里\32 是一个，8是一个字符
//		//   \ddd 三个8进制数字(8进制0~7)
//		//ASCII编码
//		//A-65
//		//a-97
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//printf("c:\code\test.c\n");
//	////\t水平制表符
//	////\n 换行
//	////??)--三字母词--]
//	//printf("%c\n", '\'');//%c  字符
//	///*printf("%c\n", 'a');*/
//	//printf("%s\n", "abc");
//	//printf("%s\n", "a");
//	//printf("%s\n", "\"");
//	//printf("c:\\code\\test.c\n");
//	/*printf("\a\a\a\a\a\a\a\a");*/
//	system("pause");
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\'');
//		system("pause");
//}
//int main()
//{
//
//	char arr[] = "abcdef";//\0仅做结束标志，不当做内容来进行处理
//	printf("%d\n", strlen(arr));//求字符串长度
	//用strlen求字符串长度，不将\0计算进去
	////"abcdef"
	//char arr1[] = "abcdef";
	//char arr2[] = {'a','b','c','d','e','f'};
	////没有\0导致
 // //'\0'字符串结束的标志
	//printf("%s\n", "abcdef");//7个元素
	////""内的字符隐藏了的/0
	//printf("%s\n", arr1);//6
	//printf("%s\n", arr2);//7
	//system("pause");
	//return 0;
	//F10调试
//}
//枚举常量
//struct Stu
//{
////结构体和枚举类似
//};
//enum Sex//sex 枚举类型
//{
//	//放枚举的可能取值
//	//枚举常量
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main()
//{
//	//enum Sex s = MALE;
//	/*MALE = 5;*/
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//	system("pause");
//	//常量有值
//	return 0;
//}

//#define定义的标识符常量 
//#define MAX 1000
//int main()
//{
	//int a = MAX;
	////MAX = 2000;//不可修改
	//int arr[MAX]={0};
	//字面常量
	//3；
	//3.14；
	//const int num = 10;//常变量
	////num = 20;报错
	//printf("%d\n", num);
	//const修饰的常变量
	////const int n = 10;
	//int arr[n];//n必须得是常量
	//system("pause");
//	system("pause");
//	return 0;
//}

//extern int a;//extern声明外部符号
////int a = 10;
//
//int main()
//{
//	{
//		int a = 20;
//	}
//	printf("a=%d\n", a);
//	system("pause");
//	//局部变量的作用域是它所在的代码块
//	//全局变量的作用域是整个程序
//}

//ctrl+F5
//主函数 程序的入口
//int main()
//{
//	printf("hello world");
//	system("pause");//暂停,为看到结果
//	//F9 断点
//	return 0;
//	//返回整型，return表示返回，0表示整型
//	//0返回正确返回，1返回错误返回，或者非法返回
//}  
//int main()
//{
//	//7种数据类型
//	//char short int long long long float double
//	//为了减少资源浪费
//	printf("%d\n", sizeof(char));//计算char的大小 1(字节)
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4(32). 8(64)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	system("pause");
//
//}
//int a = 20;//全局变量(代码块外)
////代码块-{}
//int main()
//{
//	int age = 20;//4/ 
//	float weight = 55.5;//局部变量(代码块内)
//	//局部优先
//	double num = 0.0;
//	//变量-常量
//}
//int main()
//{
//	printf("hehe\n");
//	printf("%s\n", "hehe");
//	printf("%c%c%c%c\n", 'h', 'e', 'h', 'e');
//	system("pause");
//	return 0;
//}

