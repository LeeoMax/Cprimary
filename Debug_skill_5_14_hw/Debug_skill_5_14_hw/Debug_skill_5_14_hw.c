#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}

//��������ż��˳��
//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿��

//����һ
//void odd_even_sort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] % 2 == 0 && arr[j + 1] % 2 == 1)
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}


//������
//void odd_even_sort(int* arr, int sz)
//{
//	int* left = arr;
//	int* right = arr + sz - 1;
//	while (left < right)
//	{
//		if ((*left) % 2 == 0 && (*right) % 2 == 1)
//		{
//			int tmp = *left;
//			*left = *right;
//			*right = tmp;
//			left++;
//			right--;
//		}
//		else if ((*left) % 2 == 1 && (*right) % 2 == 1)
//		{
//			left++;
//		}
//		else if ((*left) % 2 == 0 && (*right) % 2 == 0)
//		{
//			right--;
//		}
//		else
//		{
//			left++;
//			right--;
//		}
//	}
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	printf("������һ������10��������������:>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	odd_even_sort(arr,sz);
//	printf("��������������Ϊ:>");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//} 
