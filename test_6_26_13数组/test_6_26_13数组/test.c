#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	// 创建一个数组-存放整型-10个
//	int arr[10];
//	int arr2[9] = {1,2,3};// 不完全初始化，剩下的元素默认初始化为 0
//	char arr3[5] = {'a','b'}; // 不完全初始化，剩下的默认为 0
//	char arr4[4] = "ab"; // 其实初始化了3个，a b 和 \0 ，剩下的两个默认为 0，储存的结果都是3个0
//	char arr5[] = "abcdef"; // 最后还有一个\0 
//	printf("%d\n",sizeof(arr5)); // sizeof 计算arr4所占空间的大小  7*1=7
//	printf("%d\n",strlen(arr5)); // strlen 求字符串长度，找到\0就停止，\0不计入长度
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

// *************一维数组的使用
//int main()
//{
//	char arr[] = "abcdef"; // 数组里面存储时是[a][b][c][d][e][f][\0]
//	printf("%c\n",arr[3]);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i <len; i++)
//	{
//		printf("%c\n",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]); // %p打印地址
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4, 5} }; // 1 2 3 放在第一行，45放在第二行
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	char ch[5][6];
//	int arr1[][4] = {{ 1,2,3,4 }, { 5, 6, 7, 8 }}; // 二维数组的列不能省略 行可以省略
//	return 0;
//}



// **************数组作为函数参数
// 冒泡排序

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;// 假设这一趟要排序的数据已经有序
//		// 每一趟冒泡排序
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; // 本趟排序的数据不完全有序
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// 对arr排序，升序
//	bubble_sort(arr,sz);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*
	数组名就是首元素的地址 但是有两个例外
	1.sizeof(数组名) 数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小，单位是字节
	2.&arr 数组名代表整个数组，取出的是整个数组的地址
	*/
	printf("%p\n",arr); // 数组名就是首元素的地址
	printf("%p\n",&arr[0]); // 两个结果一样	
	printf("%d\n",*arr); // 对arr解引用，得到 1

	printf("%p\n",&arr); // 虽然显示的是第一个元素的地址，但是是整个数组的地址

	// 对比一下
	printf("%p\n", arr);
	printf("%p\n", arr+1); //增加了4
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);//增加了4
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//增加了28，数组是7个元素，每个元素4个字节
	return 0;
}