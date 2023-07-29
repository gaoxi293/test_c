#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	// 指针数组
//	int* arr[10];
//	// 数组指针
//	int* (*pa)[10] = &arr;
//	// 函数指针
//	int (*pAdd)(int,int) = Add;
//	int sum = (*pAdd)(1, 2);
//	int sum = pAdd(1, 2);  // 不带*也是一样可以调用的
//	printf("%d\n", sum);
//	// 函数指针的数组
//	int (*pArr[5])(int, int);
//	// 指向函数指针数组的指针
//	int (*(*pArr)[5])(int, int);
//	return 0;
//}



//void bubble_sort(int arr[], int sz)
//{
//	int i = 0; // 控制趟数
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0; // 控制比较的对数
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//// qsort - 库函数- 排序   qsort长这个样子
////void qsort(
////	void* base,
////	size_t num,
////	size_t width,
////	int(* cmp)(const void* e1, const void* e2)
////);
//cmp_int(const void* e1, const void* e2)
//{
//	 // 比较两个整形值
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	// 比较名字就是比较字符串
//	// 字符串不能用 ><=来比较，应该用strcmp
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20} ,{"lisi",14} ,{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
////	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };  // 现在的函数只能排序整型，不能排序浮点型
//
//	// bubble_sort(arr, sz);
//	// bubble_sort(f, sz);
//	test1();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//
//	char ch = 'w';
//	void* p = &a; // 无类型指针 
//	// void* 可以接收任意类型的地址   不能进行解引用操作 不能进行+-整数的操作
//	p = &ch;
//	return 0;
//}

 // **********************************   qsort第二遍
// 冒泡排序 只能排序
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		// 一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

// ************************ qsort - 库函数 - 排序  quick sort
void qsort(void* base,// base 传入的是起始位置
			size_t num,// 传入数组的大小
			size_t width,// 元素的大小 单位为字节
			int(* cmp)(const void* e1, const void* e2) // 比较函数
); // cmp - cpmpare函数规定 e1<e2 返回<0,e1=e2 返回0,e1>e2 返回 >0

struct Stu
{
	char name[20]; 
	int age;
};

// 比较两个整型值
int cmp_int(const void* e1,const void* e2) 
{
	return *(int*)e1 -  *(int*)e2;
}
// qsort 排序 arr,  第四个位置的参数我们要写一个函数传进去
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

// qsort 比较浮点型
int cmp_float(const void* e1, const void* e2)
{
	return *(float*)e1 - *(float*)e2;

	////  上面这样写会有警告，因为return的是float  但是函数返回的是int，可以这样写
	//if (*(float*)e1 == *(float*)e2)
	//	return 0;
	//else if (*(float*)e1 > *(float*)e2)
	//	return 1;
	//else
	//	return -1;
	
	//// 或者将相减之后的结果再强制转换成int
	//return ((int)(*(float*)e1 - *(float*)e2));
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
}

// 比较结构体
int cmp_stu_by_age(const void* e1, const void* e2) // 用年龄来比较
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2) // 用名字来比较
{
	// 比较名字就是比较字符串，字符串比较不能直接用><= 应该用strcmp - str compare函数
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}


// ************************ void*
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	// char* pc = &a;  有警告但是不会报错
//
//	// void* 类型的指针 可以接收任意类型的地址 但是不能解引用 不能进行+-整数操作
//	char ch = 'w';
//	void* p = &a;
//
//	return 0;
//}