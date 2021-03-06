#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//作用域和生命周期

//作用域：变量在哪里可以使用，哪里就是它的作用域
//局部变量的作用域：就是变量所在的局部范围
//int main()
//{
//	int a = 0;
//	printf("a = %d\n", a);
//	return 0;
//}
//--------------------------------------------------------------------------

//局部变量的作用域：就是变量所在的局部范围

//int main()
//{
//	//局部变量a的作用域在大括号内部
//	//printf("1.a = %d\n", a); 
//	{
//		int a = 0;
//	}
//	//printf("2.a = %d\n", a);
//	return 0;
//}
//--------------------------------------------------------------------------

//全局变量的作用域：整个工程
//int g_val = 2021;//全局变量
//
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hehe\n");
//	{
//		printf("2:%d\n", g_val);
//
//		int a = 10;
//		printf("a = %d\n", a);
//	}
//	printf("3:%d\n", g_val);
//
//	return 0;
//}
//--------------------------------------------------------------------------

////全局变量的作用域：整个工程
//
////在使用另外一个源文件中的全局变量时，要先声明一下变量
//extern int g_val;
//
//int main()
//{
//	printf("%d\n", g_val);
//
//	return 0;
//}
//--------------------------------------------------------------------------

//生命周期
//变量的生命周期：变量的创建和销毁之间的时间段
//局部变量的生命周期：进入局部范围生命开始，出局部范围生命结束
//全局变量的生命周期：程序的生命周期
//一个程序的生命周期就是main函数的生命周期，全局变量在整个main函数中都可以使用
//int main()
//{
//	{//生命周期开始
//		int a = 10;
//		printf("%d\n", a);
//	}//生命周期结束
//	// printf("%d\n", a);//err变量a的生命周期已经结束，不能再使用了
//	return 0;
//}
//--------------------------------------------------------------------------

//int main()
//{
//	///1. 字面常量
//	3.14;
//	10;
//	'a';
//	"abcdef";
//
//	return 0;
//}
//--------------------------------------------------------------------------

//int main()
//{
//
//	//	const修饰的常变量，本质还是个变量，只不过具有了常属性而已
//	const int num = 10;//num就是常变量 - 具有常属性（不能被改变的属性）
//	num = 20;//err
//	printf("num = %d\n", num);
//	return 0;
//}
//--------------------------------------------------------------------------

//int main()
//{
//	int arr[10] = { 0 };//10个元素
//	int n = 10;
//	int arr2[n] = { 0 };//n是变量的，这里是不行
//	return 0;
//
//}
//--------------------------------------------------------------------------

//#define MAX 10000
//int main()
//{
//	//#define 定义的标识符常量
//	//MAX = 20000;//err 因为是常量，所以无法修改
//	int n = MAX;
//	printf("n = %d\n", n);//10000
//	return 0;
//}
//--------------------------------------------------------------------------

////性别
//enum Sex //枚举类型
//{
//	//这种枚举类型的变量的未来可能取值
//	//枚举常量
//	MALE,//MALE=3赋初值
//	FEMALE
//};
//
//int main()
//{
//	//枚举常量
//	//可以一一列举的常量
//
//	enum Sex s = MALE;
//	//MALE = 3;//err
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	return 0;
//}
//--------------------------------------------------------------------------

//字符串就是一串字符 - 用双引号括起来的一串字符

//int main()
//{
//	"abcdef";
//	"hello world";
//	return 0;
//}
//--------------------------------------------------------------------------
//int main()
//{
//	//字符数组 - 数组是一组形同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//	char arr[] = "hello";//按f10进行调试
//	return 0;
//}
//--------------------------------------------------------------------------

//int main()
//{
//	//字符数组 - 数组是一组形同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	//打印字符串
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//--------------------------------------------------------------------------

//int main()
//{
//	//字符数组 - 数组是一组形同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c', '\0' };
//	//打印字符串
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);//abc
//	return 0;
//}
//--------------------------------------------------------------------------

//int main()
//{
//	//字符数组 - 数组是一组形同类型的元素
//	//字符串在结尾的位置隐藏了一个\0的字符
//	//\0是字符串的结束标志
//
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	//求一下字符串的长度strlen-string length，头文件<string.h>
//	printf("%d\n", strlen(arr1));//3
//	printf("%d\n", strlen(arr2));//随机值
//	return 0;
//}
//--------------------------------------------------------------------------

//转义字符
//int main()
//{
//	printf("c:\test\test.c");
//	return 0;
//}
//--------------------------------------------------------------------------

//int main()
//{
//	printf("ab\ncd");
//	return 0;
//}
//--------------------------------------------------------------------------


//int main()
//{
//	printf("(are you ok??)");//??) -- ] - 三字母词
//	//(are you ok]
//	return 0;
//}
//在比较老的编译器下可以测试出来，？？）会被解析成 ]，
//如果想要打印输出(are you ok??)，代码要写成
//printf("(are you ok\?\?)");
//--------------------------------------------------------------------------

//int main()
//{
//	printf("%c\n", '\'');
//	//不加\，前面两个单引号会被默认为是一对单引号，第三个单引号就落单了，希望只是一个普通的单引号，不是一对单引号中的一个单引号，
//	//加上\，让它转义，这个时候这个单引号就是一个普普通通的字符了
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("c:\\test\\test.c");
//	printf("\a");
//	//printf在打印数据的时候，可以指定打印的格式
//	return 0;
//}
//--------------------------------------------------------------------------

//int main()
//{
//	//printf("%c\n", '\130');//8进制的130是十进制的多少呢？ 1*8^2+3*8^1+0*8^0=64+24=88
//	//X   -- ASCII码值是88
//	//printf("%c\n", '\101');//A - 65 - 8进制是：101 把这个八进制数转换成十进制数，以这个十进制数为ASCII码值，代表的那个字符
//	//printf("%c\n", '\x30');//48 - '0'
//	//printf("%d\n", strlen("abc"));//3
//	//printf("%d\n", strlen("c:\test\328\test.c"));
//	return 0;
//}
//--------------------------------------------------------------------------

////注释: 是用来解释复杂代码的
//
//int main()
//{
//	//int a = 10; //C++注释风格
//	/*
//	 int b = 0;
//	*/
//	//C语言的注释风格 - 不支持嵌套注释
//
//	return 0;
//}
//--------------------------------------------------------------------------

//选择语句
//int main()
//{
//	int input = 0;//输入的值
//
//	printf("你要好好学习吗(1/0)?>:");
//	scanf("%d", &input);
//
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖红薯\n");
//	}
//	return 0;
//}
//--------------------------------------------------------------------------
 //循环语句
//int main()
//{
//	int line = 0;
//	//循环
//	while (line < 30000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("好offer\n");
//	}
//
//	return 0;
//}
//--------------------------------------------------------------------------

////函数
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//	//int sum = num1 + num2;
//	//函数的方式解决
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//--------------------------------------------------------------------------

//数组
//int main()
//{
//
//	//数组 - 一组相同类型的元素的集合
//	//10个整形1-10存起来
//	//数组是用下标来访问的
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	//char ch[5] = {'a', 'b', 'c'};//不完全初始化，剩余的默认为0
//	return 0;
//}
//--------------------------------------------------------------------------

//操作符
//算术操作符
//int main()
//{
//	int a = 9 / 2;
//	//	float a = 9 / 2.0;
//	//	int a = 9 % 2;//% - 取模（余）
//	printf("%d\n", a);
//	return 0;
//}
//--------------------------------------------------------------------------

//移位操作符
//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("%d\n", b);
//	return 0;
//}
//--------------------------------------------------------------------------

//赋值操作符
//int main()
//{
//	int a = 2;
//	a = a + 5;
//	//	a = 6;
//	//	a += 5;
//	//
//	//	a = a - 3;
//	//	a -= 3;
//	//
//	//	a = a % 3;
//	//	a %= 3;
//	//
//	printf("%d\n", a);
//	return 0;
//}
//--------------------------------------------------------------------------

////单目操作符
//int main()
//{
//	//0 表示假，非0就是真
//	int a = 0;
//	printf("%d\n", !a);//1
//
////	if (a)
////	{
////		//如果a为真，做事
////	}
////	if (!a)
////	{
////		//如果a为假，做事
////	}
//
//	return 0;
//}
//--------------------------------------------------------------------------

//int main()
//{
//	//sizeof是一个操作符
//   //不是函数
//   //计算类型或者变量的大小的
//	int a = 10;
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(a));//4
//
//	return 0;
//}
//--------------------------------------------------------------------------

//int main()
//{
//	//10*4 = 40 
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(arr));//40,计算的是数组的总大小，单位是字节
//	printf("%d\n", sizeof(arr[0]));//4
//	int sz = sizeof(arr) / sizeof(arr[0]);//10，数组元素个数
//	printf("%d\n", sz);
//
//	return 0;
//}
//--------------------------------------------------------------------------


