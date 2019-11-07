#define  _crt_secure_no_warnings 1
#include<stdio.h>
int main()
{
	int* p1 = arr;
	int* p2 = &arr[0];
	int(*p3)[10]=&arr//[]的优先级高于*,p3数组指针，指向数组
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%p\n", arr);
	printf("%p\n", arr+1); //加的是一个元素

	printf("%p\n", &arr[0]);//数组名其实就是首元素地址
	printf("%p\n", &arr[0] + 1);// 加的是一个元素

	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//取得是数组的地址，加的是一个数组
	//&arr[0],&arr意义不一样
	//int a = 10;
	//int* p= &a;//此时，p是一个指针变量
	//*p = 20;//* 间接访问操作符(解引用操作符),间接访问p所表示的对象
	system("pause");
	return 0;
}

int main()
{
	//sizeof是一个操作符，不是函数
	//int a = 10;
	//printf("%d", sizeof(int));
	//printf("%d", sizeof(a));
	//printf("%d", sizeof a);//sizeof后面()可以省略，说明sizeof不是函数
	////但如果()里面不是变量，是类型，eg:int,则不可省略
	int arr[10] = { 0 };
	printf("%d", sizeof(arr));//单独放一个数组名，计算数组总大小，单位是字节
	//40
	printf("%d", sizeof(arr+0));
	//4
	//数组名
	//1.数组名可以表示整个数组
	//a>sizeof(数组名)
	//b>sizeof(&数组名)
	//2.数组名可以表示首元素的地址
	//除此之外你遇到的所有的数组名都是首元素的地址
	//
	int sz =sizeof(arr)/sizeof(arr[0])
		//在函数内不可以使用，因为传过去的arr是一个地址(指针变量)，
		//而不是一个数组
	system("pause");
	return 0;
}
int main()
{
	int a = 0;
	//00000000 00000000 00000000 00000000//存放在内存
	//~按位取反
	//11111111 11111111 11111111 11111111//存放在内存
	//内存里面存放的是补码,打印的是原码
	//补码-1，取反(符号位不变，其他位按位取反)=原码
	//11111111 11111111 11111111 11111110
	//10000000 00000000 00000000 00000001
	printf("%d\n", ~a);//-1
	system("pause");
	return 0;
}
~的用法
int main()
{
	float f = 3.14f;
	int *pf =(int*)&f;//取地址实型，指针指向整型
	//float a = 3.14f;
	//int b = (int)a;;//强制类型转换
	//int a = 10;
	//int* p = &a;
	//*p=20;//解引用，间接访问操作符

	//int a = 15;
	// int b = ++a;//前置++,先++，后使用
	//int b = a++;//后置++，先使用，后++
	//00000000 00000000 00000000 00001111
	//00000000 00000000 00000000 00010000
	//或
	//00000000 00000000 00000000 00011111
	//11111111 11111111 11111111 11101111
	//与
	//0000000 00000000 00000000 000001111

	system("pause");
	return 0;
}
int main()
{
	int a = 3;
	int b = 0;
	printf("%d\n", a&&b);//0
	printf("%d\n", a||b);//1
	system("pause");
	return 0;
}
int main()
{
	int i = 0, a = 0, b = 2, c = 3, d = 4;    
	i = a++ && ++b && d++;//假&&则右边无意义
	//i = a++||++b||d++; //真||则右边无意义 
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);
	system("pause");
	return 0;
} //程序输出的结果是什么？
//1 2 3 4
//1 3 3 4
int main()
{
	system("pause");
	return 0;
}
int main()
{
	system("pause");
	return 0;
}

void menu()
{
	printf("####################################");
	printf("############## 1.play ##############");
	printf("############## 0.exit ##############");
	printf("####################################");
}
void play()
{
	int ret = rand() % 10 + 1;
	int i = 0;
	scanf("%d", &i);
	if(i>ret)
}
int main()
{
	int input = 0;
	do
	{
		menu();
		prinf("请输入>:");
		scanf("%d", &input);
		switch (1)
		{
		case 1:
		{
			play();
			break;
		}
		case 0:
		{
			printf("退出");
			break;
		}
		default:
		{
			printf("输入错误");
			break;
		}
	} while (input);
}
int main()
{
	// 代码1
	int a = 1;
	int b = 2;
	int c = (a > b, a = b + 10, a, b = a + 1);
	//逗号表达式 c/13？

	//代码2 
	if (a = b + 1, c  = a / 2, d > 0)

		//代码3 
		a = get_val(); count_val(a);
	while (a > 0) {
		//业务处理       
		a = get_val();
		count_val(a);
	}

	//如果使用逗号表达式，改写： 
		while (a = get_val(), count_val(a), a > 0) 
		{         
			//业务处理 
		}

}
 
//结构体
struct stu
{
	char name[20];
	short int age;
	char sex[10];
};
void print(struct stu* ps)
{
	printf("%s %d %s\n", ps->name, ps->age, ps->sex);
}
int main()
{
	struct stu s = {"张三",20,"男"};//初始化
	//struc stu 类型，s,变量 初始化:把变量赋为默认值
	//printf("%s %d %s\n", s.name, s.age, s.sex);
	print(&s);
	//直接传结构体是不合适的，会导致空间浪费，传地址
	system("pause");
	return 0;
 }

int main()
{
	//int num = 1234;
	//char a = num;
	////发生截断
	////1234
	////00000000 00000000 00000100 11010010‬
	////11010010‬  d2
	char a = 3;
	char b = 127;
	//00000000 00000000 00000000 00000011
	//00000011~a
	//00000000 00000000 00000000 01111111
	//01111111~b
	//00000000 00000000 00000000 10000010
	//10000010
	//11111111 11111111 11111111 10000010-补码(最高位是1，补1)
	//11111111 11111111 11111111 10000001
	//10000000 00000000 00000000 01111110-原码 减一取反
	//-126
	char c = a + b;
	printf("%d\n", c);
	//-126

int main()
{
	/*int a = 10;
	unsigned int b = 20;
	a + b;*/
	int a = 10;
	int b = 20;
	int c = a + b * 10;
	c = a + b + 10;		
	return 0;
}

	system("pause");
	return 0;
	}
	
int main()
{
	system("pause"); 
}











