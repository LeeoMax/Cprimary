#define _CRT_SECURE_NO_WARNINGS 1
//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
#include<stdio.h>
#include<math.h>
//����һ����2��x-1�Գ���������������Ч��Ӧ��������
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

//����������Ϊ���������������������Կɽ����Ż�
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
//��������x����У�������������ģ����������ǿ϶���С�ڵ���x/2�����Դ�2һֱ���Ե�x/2����
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

//�����ģ��������ǳɶԳ��ֵģ�����һ����ȻС�ڵ���x�Ŀ�����
// ��һ����Ȼ���ڵ���x�Ŀ���,
//��ʵֻҪ��2һֱ���Ե�sqrt(x)���Ϳ����ˡ�
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