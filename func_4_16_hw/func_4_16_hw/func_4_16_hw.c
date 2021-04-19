#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////实现函数判断year是不是闰年
////is_leap_year
////如果判断是闰年返回1
////不是闰年，返回0
////什么是闰年？
////1、能被4整除，但不能被100整除；
////2、能被400整除；
//
//int is_leap_year(year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	printf("请输入要判断的年份:>");
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret == 1)
//	{
//		printf("%d是闰年!", year);
//	}
//	else
//	{
//		printf("%d不是闰年!", year);
//	}
//	return 0;
//}
//--------------------------------------------------------------------------
//int is_leap_year(year)
//{
//	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	
//	for (year = 1000; year <= 2000; year++)
//	{
//		if(is_leap_year(year)==1)
//			printf("%d ", year);
//	}
//	return 0;
//}
//--------------------------------------------------------------------------
//实现一个函数来交换两个整数的内容。
//void swap_num(int* a, int* b)
//{
//	int t = 0;
//	t = *a;
//	*a = *b;
//	*b = t;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入需要交换的两个整数:>");
//	scanf("%d %d", &a, &b);
//	swap_num(&a, &b);
//	printf("交换后的两个整数为:>%d %d",a,b);
//	return 0;
//}
//--------------------------------------------------------------------------

//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表

//int main()
//{
//	int i = 1;
//	int n = 0;
//	printf("请输入想打印的乘法口诀表行数:>");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void Mul_table(int n)
//{
//	int i = 1;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 1;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入想打印的乘法口诀表行数:>");
//	scanf("%d", &n);
//	Mul_table(n);
//	return 0;
//}

