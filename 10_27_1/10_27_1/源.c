#define  _CRT_SECURE_NO_WARNINGS 1
//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
////TDD-测试驱动开发
////github
////stackoverflow程序员的知乎
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
//		Sleep(1000);//单位是毫秒
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
//		//strcmp(arr1,arr2)可以返回3种情况，arr1>arr1 返回大于0
//			if (strcmp(password,"123456") == 0)
//			{
//				printf("登录成功\n");
//				break;
//			}
//			else
//			{
//				printf("密码错误，请重新输入\n");
//			}
//	}
//	if (i == 3)
//	{
//		printf("3次密码错误，退出程序\n");
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
//	//1.生成随机数
//	ret = rand()%100+1;
//	//%100  得的数为0-99
//	//printf("%d\n", ret);
//	//2.猜数字
//	while (1)
//	{
//		printf("请猜数字:>");
//			scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了！\n");
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
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//		{	game();
//		break;
//		}
//		case 0:
//		{	printf("退出游戏\n");
//		break;
//		}
//		default:
//		{
//			printf("输入错误\n");
//			break;
//		}
//		}
//	} while (input);
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//goto语句可以用循环来代替
//	again:
//	printf("hehe\n");
//	goto again;
//	system("pause");
//	return 0;
//}
////关机程序
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，您的在一分钟内关机，如果输入：我是猪，就取消关机\n");
//	scanf("%s", input);
//	//strcmp匹配字符串
//	if (strcmp(input, "我是猪") == 0)
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
//		printf("请注意，您的在一分钟内关机，如果输入：我是猪，就取消关机\n");
//		scanf("%s", input);
//		//strcmp匹配字符串
//		if (strcmp(input, "我是猪") == 0)
//		{
//			system("shutdown -a");
//		}
//		
//	}
//	
//	return 0;
//}

////推书 《c专家编程》
////函数(function)
////1.库函数
////www.cplusplus.com
////zn.cppreferrence.com
////2.自定义函数
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

//