#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
	//int ch = 0;
	//// EOF end of file 文件结束标志
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}

	// 以下代码并没有等待我们输入Y/N，而是直接输出放弃确认，因为我们输入密码之后敲了一个回车
	// getchar读到的是\n，对应的ASCII值是10，直接跳入else
	//scanf读完password之后，输入缓冲区还有一个“/n”，加一个gerchar
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0};
	//printf("请输入密码：");
	//scanf("%s", password);//输入密码，并存放在password数组中
	//输入缓冲区还有一个“\n”
	//getchar(); //接收\n
	 //如果我们输入的密码是 123 ABC，那getchar只能读取一个空格字符，仍然不能正常执行
	//加入一个循环，直至读到\n
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认<Y/N>:");
//	ret = getchar();// Y/N
//	if (ret == 'Y') // 单个字符不要敲成双引号
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}
//********************************************
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码：");
//	scanf("%s",password); // 如果%s后面加空格，需要输入两次password才会打印下面一句请确认<Y/N> ?????
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认<Y/N>");
//	ret = getchar();
//
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}


//输入数字就打印，输入其他无反应
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//for循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ",i);
//	}
//	return 0;
//}


// while 出现死循环的情况
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int s = 1;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 10; j++)//j = 0如果省略就只打印10个hehe，j=10之后就一直为10
//		{
//			printf("hehe%d\n",s);
//			s++;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x=0,y=0;x<2 && y<5;++x,y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//循环要循环多少次
//循环0次--判断语句的位置给的是赋值语句 k=0，为假，循环不执行
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//do-while循环
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//			******** 练习 ********
//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n",ret);
//	return 0;
//}


// 几个阶乘的和
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("请输入阶乘和数字：");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//在有序数组中找到7
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 1;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n",i);
//			break;  // 不写break的话i会一直遍历到9.
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//二分法查找
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int k = 6;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//按要求打印字符串
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = (sizeof(arr1)/sizeof(arr1[0]))-2; //-2是因为字符串最后是\n
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000); //ms  # include <windows.h>
//		system("cls"); //打印完清空屏幕，#include <stdlib.h>
//		left++;
//		right--;
//	}
//	return 0;
//}


//输入密码 最多输入3次
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s",password);
//		// if (password == "123456") // == 不能用来两个字符串时都相等
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//		printf("3次密码均错误，退出程序\n");
//	return 0;
//}