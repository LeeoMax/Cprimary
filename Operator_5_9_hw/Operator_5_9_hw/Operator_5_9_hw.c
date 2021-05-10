#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222

//int main()
//{
//	int num = 0;
//	int i = 0;
//	int t = 0;
//	int sum = 0;
//	printf("请输入一个数字:>");
//	scanf("%d", &num);
//	for (i = 0; i < 5; i++)
//	{
//		t = t * 10 + num;
//		sum = sum + t;
//	}
//	printf("前5项之和为:>%d\n", sum);
//	return 0;
//
//}

//----------------------------------------------------------------------------------------------------------------------
//使用指针打印数组内容
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr[%d] = %d\n", i, *(p + i));
//	}
//	return 0;
//
//}

//----------------------------------------------------------------------------------------------------------------------

//打印水仙花数
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如: 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//1.给定一个数, 求该数是几位数
//2.获取该数每个位置上的数字
//3.利用pow函数进行次方运算，并求和
//4.若求和结果与该数本身相等，则为水仙花数，否则，不是水仙花数


//计算整数位数
int CountNum(int num)
{
	int count = 0;
	while (num > 0)
	{
		num = num / 10;
		count++;
	}
	return count;
}


//判断是否是水仙花，若是返回1，不是返回0
int Is_daffodil(int num,int ret)
{
    int sum = 0;
	int tmp = num;
	while (num)
	{
		sum = sum+pow((num % 10), ret);
		num = num / 10;
	}
	if (sum == tmp)
	{
		return 1;
	}
	else
	{
		return 0;
	}


}
int main()
{
	int i = 0;
	printf("0～100000之间的所有“水仙花数”为:>");
	for (i = 1; i < 100000; i++)
	{
		int ret = CountNum(i);
		if (Is_daffodil(i, ret))
		{
			printf("%d ", i);
		}
	}
	return 0;
}

