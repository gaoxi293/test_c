#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <math.h>

// ************************ ָ�������ҵ����
//int main()
//{
//	unsigned long pulArray[] = { 6,7,8,9,10 };
//	unsigned long* pulPtr;
//	pulPtr = pulArray;
//	*(pulPtr + 3) += 3;
//	printf("%d,%d\n", *pulPtr, *(pulPtr + 3)); // 6 ,12
//	// pulPtr ָ�����6��+3ָ��9��9+3=12
//	return 0;
//}


// ָ��-ָ��õ�����ָ��֮���Ԫ�ظ���     ָ����ԱȽϴ�С-ָ���д洢���ǵ�ַ����ַ���Կ������������Ƚϴ�С


// һ�����������ַ�������    abcdef  ����֮��  fedcba
//void reverse(char* str)
//{
//	assert(str); // ��ָ֤����Ч�ԣ����������ᱨ��    ��������
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
//	//scanf("%s", arr); // %s�����ո�Ͳ���ȡ���������hello bit�Ļ��������olleh
//	gets(arr); // ��ȡһ��
//	reverse(arr);// ������
//
//	printf("%s\n", arr);
//	return 0;
//}

// ������ͣ�Sn=a+aa+aaa+aaaa+aaaaa
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


// ��ӡˮ�ɻ���
//int main()
//{
//	int i = 0;
//	for ( i = 0; i < 10000; i++)
//	{
//		// �ж�i�Ƿ�Ϊˮ�ɻ���  
//		// 1.����i��λ��n
//		int n = 1;
//		int tmp = i; // ���������ʱ���� i��ֵ�ͱ��ı� û��������һ��
//		while (tmp /= 10)
//		{
//			n++;
//		}
//		// 2.����i��ÿһλ��n�η�֮�� sum
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n); // ͷ�ļ� math.h  pow�������ص���double���͵����֣��˴������о���
//			tmp /= 10;
//		}
//		// 3.�ж��Ƿ� i = sum
//		if (i == sum)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}


// ��ӡ����
//int main()
//{
//	int line = 0;
//	scanf("%d",&line); // 7
//	// ��ӡ�ϰ벿��
//	int i = 0;
//	for (i = 0; i < line; i++)
//	{
//		// ��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		// ��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	 //��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		// ��ӡ�ո�
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf(" ");
//		}
//		// ��ӡ*
//		for (j = 0; j < 2*(line-1-i)- 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


// ************************ 47 ��ҵ����(2) ************************
// Ҫ������ṹ���г�Աa�����ݣ�printf��Ӧ����ʲô
//struct S
//{
//	int a;
//	int b;
//};
//int main()
//{
//	struct S a, * p = &a;
//	a.a = 99;
//	printf("%d\n", a.a);//(*p).a  p->a ������
//	return 0;
//}

// ����ṹ���������ʲô?  wang
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

// �ṹ����ʳ�Ա�Ĳ�������������sizeof

// *****���ʵ�� - ����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�1ƿ��ˮ����20Ԫ�����Զ�����ˮ
//int main()
//{
//	int money = 0;
//	int total = 0;// ��¼��ˮƿ��
//	int empty = 0;
//	scanf("%d", &money);
//	// ���������ˮ�ȵ�
//	total = money;
//	empty = money;
//	// ����������ˮ
//	while (empty >= 2)
//	{
//		total += empty / 2;
//		empty = empty / 2 + empty % 2;
//	}
//	printf("total = %d\n",total);
//	return 0;
//}


// ***************** ��������ż��˳�� *****************
/* ʹ����ȫ��λ��ż��ǰ��
1.����߿�ʼ��һ��ż��
2.���ұ߿�ʼ��һ������
3.�����ǽ���
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
		// �������ż��
		while ((left < right) && arr[left] % 2 == 1)
		{
			left++;
		}
		// ���ұ�������
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
��С���ֽ���ָ���������ڵ����ϴ洢�� �ֽ�˳�򣬲��Ƕ�����˳��
С���ֽ����ǰ����ݵĸ��ֽ����ݴ�ŵ��͵�ַ�����ֽ����ݴ���ڸߵ�ַ
       0x11 22 33 44
	   С�� 44 33 22 11   ��� 11 22 33 44 
 ��										        ��
*/