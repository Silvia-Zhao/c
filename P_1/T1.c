#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//��MSDN��ͷ�ļ�
//��׼�������ͷ�ļ�
#include <stdlib.h>
#include <string.h>
//define�����ʶ������
#define MAX 100
//define�����
//���Ǵ��ε�
#define ADD(x,y) x+y
//������û�в���
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
//	//num���������ӳ���
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
//	max=a > b ? a : b;//��Ŀ(����)������
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
//	//int b = a++;//����++����ʹ�ã���++
//	//printf("%d\n", a);//11
//	//printf("%d\n", b);//10
//	int c = ++a;//����++����++����ʹ��
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
//	int c1 = a & b;//��λ��
//	//011
//	//101
//	//001
//	//
//	printf("%d\n", c1);
//
//	int c2 = a | b;//��λ��
//	//011
//	//101
//	//111
//	//
//	printf("%d\n", c2);
//
//	int c3 = a ^ b;//��λ���(��ͬΪ0������Ϊ1)
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
//	//���Ʋ���
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
//	//�������������ͣ�
//	//ִ�е�����������ֻҪ��һ���Ǹ���������Ϊ����������
//	int a1 = 5 % 2;
//	printf("a=%d\n", a1);
//	//%ֻ�ܶ�����ȡģ
//	//����
//	//����(ԭ������ͬ)
//	//����
//	//�ڶ������д����������ʽ
//	//ԭ��
//	//����
//	//����(��λ�Ƶ��ǲ������ʽ)
//	//�ڴ�������һ����ת���ɶ����ƵĲ���
//	//���� + 1 = ����
//	
//	int a2 = 10;
//	int b2 = a2 << 1;
//	//���Ʋ��������Ƶ��Ƕ�����λ
//	//
//	//1111
//	//8421
//	//1010 - 8
//	//000000000000000000001010
//	//��߶�һλ���ұ߲�һλ
//	//���� - 4�ֽ� - 32bit
//	printf("%d\n", b2);
//	printf("%d\n", a2);
//
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//int a = 10;
//	//����(һ����ͬ����Ԫ�صļ���)
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	char arr2[20] = { 0 };
//	//ʹ�õ�һ��Ϊ0������Ĭ��Ϊ0
//	//�±�����������
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
//	//����C���Թ涨  �������������ڴ����ǰ��
//	sum = Add(num1, num2);
//	printf("sum = %d\n", sum);
//	system("pause");
//	return 0;
//}



////ѭ��
////1.for
////2.while
////3.do while 
//int main()
//{
//	int line = 0;
//	while (line <= 20000)
//	{
//		printf("�ú�ѧϰ\n");
//		line++;
//	}
//	printf("��ţ:%d\n", line);
//	system("pause");
//	return 0;
//}



////����ѡ��
////1.if
////2.switch
//int main()
//{
//	int input = 0;
//	printf("�������ǣ���Ҫ�ú�ѧϰ��\n");
//	scanf("%d", &input);
//	if (1 == input)
//	{
//		printf("��offer");
//	}
//	else
//	{
//		printf("������");
//	}
//	return 0;
//}

//int main()
//{
//	printf("%d\n", strlen("c:test\328\test.c"));
//	printf("%c\n", '\x30');
//	printf("%d\n", 'a');
//		//����\32 ��һ����8��һ���ַ�
//		//   \ddd ����8��������(8����0~7)
//		//ASCII����
//		//A-65
//		//a-97
//	system("pause");
//	return 0;
//}
//int main()
//{
//	//printf("c:\code\test.c\n");
//	////\tˮƽ�Ʊ��
//	////\n ����
//	////??)--����ĸ��--]
//	//printf("%c\n", '\'');//%c  �ַ�
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
//	char arr[] = "abcdef";//\0����������־�����������������д���
//	printf("%d\n", strlen(arr));//���ַ�������
	//��strlen���ַ������ȣ�����\0�����ȥ
	////"abcdef"
	//char arr1[] = "abcdef";
	//char arr2[] = {'a','b','c','d','e','f'};
	////û��\0����
 // //'\0'�ַ��������ı�־
	//printf("%s\n", "abcdef");//7��Ԫ��
	////""�ڵ��ַ������˵�/0
	//printf("%s\n", arr1);//6
	//printf("%s\n", arr2);//7
	//system("pause");
	//return 0;
	//F10����
//}
//ö�ٳ���
//struct Stu
//{
////�ṹ���ö������
//};
//enum Sex//sex ö������
//{
//	//��ö�ٵĿ���ȡֵ
//	//ö�ٳ���
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
//	//������ֵ
//	return 0;
//}

//#define����ı�ʶ������ 
//#define MAX 1000
//int main()
//{
	//int a = MAX;
	////MAX = 2000;//�����޸�
	//int arr[MAX]={0};
	//���泣��
	//3��
	//3.14��
	//const int num = 10;//������
	////num = 20;����
	//printf("%d\n", num);
	//const���εĳ�����
	////const int n = 10;
	//int arr[n];//n������ǳ���
	//system("pause");
//	system("pause");
//	return 0;
//}

//extern int a;//extern�����ⲿ����
////int a = 10;
//
//int main()
//{
//	{
//		int a = 20;
//	}
//	printf("a=%d\n", a);
//	system("pause");
//	//�ֲ��������������������ڵĴ����
//	//ȫ�ֱ���������������������
//}

//ctrl+F5
//������ ��������
//int main()
//{
//	printf("hello world");
//	system("pause");//��ͣ,Ϊ�������
//	//F9 �ϵ�
//	return 0;
//	//�������ͣ�return��ʾ���أ�0��ʾ����
//	//0������ȷ���أ�1���ش��󷵻أ����߷Ƿ�����
//}  
//int main()
//{
//	//7����������
//	//char short int long long long float double
//	//Ϊ�˼�����Դ�˷�
//	printf("%d\n", sizeof(char));//����char�Ĵ�С 1(�ֽ�)
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4(32). 8(64)
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	system("pause");
//
//}
//int a = 20;//ȫ�ֱ���(�������)
////�����-{}
//int main()
//{
//	int age = 20;//4/ 
//	float weight = 55.5;//�ֲ�����(�������)
//	//�ֲ�����
//	double num = 0.0;
//	//����-����
//}
//int main()
//{
//	printf("hehe\n");
//	printf("%s\n", "hehe");
//	printf("%c%c%c%c\n", 'h', 'e', 'h', 'e');
//	system("pause");
//	return 0;
//}

