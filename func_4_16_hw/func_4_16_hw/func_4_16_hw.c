#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
////ʵ�ֺ����ж�year�ǲ�������
////is_leap_year
////����ж������귵��1
////�������꣬����0
////ʲô�����ꣿ
////1���ܱ�4�����������ܱ�100������
////2���ܱ�400������
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
//	printf("������Ҫ�жϵ����:>");
//	scanf("%d", &year);
//	int ret = is_leap_year(year);
//	if (ret == 1)
//	{
//		printf("%d������!", year);
//	}
//	else
//	{
//		printf("%d��������!", year);
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
//ʵ��һ�������������������������ݡ�
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
//	printf("��������Ҫ��������������:>");
//	scanf("%d %d", &a, &b);
//	swap_num(&a, &b);
//	printf("���������������Ϊ:>%d %d",a,b);
//	return 0;
//}
//--------------------------------------------------------------------------

//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���

//int main()
//{
//	int i = 1;
//	int n = 0;
//	printf("���������ӡ�ĳ˷��ھ�������:>");
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
//	printf("���������ӡ�ĳ˷��ھ�������:>");
//	scanf("%d", &n);
//	Mul_table(n);
//	return 0;
//}

