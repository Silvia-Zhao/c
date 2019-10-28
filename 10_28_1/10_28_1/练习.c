#define  _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	//strcpy字符串拷贝
//	//数组名其实是一个地址
//	char arr1[20] = "aaaaaaaa";
//	char arr2[] = "Hel";
//	strcpy(arr1, arr2);
//	//比较的里面需得是地址
//	//strcpy(目标, 源);
//	printf("%s\n", arr1);
//	system("pause");
//	return 0;
//}
//#include<Windows.h>
//int main()
//{
//	//memset 内存设置
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


////当实参传给形参的时候
////形参是实参的一份临时拷贝
////对形参的修改不会改变实参
////
////void 表示函数不需要反馈
////形参
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
//.md markdown语法
//#的多少影响字体的大小
//>引用
//... 中间可以写代码 ...
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
//		//判断是否为素数
//		if (is_prime(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	system("pause");
//	return 0;
//}
