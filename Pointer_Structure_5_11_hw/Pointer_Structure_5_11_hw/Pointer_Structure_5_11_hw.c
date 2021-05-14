#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>
//字符串逆序
//写一个函数，可以逆序一个字符串的内容。

//方法一
//void reverse(char* arr)
//{
//	char* start = arr;
//	while ((*arr) != '\0')
//	{
//		arr++;
//	}
//	char* end = arr-1;
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//
//}

//方法二
//void reverse(char* arr)
//{
//	char* start = arr;
//	char* end = arr+strlen(arr)-1;
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	char arr[] = "I am a student";
//	printf("逆序前:%s\n", arr);
//	reverse(arr);
//	printf("逆序后:%s\n", arr);
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------

//打印菱形
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入要打印的菱形上半部分的行数:>");
//	scanf("%d", &line);
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//打印空格
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		//打印一行
//		//打印空格
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line - i - 1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//方法二
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入要打印的菱形总行数:>");
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < abs(line / 2 - i); j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < line - 2 * abs(line / 2 - i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//方法三
//int main()
//{
//    char arr[] = "             ";  //定义为空
//
//    int i = 0;
//    int j = 0;
//    //打印上半部分
//    for (i = (int)(strlen(arr) / 2), j = (int)(strlen(arr) / 2); i >= 0 && j <= (int)strlen(arr); i--, j++)
//    {
//        arr[i] = '*';
//        arr[j] = '*';
//        printf("%s\n", arr);
//    }
//    //打印下半部分
//    for (i = 0, j = (int)(strlen(arr) - 1); i < (int)(strlen(arr) / 2) && j > (int)(strlen(arr) / 2); i++, j--)
//    {
//        arr[i] = ' ';
//        arr[j] = ' ';
//        printf("%s\n", arr);
//    }
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------

//喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）

int main()
{
	//int money = 20;//20元钱
	int money = 0;
	printf("请输入钱数:>");
	scanf("%d", &money);
	int empty_bottle = money;//空瓶
	int total = money;//喝汽水数量
	int new_bottle = 1;
	int surplus_bottle = 0;
	while (new_bottle!=0)
	{
		new_bottle = empty_bottle / 2;//上一次的换的新汽水
		surplus_bottle = empty_bottle % 2;//上次换掉剩余的的旧空瓶
		empty_bottle = new_bottle+ surplus_bottle;//当前的空瓶数
		total = total+new_bottle;	
	}
	printf("给%d元，可以喝%d瓶汽水",money,total);

	return 0;
}





