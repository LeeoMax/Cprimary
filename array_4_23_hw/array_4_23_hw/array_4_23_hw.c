#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////ʵ��һ�������������ð������
////ð����������
//void Bubble_sort(int arr[], int sz)
//{
//	//ȷ��������n��Ԫ�أ�n-1��
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ȷ��һ��Ҫ�Ƚ϶��ٶ���
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//				flag = 0;
//			}
//		}
//		if (flag == 1)//һ�˽�ȥû�н�����֤��������ģ�ֱ������
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	printf("ð������ǰ������:>");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//ð������--����
//	Bubble_sort(arr, sz);
//	printf("ð������������:>");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////����һ���������飬��ɶ�����Ĳ���
////ʵ�ֺ���init() ��ʼ������Ϊȫ0
////ʵ��print()  ��ӡ�����ÿ��Ԫ��
////ʵ��reverse()  �����������Ԫ�ص����á�
////Ҫ���Լ�������Ϻ����Ĳ���������ֵ
//
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int t = arr[left];
//		arr[left] = arr[right];
//		arr[right] = t;
//		left++;
//		right--;
//	}
//}
//void init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	printf("ԭ����:>");
//	print(arr, sz);
//	printf("\n");
//
//	reverse(arr, sz);
//	printf("���ú������:>");
//	print(arr, sz);
//	printf("\n");
//	
//	init(arr, sz);
//	printf("��ʼ���������:>");
//	print(arr, sz);
//	printf("\n");
//
//	return 0;
//}

//������A�е����ݺ�����B�е����ݽ��н�����������һ����
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
void Swap_array(int arrA[], int arrB[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int t = arrA[i];
		arrA[i] = arrB[i];
		arrB[i] = t;
	}
}
int main()
{
	int arrA[5] = { 1,3,5,7,9 };
	int arrB[5] = { 2,4,6,8,10 };
	int sz = sizeof(arrA) / sizeof(arrA[0]);
	
	printf("����ǰ������A:>");
	print(arrA, sz);
	printf("\n");
	printf("����ǰ������B:>");
	print(arrB, sz);
	printf("\n");
	Swap_array(arrA, arrB, sz);
	printf("�����������A:>");
	print(arrA, sz);
	printf("\n");
	printf("�����������B:>");
	print(arrB, sz);
	printf("\n");
	return 0;
}