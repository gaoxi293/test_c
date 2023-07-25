#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	// 字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef"; //p2中存的是a的地址 常量字符串最好加上const
//	// 指针数组 - 数组 - 存放指针的数组
//	int* arr[10];
//	char* ch[5];
//	// 数组指针 - 指向数组的指针
//	int* p3; // 整型指针 - 指向整型的指针
//	char* p4;// 字符指针 - 指向字符的指针
//	int arr2[5]; // 数组
//	int (*pa)[5] = &arr2; // 存放数组的地址 ,pa就是一个数组指针
//	return 0;
//}

// ***************************** 数组传参和指针传参 ***************************
// 一维数组传参的几种方式
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int arr)
//{}
//void test2(int* arr[20])
//{}
//void test2(int** arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//}

// 二维数组传参的几种方式
//void test(int arr[3][5])
//{}
//void test1(int arr[][5]) // 行可以省略，列不可以
//{}
//void test2(int *arr) // 是错误的，二维数组的首元素地址是第一行的地址
//{}
//void test3(int* arr[5]) // 是错误的，arr先和[5]结合，是一个数组，数组的每个元素是int类型
//{}
//void test4(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr);
//	return 0;
//}

//  函数的参数为一级指针的时候，函数能接收到什么参数
//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1); // 这两种传参方式都是可以的
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);// 传参方式都是正确的
//
//	return 0;
//}

// 函数参数部分为二级指针
//void test(int** p)
//{}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);	
//	test(pp);
//
//	int* arr[10];
//	test(arr);
//	return 0;
//}

// **********************************函数指针
// 数组指针 - 是指向数组的指针
// 函数指针 - 是指向函数的指针 - 存放函数地址的一个指针

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	// 数组指针
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;
//	//printf("%d\n", Add(a,b));
//	/*
//	// &函数名 和 函数名 都是函数的地址
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	*/
//	// 函数指针
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3)); // 调用一下
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;
//	(*p)("hello bit");
//	return 0;
//}

// 以下两个代码
/*
(*(void (*)())0) (); 把 0 强制转换成 void(*)() 函数指针类型，参数为空 - 0就是一个函数的地址，调用该函数

void (*signal(int,void(*)(int)) )(int)
void (*              )(int) 是一个函数指针 中间空的部分就是函数名
signal(int,void(*)(int)) 函数的参数有2个，第一个是int，第二个是函数指针
signal函数的返回类型也是一个函数指针，该函数指针指向的函数的参数是int

*/
