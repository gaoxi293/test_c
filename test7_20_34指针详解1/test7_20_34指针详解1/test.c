#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr) / sizeof(arr[0]);// 64λָ����8���ֽڣ�����int���͵�Ԫ�ش�С
//	printf("%d\n",sz);
//}
//int main()
//{
//	int arr[10] = { 0 };
//	test(arr);
//	return 0;
//}

// **************************�ַ�ָ��
//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr); // %s��ӡֱ���ҵ�\0Ϊֹ
//	printf("%s\n", pc);
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef"; // p �����ŵ���a�ĵ�ַ    "abcdef"��һ�������ַ���
//	// �����ַ�����ȷ��д���Ǽ���һ��const
//	//const char* p = "abcdef";
//	*p = 'w'; // �����ַ������ܱ��޸ģ��ᱨ��
//	//printf("%c\n", *p); // ��ӡ���� a
//	printf("%s\n", p);
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abdcef";
//	char arr2[] = "abdcef";
//	char* p1 = "abcdef";// �����ַ���  ��׼ȷ��д���Ǽ���const
//	char* p2 = "abcdef";
//	if (arr1 == arr2) // ����
//	{
//		printf("hhhhe\n");
//	}
//	else
//	{
//		printf("hhhha\n");
//	}
//	if (p1 == p2) // ���
//	{
//		printf("hhhhe\n");
//	}
//	else
//	{
//		printf("hhhha\n");
//	}
//	return 0;
//}

// ********************ָ������
//int main()
//{
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ������� ָ������
//	char* pch[5];//����ַ�ָ������� ָ������
//	return 0;
//}
//  �����÷�
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = { &a,&b,&c,&d };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", *(arr[i]));
//	}
//	return 0;
//}

// ��ȷ�÷�
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {3,4,5,6,7};
//
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", * (parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

// ************************* ����ָ��  ��ָ��
//int main()
//{
//	int* p = NULL; // p������ָ�� - ָ�����͵�ָ�� - ���Դ�����͵ĵ�ַ
//	char* pc = NULL;// pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ
//	// ����ָ�� - ָ�������ָ�� - �������ĵ�ַ
//	// arr - ��Ԫ�ص�ַ
//	// &arr[0] - ��Ԫ�صĵ�ַ
//	// &arr - ����ĵ�ַ
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10] = &arr; //p��������ָ��
//	return 0;
//}

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	// pa��ָ�����������  *pa˵��pa��һ��ָ�� [5]˵��paָ���������5��Ԫ�ص�
//	// char*˵��paָ��������Ԫ��������char*
//	int arr2[10] = { 0 };
//	int (*pa2)[10] = &arr2;
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int (* pa)[10] = &arr;
	//int i = 0;
	////1.
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", (*pa)[i]);
	//}
	////2.
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", *(*pa+i)); // *pa == arr
	//}
	
	//int* p = arr;
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ",*(p+i));
	//}
	//return 0;
//}

// �������������ʽ
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//// ������ָ�����ʽ
//void print2(int (*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			// 4�ִ�ӡ��ʽ�ȼ�
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", *(p[i]+j));
//			printf("%d ", (*(p+i))[j]);
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6 },{3,4,5,6,7} }; // �������Ԫ����ʵ�ǵ�һ��
//	print1(arr,3,5);// arr������������Ԫ�ص�ַ
//	print2(arr,3,5);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);
//		printf("%d ", *(p+i));
//		printf("%d ", *(arr+i));
//		printf("%d ", arr[i]); // arr[i] == *(arr+i) == *(p+i) == p[i]
//	}
//	return 0;
//}

/*
int arr[5];			arr ��һ��5��Ԫ�ص���������
int *parr1[10];		parr1 ��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص������� int*��parr1��ָ������
int (*parr2)[10];	parr2 ��һ��ָ�룬��ָ��ָ����һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�������int��parr2������ָ��
int (*parr3[10])[5];
parr3�� * [] ����ϣ����Ǻ�[]��϶ȸߣ�����parr3��һ�����顣
parr3[10]��ȷ����������Ԫ�ظ�����ʣ�µľ���Ԫ������
���磺 int arr[10] arrΪ��������[10]ΪԪ�ظ�����ʣ�¾���Ԫ������int
ͬ�� int (*parr3[10])[5]�У�int (* )[5]����Ԫ������ ������� int (*parr2)[10]����
parr3 ��һ������ ��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int
*/