#define _CRT_SECURE_NO_WARNINGS 1
//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
#include<stdio.h>
#include<math.h>
//方法一：从2到x-1试除，这种做法，其效率应该是最差的
int Isprime_number(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
		{
			break;
		}
	}
	if (i == j)
	{
		return 1;
	}

}
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		int ret = Isprime_number(i);
		if (ret == 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//方法二：因为所有素数都是奇数，所以可进行优化
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//int Isprime_number(int i)
//{
//	int j = 0;
//	for (j = 2; j < i; j++)
//	{
//		if (i % j == 0)
//		{
//			break;
//		}
//	}
//	if (i == j)
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int ret = Isprime_number(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//方法三：x如果有（除了自身以外的）质因数，那肯定会小于等于x/2，所以从2一直尝试到x/2即可
//int Isprime_number(int i)
//{
//	int j = 0;
//	for (j = 2; j < i/2; j++)
//	{
//		if (i % j == 0)
//		{
//			break;
//		}
//	}
//	if (j==i/2)
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i+=2)
//	{
//		int ret = Isprime_number(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//方法四：因数都是成对出现的，其中一个必然小于等于x的开方，
// 另一个必然大于等于x的开方,
//其实只要从2一直尝试到sqrt(x)，就可以了。
//int Isprime_number(int i)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(i); j++)
//	{
//		if (i % j == 0)
//		{
//			break;
//		}
//	}
//	if (j > sqrt(i))
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 101; i <= 200; i += 2)
//	{
//		int ret = Isprime_number(i);
//		if (ret == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[100] = { 0 };
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 100;
//	}
//	for (i = 0; i < 100; i++)
//	{
//		j = i ;
//		while (j > 1)
//		{
//			if (arr[i] % j == 0)
//				arr[i] = 0;
//			j = j - 1;
//		}
//	}
//	for (j = 1; j < 100; j++)
//	{
//		if (arr[j] != 0)
//		{
//			printf("%d ", arr[j]);
//		}
//	}
//	return 0;
//}