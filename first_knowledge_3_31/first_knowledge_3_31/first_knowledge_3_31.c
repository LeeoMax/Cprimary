#define _CRT_SECURE_NO_WARNINGS 1
//放在代码的第一行

//写代码
//1. 写出主函数（main函数）
//如何执行呢？ - C语言是从主函数的第一行开始执行的
//所以C语言代码中得有main函数-入口

//写个代码，在屏幕上打印：Hello World!
//printf - 库函数 - 在屏幕上打印信息的
//printf 的使用，也得打招呼（引用头文件 stdio.h）

//
//#include <stdio.h>
//
//int main()
//{
//	printf("Hello World!\n");
//
//	return 0;
//}
//
////
////编译+链接+运行代码
////快捷键：1. ctrl+f5
////        2. fn+ctrl+f5
////        3. 菜单中：【调试】->【开始执行不调试】


//数据类型
//计算机语言 - 写程序 -  解决生活中问题
//必须有能力来描述生活中问题！
//购物商城 - 上架商品，价格 - 15.6元 - 小数  1.56*10^1（浮点型）
//年龄 - 50（整型）



//'a' - 字符a
//int main()
//{
//	//字符类型
//	char ch = 'a';
//	//整型
//	int age = 20;
//	//短整型
//	short num = 10;
//	//long 
//	//long long
//
//	//单精度浮点型
//	float weight = 55.5;
//	//双精度浮点型
//	double d = 0.0;
//
//	return 0;
//}


//int main()
//{
//	//sizeof - 关键字 - 操作符 - 计算类型或者变量所占空间的大小
//
//	printf("%d\n", sizeof(char));//1
//	printf("%d\n", sizeof(short));//2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//
//	return 0;
//}
////C语言标准：sizeof(long)>=sizeof(int)
//int main()
//{
//	//创建的一个变量
//	//类型    变量的名字 = 0;//推荐
//	//类型  变量的名字;//不推荐
//
//	int age = 20;
//	double weight = 75.3;
//
//	age = age+1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%lf\n", weight);
//
//	return 0;
//}
////说明
//1.如果输出的整数%d
//2.如果输出的是单精度(float)小数%f，如果输出的是双精度(double)小数%lf，如果希望保留小数点%2f
//3.如果输出的是字符%c
//4.如果输出的是字符串%s
//5.如果输出的是地址%p
//6.在输出不同数据时，对应的格式化的形式要对应起来
//

//全局变量 - {}外部定义的
//int a = 100;
//
//int main()
//{
//	//局部变量 - {}内部定义的
//	//当局部变量和全局变量名字冲突的情况下，局部优先
//	//不建议：把全局变量和局部变量的名字写成一样的
//	//
//	int a = 10;
//
//	printf("%d\n", a);
//
//	return 0;
//}


//写一个代码求2个整数的和
//scanf函数是输入函数

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("sum = %d\n", sum);
//	return 0;
//}