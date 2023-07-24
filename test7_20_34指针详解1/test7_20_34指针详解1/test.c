#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);// 64位指针是8个字节，除以int类型的元素大小
//	printf("%d\n",sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

// **************************字符指针
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr); // %s打印直到找到\0为止
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef"; // p 里面存放的是a的地址    "abcdef"是一个常量字符串
//	// 常量字符串正确的写法是加上一个const
//	//const char* p = "abcdef";
//	*p = 'w'; // 常量字符串不能被修改，会报错
//	//printf("%c\n", *p); // 打印出来 a
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abdcef";
//	char arr2[] = "abdcef";
//	char* p1 = "abcdef";// 常量字符串  最准确的写法是加上const
//	char* p2 = "abcdef";
//	if (arr1 == arr2) // 不等
//	{
//		printf("hhhhe\n");
//	}
//	else
//	{
//		printf("hhhha\n");
//	}
//	if (p1 == p2) // 相等
//	{
//		printf("hhhhe\n");
//	}
//	else
//	{
//		printf("hhhha\n");
//	}
//	return 0;
//}

// ********************指针数组
//int main()
//{
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组 指针数组
//	char* pch[5];//存放字符指针的数组 指针数组
//	return 0;
//}
//  错误用法
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

// 正确用法
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", * (parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

// ************************* 数组指针  是指针
//int main()
//{
//	int* p = NULL; // p是整型指针 - 指向整型的指针 - 可以存放整型的地址
//	char* pc = NULL;// pc是字符指针 - 指向字符的指针 - 可以存放字符的地址
//	// 数组指针 - 指向数组的指针 - 存放数组的地址
//	// arr - 首元素地址
//	// &arr[0] - 首元素的地址
//	// &arr - 数组的地址
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10] = &arr; //p就是数组指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	// pa是指针变量的名字  *pa说明pa是一个指针 [5]说明pa指向的数组是5个元素的
//	// char*说明pa指向的数组的元素类型是char*
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int (* pa)[10] = &arr;
	//int i = 0;
	////1.
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", (*pa)[i]);
	//}
	////2.
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(*pa+i)); // *pa == arr
	//}
	
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ",*(p+i));
	//}
	//return 0;
//}

// 参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//// 参数是指针的形式
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			// 4种打印方式等价
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", *(p[i]+j));
//			printf("%d ", (*(p+i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6 },{3,4,5,6,7} }; // 数组的首元素其实是第一行
//	print1(arr,3,5);// arr数组名就是首元素地址
//	print2(arr,3,5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p+i));
//		printf("%d ", *(arr+i));
//		printf("%d ", arr[i]); // arr[i] == *(arr+i) == *(p+i) == p[i]
//	}
//	return 0;
//}

/*
int arr[5];			arr 是一个5个元素的整型数组
int *parr1[10];		parr1 是一个数组，数组有10个元素，每个元素的类型是 int*，parr1是指针数组
int (*parr2)[10];	parr2 是一个指针，该指针指向了一个数组，数组有10个元素，每个元素的类型是int，parr2是数组指针
int (*parr3[10])[5];
parr3和 * [] 都结合，但是和[]结合度高，所以parr3是一个数组。
parr3[10]明确了数组名和元素个数，剩下的就是元素类型
比如： int arr[10] arr为数组名，[10]为元素个数，剩下就是元素类型int
同理 int (*parr3[10])[5]中，int (* )[5]就是元素类型 与第三个 int (*parr2)[10]相似
parr3 是一个数组 该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int
*/