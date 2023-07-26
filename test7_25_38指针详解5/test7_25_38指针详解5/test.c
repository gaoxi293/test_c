#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//char* my_strcpy(char* dest, const char* src);
//// 写一个函数指针pf，能够指向my_strcpy
//char* (*pf)(char*,const char*);
//// 写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char (*pfArr[4])(char*,char*);

// 函数指针数组的应用 -> 计算器
//void menu()
//{
//	printf("**************************\n");
//	printf("*****  1.add   2. sub*****\n");
//	printf("*****  3.mul   4. div*****\n");
//	printf("*****  5.Xor   0. exit****\n");
//	printf("**************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
// 下面这个代码当我们输入0的时候，接下来输入两个操作数才会退出， 逻辑还是有问题
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		printf("请输入两个操作数:>");
//		scanf("%d%d", &x,&y);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，请重新选择/n");
//			break;
//		}
//	} while (input);
//}

// 如果要实现更多的功能，那么case语句有越来越多，这两句代码就会重复的非常多
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("请输入两个操作数:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，请重新选择/n");
//			break;
//		}
//	} while (input);
//}

// 改进代码 如果添加计算器功能 只用在函数指针数组处修改就可以
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	// pfArr 是一个函数转移数组  -  转移表
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入操作数:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//	} while (input);
//}

// 改进代码 使用回调函数 - 就是一个通过函数指针调用的函数。
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("退出\n");
//			break;
//		default:
//			printf("选择错误，请重新选择/n");
//			break;
//		}
//	} while (input);
//}
 
// **************** 指向函数指针数组的指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = {0};
//	int (*p)[10] = &arr; // 取出数组的地址
//
//	int (*pf)(int, int); // pf 是一个函数指针
//	int (*pfArr[4])(int, int); //pfArr是一个数组 - 函数指针的数组
//	int(*(*ppfArr)[4])(int, int) = &pfArr;// ppfArr 是一个数组指针 指针指向的是数组，数组有4个元素，
//	// 指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)
//	return 0;
//}

// 回调函数  print就是一个回调函数
//void print(char* str)
//{
//	printf("hehe:%s",str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

// 当时冒泡排序只能排序整型
// qsort 函数 - 可以排序任意类型的数据
