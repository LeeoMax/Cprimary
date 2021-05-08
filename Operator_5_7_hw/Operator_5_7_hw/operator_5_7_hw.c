#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//求两个数二进制中不同位的个数
//编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
//输入例子 :
//1999 2299
//输出例子 : 7

//方法一
//int FindDiff(int a, int b)
//{
//	int t = 0;
//	int count = 0;
//	t = a ^ b;
//	while (t)
//	{
//		if (t % 2 == 1)
//			count++;
//		t = t / 2;
//	}
//	return count;
//}

//方法二
//int FindDiff(int a, int b)
//{
//	int t = 0;
//	int count = 0;
//	int i = 0;
//	t = a ^ b;
//	for (i = 0; i < 32; i++)
//	{
//		if (((t >> i) & 1) == 1)
//			count++;
//	}
//
//	return count;
//}


//方法三
//int FindDiff(int a, int b)
//{
//	int t = 0;
//	int count = 0;
//	t = a ^ b;
//	while (t)
//	{
//		t = t & (t - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int ret = 0;
//	printf("请输入两个整数，求两个数二进制中不同位的个数:>");
//	scanf("%d%d", &m, &n);
//	ret = FindDiff(m, n);
//	printf("整数%d和%d的二进制表达式中，有%d个位不同\n", m, n, ret);
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------------

//打印整数二进制的奇数位和偶数位
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列

//void Print(int num)
//{
//	int i = 0;
//	int j = 0;
//	printf("%d的二进制序列中所有的奇数位为:\n", num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ",(num >> i) & 1);
//	}
//	printf("\n");
//	printf("%d的二进制序列中所有的偶数位为:\n", num);
//	for (j = 31; j >= 1; j -= 2)
//	{
//		printf("%d ",(num >> j) & 1);
//	}
//
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个整数,打印整数二进制的奇数位和偶数位:>");
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------------

//统计二进制中1的个数
//写一个函数返回参数二进制中 1 的个数。
//比如： 15    0000 1111    4 个 1
//方法一
//int FindOne(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//			count++;
//		a = a / 2;
//	}
//	return count;
//}

//方法二
//int FindOne(int a)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}


//方法三
//int FindOne(int a)
//{
//	int count = 0;
//	while (a)
//	{
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int num = 0;
//	int ret = 0;
//	printf("请输入一个整数，求这个数二进制中1的个数:>");
//	scanf("%d", &num);
//	ret = FindOne(num);
//	printf("整数%d的二进制表达式中有%d个1\n", num, ret);
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------------

//交换两个变量（不创建临时变量）
//不允许创建临时变量，交换两个整数的内容

//会溢出
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数:>");
//	scanf("%d%d", &a, &b);
//	printf("交换前:a=%d,b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("交换后:a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("请输入两个整数:>");
//	scanf("%d%d", &a, &b);
//	printf("交换前:a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后:a=%d,b=%d\n", a, b);
//	return 0;
//}

void Exchange(int* a, int* b)
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}

int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个整数:>");
	scanf("%d%d", &a, &b);
	printf("交换前:a=%d,b=%d\n", a, b);
	Exchange(&a,&b);
	printf("交换后:a=%d,b=%d\n", a, b);
	return 0;
}

