#define  _CRT_SECURE_NO_WARNINGS 1
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