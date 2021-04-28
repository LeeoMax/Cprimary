#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////实现一个对整形数组的冒泡排序
////冒泡排序升序
//void Bubble_sort(int arr[], int sz)
//{
//	//确定趟数，n个元素，n-1趟
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//确定一趟要比较多少对数
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
//		if (flag == 1)//一趟进去没有交换，证明是有序的，直接跳出
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
//	printf("冒泡排序前的数组:>");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	//冒泡排序--升序
//	Bubble_sort(arr, sz);
//	printf("冒泡排序后的数组:>");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


////创建一个整形数组，完成对数组的操作
////实现函数init() 初始化数组为全0
////实现print()  打印数组的每个元素
////实现reverse()  函数完成数组元素的逆置。
////要求：自己设计以上函数的参数，返回值
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
//	printf("原数组:>");
//	print(arr, sz);
//	printf("\n");
//
//	reverse(arr, sz);
//	printf("逆置后的数组:>");
//	print(arr, sz);
//	printf("\n");
//	
//	init(arr, sz);
//	printf("初始化后的数组:>");
//	print(arr, sz);
//	printf("\n");
//
//	return 0;
//}

//将数组A中的内容和数组B中的内容进行交换。（数组一样大）
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
	
	printf("交换前的数组A:>");
	print(arrA, sz);
	printf("\n");
	printf("交换前的数组B:>");
	print(arrB, sz);
	printf("\n");
	Swap_array(arrA, arrB, sz);
	printf("交换后的数组A:>");
	print(arrA, sz);
	printf("\n");
	printf("交换后的数组B:>");
	print(arrB, sz);
	printf("\n");
	return 0;
}