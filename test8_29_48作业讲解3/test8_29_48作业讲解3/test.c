#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	unsigned char a = 200; 
//	unsigned char b = 100;
//	unsigned char c = 0;
//
//	c = a + b;// 无符号整型 存储 0-255  ，c存储会发生整型提升
//	// 00000000 00000000 00000000 11001000   - 200
//	// 00000000 00000000 00000000 01100100   - 100
//	
//	// 00000000 00000000 00000000 11001000  - a 无符号所以高位补0
//	// 00000000 00000000 00000000 01100100  - b 
//	// 00000000 00000000 00000001 00110100  再相加之后存到c中，存储的是00110100 原反补相同 即44
//	printf("%d %d", a + b, c);
// 
//  return 0;
//}


//int main()
//{
//	// 在32位大端处理器变量b等于多少 ？？？
//	unsigned int a = 0x1234;//16进制1个位数是4个二进制位，4个16进制位是16个二进制位，也就是2个字节
//	unsigned char b = *(unsigned char *)&a;
//	printf("%d\n", b); //结果是52 因为是电脑是小端存储模式
//	/*
//	0x1234 == 0x 00 00 12 34
//	       小端 34 12 00 00               大端 00 00 12 34
//	低地址                                                 高地址
//	unsigned char * 只是类型发生变化，值没变
//	*/
//	return 0;
//}


//int main()
//{
//	char a[1000] = {0}; // char 范围 （-128)-127
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 ... -128 (-128)-1得到127 126 ... 3 2 1 0 -1 -2 ...
//	printf("%d\n", strlen(a));// strlen找/0  在0之前有255个元素
//
//	return 0;
//}


// *********************** 杨辉三角 ***********************
//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//			{
//				arr[i][j] = 1;// 第一列为1
//			}
//			if (i == j)
//			{
//				arr[i][j] = 1;// 对角线为1
//			}
//			if (i >= 2 && j >= 1)
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	// 打印
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// ********************* 猜凶手 *************
/*
题目内容：排查确定凶手必为4个嫌疑犯中的1个，以下为4个嫌犯的供词：
A说：不是我 
B说：是C    
C说：是D    
D说：C在胡说
已知3个人说了真话，1个人说的是假话
*/

//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer = %c\n", killer);
//		}
//	}
//	return 0;
//}

/*
赛马问题:有36匹马，6个跑道，没有计时器，请赛马确定，36匹马中的前三名，问最少赛几次？ 8
赛马问题:有25匹马，5个跑道，没有计时器，请赛马确定，25匹马中的前三名，问最少赛几次？
烧香问题：有一种香，材质不均匀，但是每一根这样的香，燃烧完恰好是1小时，给你2根，确定一个15分钟的时间段
*/


// ******************************** 作业讲解4 *****************************
/*  A：B第二， 我第三
	B：我第二，E第四
	C: 我第一，D第二
	D: C最后， 我第三
	E: 我第四，A第一	
	每位选手都说对一半，确定比赛名次
*/

//int main()
//{
//	int a = 0; int b = 0; int c = 0; int d = 0; int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//							if (a * b * c * d * e == 120)
//							{
//								printf("a=%d,b=%d,c=%d,d=%d,e=%d \n", a,b,c,d,e);
//							}	
//					}
//				}
//			}
//		}
//	}
//}


// 当使用一个free释放掉一个指针内容后，应该把指针变量的值被置为NULL
// 指针的数据类型 声明的是指针实际指向内容的数据类型  - 错误 ，比如int * ，int 才是指向的数据类型


char str1[] = "hello bit.";
char str2[] = "hello bit.";
char* str3 = "hello bit.";
char* str4 = "hello bit.";
// str1 != str2  数组里面的字符串是可以修改的  ，str3 == str4 里面是常量字符串，不能修改


int* fun(int a, int b); // 函数声明
int(*)fun(int a, int b);// 错误
int(*fun)(int a, int b);// 函数指针
(int*)fun(int a, int n);// 函数声明

int (* (*F)(int, int) )(int); // 是一个函数指针，指向的参数是int，返回值是int

int (*fun)(int*); // 参数为int *,返回值为int

// 指向含有10个元素的数组的指针，每个元素是一个函数指针，返回值int,参数是int *
int (*(*F)[10])(int*);