#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//f5启动调试和f9设置断点配合使用
// Debug是死循环，Release打印十个hehe
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//f9设置断点
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}

// 自动窗口
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

// 调用堆栈
//void test2()
//{
//	printf("呵呵\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	// Debug下 i是高地址，Release下 arr是高地址
//	printf("%p\n",arr);
//	printf("%p\n",&i);
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src; // '\0'
//}
// 优化一下
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
// 加一步判断是否传入的是为空指针
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
// 加断言
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
// 加断言
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
 // 加const,如果dest和src穿反了，会报错
//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//int main()
//{
//	// strcpy
//	// 字符串拷贝
//	char arr1[] = "#################";
//	char arr2[] = "bit";
//	//strcpy(arr1,arr2);
//	my_strcpy(arr1,arr2);// 自己实现字符串拷贝
//	printf("%s\n",arr1); // 输出结果只有bit，字符串种的\0也拷贝
//
//	return 0;
//}

// 返回值类型改成 char * ,main中返回目的地地址
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	// strcpy
//	// 字符串拷贝
//	char arr1[] = "#################";
//	char arr2[] = "bit";
//	//strcpy(arr1,arr2);
//	printf("%s\n", my_strcpy(arr1, arr2)); // 输出结果只有bit，字符串种的\0也拷贝
//	return 0;
//}

//int main()
//{
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//	// const 放在指针变量的*左边时，修饰的是*p，也就是说不能通过p来改变*p(num)的值
//	// const 放在指针变量的*右边时，修饰的时指针变量p本身，p不能被改变
//	const int num = 10;
//	int n = 100;
//	//const int* p = &num;
//	//p = &n; //*p不能被改变，但是p可以
//	int* const p = &num;
//	*p = 20; // p不能被改变，但是*p可以
//	printf("%d\n",num);
//	return 0;
//}

int my_strlen(const char *str)
{
	int count = 0;
	assert(str != NULL); // 保证指针有效性
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}