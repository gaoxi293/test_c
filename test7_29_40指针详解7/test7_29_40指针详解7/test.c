#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*    qsort函数
第一个参数：待排序数组的首元素地址
第二个参数：待排序数组的元素个数
第三个参数：待排序数组的每个元素的大小 - 单位是字节
第四个参数：函数指针，比较两个元素的所用函数的地址 - 这个函数需要自己实现
*/

// 自己实现qsort函数
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		// 每一趟比较的对数
		int j = 0;
		for (j = 0; j < sz-i-1; j++)
		{
			// 两个元素的比较
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				// 交换
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int cmp_int(const void* e1, const void* e2)
{
	// 比较两个整型值
	return *(int*)e1 - *(int*)e2;
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,1,2,3,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// 使用bubble_sort肯定知道自己要排序什么数据
	// 就应该知道如何比较待排序数组中的元素
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}

int main()
{

	return 0;
}