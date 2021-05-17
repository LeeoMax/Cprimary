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

//调整奇数偶数顺序
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分

//方法一
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


//方法二
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
//	printf("请输入一个包含10个数的整型数组:>");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	odd_even_sort(arr,sz);
//	printf("排序后的整型数组为:>");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//} 
