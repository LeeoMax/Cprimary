#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//递归方式实现打印一个整数的每一位

//void print_num(unsigned int num)
//{
//	if (num > 9)
//	{
//		print_num(num / 10);
//	}
//	printf("%d ", num % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("请输入一个无符号的整数:>");
//	scanf("%u", &num);
//	print_num(num);
//	return 0;
//}
//--------------------------------------------------------------------------

//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
//非递归方式
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int n = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d的阶乘是%d", n, sum);
//	return 0;
//}


//递归方式
//int Factorial_func(int n)
//{
//	if (n <= 1)
//		return 1;
//	else 
//		return n * Factorial_func(n - 1);	
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int sum = 1;
//	printf("请输入一个数:>");
//	scanf("%d", &n);
//	sum=Factorial_func(n);
//	printf("%d的阶乘是%d", n, sum);
//	return 0;
//}
//--------------------------------------------------------------------------

//递归和非递归分别实现strlen
//非递归方式
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{	
//		count++;
//		str++;
//	}
//	return count;
//
//}
//int main()
//{
//	char str[] = "helloworld";
//	int ret=my_strlen(str);
//	printf("字符串的长度为%d个字符", ret);
//	return 0;
//}
//递归方式
//int my_strlen(char* str)
//{	
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char str[] = "helloworld";
//	int ret=my_strlen(str);
//	printf("字符串的长度为%d个字符", ret);
//	return 0;
//}
//--------------------------------------------------------------------------

/*编写一个函数 reverse_string(char* string)（递归实现）
实现：将参数字符串中的字符反向排列，不是逆序打印。
要求：不能使用C函数库中的字符串操作函数。
比如 :
char arr[] = "abcdef";
逆序之后数组的内容变成：fedcba*/


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{	
//		count++;
//		str++;
//	}
//	return count;
//
//}
//void reverse_string(char str[])
//{
//	int left = 0;
//	int right = my_strlen(str) - 1;
//	while (left < right)
//	{
//		int t = str[left];
//		str[left] = str[right];
//		str[right] = t;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//    char str[] = "abcdef";
//    reverse_string(str);
//    printf("%s\n", str);
//    return 0;
//}

//abcdef
//交换a和f，然后逆序bcde
//1.先把a取出来放在一个变量中
//2.再把f取出来放在a原来的位置上
//3.然后在f的位置上手动放一个\0
//4.逆序bcde（递归条件：字符串长度等于0或者1的时候就不用再逆序了）
//5.最后把a放在3中\0的位置
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//void reverse_string(char* string)
//{
//	int len = my_strlen(string);
//	char t = string[0];
//	string[0] = string[len - 1];
//	string[len - 1] = '\0';
//	if(my_strlen(string+1)>=2)
//	reverse_string(string + 1);
//	string[len - 1] = t;
//
//}
//int main()
//{
//	char string[] = "abcdef";
//	reverse_string(string);
//	printf("逆序后的字符串是:%s", string);
//	return 0;
//}
//--------------------------------------------------------------------------

//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19

//int DigitSum(unsigned int num)
//{
//	if (num > 9)
//		return DigitSum(num / 10) + (num % 10);
//	else
//		return num;
//}
//int main()
//{
//	unsigned int num = 0;
//	printf("请输入一个非负整数:");
//	scanf("%u", &num);
//	int sum = DigitSum(num);
//	printf("输出:%d", sum);
//	return 0;
//}
//--------------------------------------------------------------------------

//编写一个函数实现n的k次方，使用递归实现
//n^k=n*n^(k-1)
//double exponent(int n, int k)
//{
//	if (k < 0)
//		return 1.0 / exponent(n, -k);
//	else if (k == 0)
//		return 1;
//	else
//		return n * exponent(n, k-1);
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入底数:>");
//	scanf("%d", &n);
//	printf("请输入指数:>");
//	scanf("%d", &k);
//	double ret=exponent(n, k);
//	printf("%d的%d次方是%lf",n,k,ret);
//	return 0;
//}
//--------------------------------------------------------------------------

//递归和非递归分别实现求第n个斐波那契数
//例如：
//输入：5  输出：5
//输入：10， 输出：55
//输入：2， 输出：1
//1、1、2、3、5、8、13、21、34、55
//非递归方式
//int Fib(int input)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (input > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		input--;
//	}
//	return c;
//}
//int main()
//{
//	int input = 0;
//	printf("输入:");
//	scanf("%d", &input);
//	int ret = Fib(input);
//    printf("输出:%d", ret);
//	return 0;
//}

//递归方式
int Fib(int input)
{
	if (input <= 2)
		return 1;
	else
		return Fib(input - 1) + Fib(input - 2);
}
int main()
{
	int input = 0;
	printf("输入:");
	scanf("%d", &input);
	int ret = Fib(input);
	printf("输出:%d", ret);
	return 0;
}