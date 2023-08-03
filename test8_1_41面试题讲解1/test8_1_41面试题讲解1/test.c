#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	// ************************* 一维数组 *************************
	//int a[] = {1,2,3,4};
	//printf("%d\n", sizeof(a)); // 4 * 4 = 16
	//printf("%d\n", sizeof(a + 0));// 8 - 这里数组名表示首元素地址 64位平台 8个字节
	//// 数组名是首元素地址 ， 除了以下两种情况
	//// 1. sizeof(数组名) - 数组名表示整个数组
	//// 2. &数组名 - 数组名表示整个数组
	//printf("%d\n", sizeof(*a)); // 4 - 数组名表示首元素地址，*a就是首元素
	//printf("%d\n", sizeof(a + 1));// 8 - 数组名表示首元素地址，a+1 是第二个元素地址
	//printf("%d\n", sizeof(a[1]));// 4 - 第二个元素大小
	//printf("%d\n", sizeof(&a));// 8 - &a取出的是数组的地址，数组的地址也是地址，8个字节
	//printf("%d\n", sizeof(*&a));// 16 - & 和 * 相互抵消，sizeof计算的就是数组的大小
	//printf("%d\n", sizeof(&a + 1));// 8 &a 取的还是数组的地址，&a+1跳过整个数组，但还是地址，8个字节
	//printf("%d\n", sizeof(&a[0]));// 8 第一个元素的地址
	//printf("%d\n", sizeof(&a[0] + 1));// 8 第二个元素的地址
	//printf("\n");


	//// ************************* 字符数组 **************************
	//char arr[] = {  'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr)); // 6 * 1 = 6
	//printf("%d\n", sizeof(arr + 0));// 8 arr是首元素的地址，arr+0还是首元素的地址，地址大小是 8字节
	//printf("%d\n", sizeof(*arr));// 1 arr是首元素地址，*arr就是首元素
	//printf("%d\n", sizeof(arr[1]));// 1 
	//printf("%d\n", sizeof(&arr));// 8 &arr虽然是数组的地址，但还是地址
	//printf("%d\n", sizeof(&arr + 1));// 8 &arr+1是跳过整个数组后的地址 
	//printf("%d\n", sizeof(&arr[0] + 1));// 8  第二个元素地址


	// ********************** 字符数组 ******************************
	//char arr1[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr1));// 随机值
	//printf("%d\n", strlen(arr1 + 0));// 随机值
	////printf("%d\n", strlen(*arr1));// 'a'的ASCII码值为97  把97当成一个地址去访问是错误的，这种写法是错误的
	////printf("%d\n", strlen(arr1[1]));// 同样也是错误的，'b'的ASCII值为98
	//printf("%d\n", strlen(&arr1)); // 随机值
	//printf("%d\n", strlen(&arr1 + 1));// 随机值  与上一个之间的随机值之间应该相差6
	//printf("%d\n", strlen(&arr1[0] + 1));// 随机值  与&arr 应该相差1  是从'b'开始的


	// **********************
	//char arr[] = "abcdef";

	//printf("%d\n", sizeof(arr));// 7 sizeof(arr)计算的是数组的大小，单位是字节
	//printf("%d\n", sizeof(arr + 0));// 8 首元素地址
	//printf("%d\n", sizeof(*arr));// 1 *arr 是首元素，sizeof(arr)计算首元素的大小
	//printf("%d\n", sizeof(arr[1]));// 1 第二个元素
	//printf("%d\n", sizeof(&arr));// 8 &arr虽然是数组的地址，但也是地址
	//printf("%d\n", sizeof(&arr + 1));// 8 是跳过整个数组后的地址，但也是地址
	//printf("%d\n", sizeof(&arr[0] + 1));// 8 &arr[0] + 1 是第二个元素的地址

	//char arr[] = "abcdef";

	//printf("%d\n", strlen(arr));// 6  strlen遇到\0停止
	//printf("%d\n", strlen(arr + 0));// 6 首元素地址 + 0 还是首元素地址
	////printf("%d\n", strlen(*arr));// err  传入字符a，'a'的ASCII码值是97，地址错误
	////printf("%d\n", strlen(arr[1]));// err 传入字符b，
	//printf("%d\n", strlen(&arr));// 6
	//printf("%d\n", strlen(&arr + 1));// 还是数组地址，但是可能是相邻空间的另一个数组的长度 也就是随机值
	//printf("%d\n", strlen(&arr[0] + 1));// 5  &arr[0]是第一个元素地址 +1  就是'b'的地址

	//char* p = "abcdef"; // p里面只放了 a 的地址

	//printf("%d\n", sizeof(p));// 8 指针的大小
	//printf("%d\n", sizeof(p + 1));// 8  p+1 得到的是字符b的地址
	//printf("%d\n", sizeof(*p));// 1 *p 就是字符串的第一个字符  -  'a'
	//printf("%d\n", sizeof(p[0]));//1  p[0] == *(p + 0) == *p
	//printf("%d\n", sizeof(&p));// 8
	//printf("%d\n", sizeof(&p + 1));// 8 另一块内存空间的地址
	//printf("%d\n", sizeof(&p[0] + 1));// 8  'b'的地址


	//char* p = "abcdef"; // p里面只放了 a 的地址

	//printf("%d\n", strlen(p));// 6 
	//printf("%d\n", strlen(p + 1));// 5
	////printf("%d\n", strlen(*p));// err  *p就是a  a的ASCII码值是96
	////printf("%d\n", strlen(p[0]));// err P[0]和*p一样的
	//printf("%d\n", strlen(&p));// 随机值 p里面放的a的地址，p这块空间的地址也是不确定的
	//printf("%d\n", strlen(&p + 1));// 随机值
	//printf("%d\n", strlen(&p[0] + 1));// 5

	// ************************** 二维数组************************************
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a));// 3*4*4 = 48 
	printf("%d\n", sizeof(a[0][0]));// 4
	printf("%d\n", sizeof(a[0]));// 16  相当于第一行作为一维数组的数组名
	// 8 第一行第二个元素的地址 a[0]是第一行的数组名，数组名此时是首元素的地址，就是第一行第一个元素地址
	printf("%d\n", sizeof(a[0] + 1)); // 8
	printf("%d\n", sizeof(a + 1));// 8  第二行的地址  a就是首元素地址，二维数组的首元素是第一行的一维数组
	printf("%d\n", sizeof(*(a + 1)));// 16  第二行的大小
	printf("%d\n", sizeof(&a[0] + 1));// 8 第二行的地址
	printf("%d\n", sizeof(*(&a[0] + 1)));// 16 第二行的大小
	printf("%d\n", sizeof(*a));// 16 第一行的大小
	printf("%d\n", sizeof(a[3]));// 16 sizeof()()内部分表达式不会访问 跟sizeof(arr[0])效果是一样的，只会计算大小

	return 0;
}