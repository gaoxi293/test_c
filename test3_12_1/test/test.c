#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// main 前面的int表示main函数调用后返回一个整型值
//printf  print function 打印函数
//int main() //主函数-主程序入口
//{
//	char ch = 'a'; //内存
//	printf("%c\n", ch); // %c 打印字符格式的数据
//	int age = 20; // - 整型
//	printf("%d\n", age);// %d 打印整型十进制数
//	long num = 100;
//	printf("%d\n", num);
//	float f = 5.0;
//	printf("%f\n", f);
//	double d = 3.14;
//	printf("%f\n",d);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char)); // size of char
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));  // 1 2 4 4/8 8 4 8
//	return 0;
//}

//int main()
//{
//	short age = 20;//向内存申请2个字节（16个比特位），来存放20
//	float weight = 95.6;//有警告 是一个double双精度类型
//	float weight = 95.6f; //加一个f明确就是单精度，申请4个字节，存放小数
//	return 0;
//}


// 变量、常量
//int num2 = 20;//全局变量-定义在代码块{}外的
//
//int main()
//{
//	int num = 10;//定义在代码块{}内部
//	int num2 = 2;//如果全局变量和局部变量重名，局部变量优先
//	printf("%d\n", num2);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入数据-使用输入函数scanf
//	scanf("%d%d", &num1, &num2);//取地址符号&
//	//C 语言语法规定，变量要定义在当前代码块的最前面，比如sum
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

// 作用域、生命周期
// 全局变量作用于整个工程，其他.c文件也可以使用
int global = 2020;

void test()
{
	printf("test()--%d\n", global);
}
int main()
{
	int num = 0; //局部变量作用域就在当前的代码块内部
	printf("num = %d\n", num);
	extern int g_val;//使用extern声明一下其他文件的全局变量，不然会警告
	printf("g_val = %d\n", g_val);

	return 0;
}