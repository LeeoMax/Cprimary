#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ

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
//	printf("������һ���޷��ŵ�����:>");
//	scanf("%u", &num);
//	print_num(num);
//	return 0;
//}
//--------------------------------------------------------------------------

//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩
//�ǵݹ鷽ʽ
//int main()
//{
//	int i = 0;
//	int sum = 1;
//	int n = 0;
//	printf("������һ����:>");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum = sum * i;
//	}
//	printf("%d�Ľ׳���%d", n, sum);
//	return 0;
//}


//�ݹ鷽ʽ
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
//	printf("������һ����:>");
//	scanf("%d", &n);
//	sum=Factorial_func(n);
//	printf("%d�Ľ׳���%d", n, sum);
//	return 0;
//}
//--------------------------------------------------------------------------

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//�ǵݹ鷽ʽ
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
//	printf("�ַ����ĳ���Ϊ%d���ַ�", ret);
//	return 0;
//}
//�ݹ鷽ʽ
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
//	printf("�ַ����ĳ���Ϊ%d���ַ�", ret);
//	return 0;
//}
//--------------------------------------------------------------------------

/*��дһ������ reverse_string(char* string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������У����������ӡ��
Ҫ�󣺲���ʹ��C�������е��ַ�������������
���� :
char arr[] = "abcdef";
����֮����������ݱ�ɣ�fedcba*/


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
//����a��f��Ȼ������bcde
//1.�Ȱ�aȡ��������һ��������
//2.�ٰ�fȡ��������aԭ����λ����
//3.Ȼ����f��λ�����ֶ���һ��\0
//4.����bcde���ݹ��������ַ������ȵ���0����1��ʱ��Ͳ����������ˣ�
//5.����a����3��\0��λ��
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
//	printf("�������ַ�����:%s", string);
//	return 0;
//}
//--------------------------------------------------------------------------

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

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
//	printf("������һ���Ǹ�����:");
//	scanf("%u", &num);
//	int sum = DigitSum(num);
//	printf("���:%d", sum);
//	return 0;
//}
//--------------------------------------------------------------------------

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
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
//	printf("���������:>");
//	scanf("%d", &n);
//	printf("������ָ��:>");
//	scanf("%d", &k);
//	double ret=exponent(n, k);
//	printf("%d��%d�η���%lf",n,k,ret);
//	return 0;
//}
//--------------------------------------------------------------------------

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������
//���磺
//���룺5  �����5
//���룺10�� �����55
//���룺2�� �����1
//1��1��2��3��5��8��13��21��34��55
//�ǵݹ鷽ʽ
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
//	printf("����:");
//	scanf("%d", &input);
//	int ret = Fib(input);
//    printf("���:%d", ret);
//	return 0;
//}

//�ݹ鷽ʽ
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
	printf("����:");
	scanf("%d", &input);
	int ret = Fib(input);
	printf("���:%d", ret);
	return 0;
}