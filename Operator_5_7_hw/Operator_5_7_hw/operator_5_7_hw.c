#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//���������������в�ͬλ�ĸ���
//���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//�������� :
//1999 2299
//������� : 7

//����һ
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

//������
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


//������
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
//	printf("�������������������������������в�ͬλ�ĸ���:>");
//	scanf("%d%d", &m, &n);
//	ret = FindDiff(m, n);
//	printf("����%d��%d�Ķ����Ʊ��ʽ�У���%d��λ��ͬ\n", m, n, ret);
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------------

//��ӡ���������Ƶ�����λ��ż��λ
//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������

//void Print(int num)
//{
//	int i = 0;
//	int j = 0;
//	printf("%d�Ķ��������������е�����λΪ:\n", num);
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ",(num >> i) & 1);
//	}
//	printf("\n");
//	printf("%d�Ķ��������������е�ż��λΪ:\n", num);
//	for (j = 31; j >= 1; j -= 2)
//	{
//		printf("%d ",(num >> j) & 1);
//	}
//
//}
//int main()
//{
//	int num = 0;
//	printf("������һ������,��ӡ���������Ƶ�����λ��ż��λ:>");
//	scanf("%d", &num);
//	Print(num);
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------------

//ͳ�ƶ�������1�ĸ���
//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1
//����һ
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

//������
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


//������
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
//	printf("������һ�����������������������1�ĸ���:>");
//	scanf("%d", &num);
//	ret = FindOne(num);
//	printf("����%d�Ķ����Ʊ��ʽ����%d��1\n", num, ret);
//	return 0;
//}

//----------------------------------------------------------------------------------------------------------------------

//����������������������ʱ������
//����������ʱ������������������������

//�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������:>");
//	scanf("%d%d", &a, &b);
//	printf("����ǰ:a=%d,b=%d\n", a, b);
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("������:a=%d,b=%d\n", a, b);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������:>");
//	scanf("%d%d", &a, &b);
//	printf("����ǰ:a=%d,b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������:a=%d,b=%d\n", a, b);
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
	printf("��������������:>");
	scanf("%d%d", &a, &b);
	printf("����ǰ:a=%d,b=%d\n", a, b);
	Exchange(&a,&b);
	printf("������:a=%d,b=%d\n", a, b);
	return 0;
}

