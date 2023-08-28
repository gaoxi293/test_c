#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

// ************************ 指针初阶作业讲解
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3)); // 6 ,12
//	// pulPtr 指向的是6，+3指向9，9+3=12
//	return 0;
//}


// 指针-指针得到的是指针之间的元素个数     指针可以比较大小-指针中存储的是地址，地址可以看成数据用来比较大小


// 一个函数逆序字符串内容    abcdef  逆序之后  fedcba
//void reverse(char* str)
//{
//	assert(str); // 保证指针有效性，如果不满足会报错    ？？？？
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//
//	while (left <= right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = { 0 };
//	//scanf("%s", arr); // %s遇到空格就不读取，如果输入hello bit的话结果就是olleh
//	gets(arr); // 读取一行
//	reverse(arr);// 逆序函数
//
//	printf("%s\n", arr);
//	return 0;
//}

// 计算求和，Sn=a+aa+aaa+aaaa+aaaaa
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d",&a,&n);// 2  5
//	int sum = 0;
//	int i = 0;
//	int ret = 0;
//	// 2 22 222 2222 22222
//	for ( i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}


// 打印水仙花数
//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 10000; i++)
//	{
//		// 判断i是否为水仙花数  
//		// 1.计算i的位数n
//		int n = 1;
//		int tmp = i; // 如果不用临时变量 i的值就被改变 没法进行下一步
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		// 2.计算i的每一位的n次方之和 sum
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n); // 头文件 math.h  pow函数返回的是double类型的数字，此处可能有警告
//			tmp /= 10;
//		}
//		// 3.判断是否 i = sum
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


// 打印菱形
//int main()
//{
//	int line = 0;
//	scanf("%d",&line); // 7
//	// 打印上半部分
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		// 打印空格
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		// 打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	 //打印下半部分
//	for (i = 0; i < line - 1; i++)
//	{
//		// 打印空格
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		// 打印*
//		for (j = 0; j < 2*(line-1-i)- 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


// ************************ 47 作业讲解(2) ************************
// 要求输出结构体中成员a的数据，printf后应该填什么
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", a.a);//(*p).a  p->a 都可以
//	return 0;
//}

// 下面结构体输出的是什么?  wang
//struct stu
//{
//	int num;
//	char name[10];
//	int age;
//};
//
//void fun(struct stu* p)
//{
//	printf("%s\n", (*p).name);
//	return;
//}
//
//int main()
//{
//	struct stu students[3] = { { 9801, "zhang", 20},
//							   { 9802, "wang",  19},
//							   { 9803, "zhao",  18}
//	};
//	fun(students + 1);
//	return 0;
//}

// 结构体访问成员的操作符不包括：sizeof

// *****编程实现 - 喝汽水，1瓶汽水1元，2个空瓶可以还1瓶汽水，给20元，可以多少汽水
//int main()
//{
//	int money = 0;
//	int total = 0;// 记录汽水瓶数
//	int empty = 0;
//	scanf("%d", &money);
//	// 买回来的汽水喝掉
//	total = money;
//	empty = money;
//	// 换回来的汽水
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n",total);
//	return 0;
//}


// ***************** 调整奇数偶数顺序 *****************
/* 使奇数全部位于偶数前面
1.从左边开始找一个偶数
2.从右边开始找一个奇数
3.把他们交换
*/
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		// 从左边找偶数
		while ((left < right) && arr[left] % 2 == 1)
		{
			left++;
		}
		// 从右边找奇数
		while ((left < right) && arr[right] % 2 == 0)
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr,sz);

	return 0;
}

/*
大小端字节序指的是数据在电脑上存储的 字节顺序，不是二进制顺序
小端字节序是把数据的高字节内容存放到低地址，低字节内容存放在高地址
       0x11 22 33 44
	   小端 44 33 22 11   大端 11 22 33 44 
 低										        高
*/