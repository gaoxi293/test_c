#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//	// �ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef"; //p2�д����a�ĵ�ַ �����ַ�����ü���const
//	// ָ������ - ���� - ���ָ�������
//	int* arr[10];
//	char* ch[5];
//	// ����ָ�� - ָ�������ָ��
//	int* p3; // ����ָ�� - ָ�����͵�ָ��
//	char* p4;// �ַ�ָ�� - ָ���ַ���ָ��
//	int arr2[5]; // ����
//	int (*pa)[5] = &arr2; // �������ĵ�ַ ,pa����һ������ָ��
//	return 0;
//}

// ***************************** ���鴫�κ�ָ�봫�� ***************************
// һά���鴫�εļ��ַ�ʽ
//void test(int arr[])
//{}
//void test(int arr[10])
//{}
//void test(int arr)
//{}
//void test2(int* arr[20])
//{}
//void test2(int** arr)
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//}

// ��ά���鴫�εļ��ַ�ʽ
//void test(int arr[3][5])
//{}
//void test1(int arr[][5]) // �п���ʡ�ԣ��в�����
//{}
//void test2(int *arr) // �Ǵ���ģ���ά�������Ԫ�ص�ַ�ǵ�һ�еĵ�ַ
//{}
//void test3(int* arr[5]) // �Ǵ���ģ�arr�Ⱥ�[5]��ϣ���һ�����飬�����ÿ��Ԫ����int����
//{}
//void test4(int(*arr)[5])
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//
//	test(arr);
//	return 0;
//}

//  �����Ĳ���Ϊһ��ָ���ʱ�򣬺����ܽ��յ�ʲô����
//void test1(int* p)
//{}
//void test2(char* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test1(&a);
//	test1(p1); // �����ִ��η�ʽ���ǿ��Ե�
//
//	char ch = 'w';
//	char* pc = &ch;
//	test2(&ch);
//	test2(pc);// ���η�ʽ������ȷ��
//
//	return 0;
//}

// ������������Ϊ����ָ��
//void test(int** p)
//{}
//int main()
//{
//	int* ptr;
//	int** pp = &ptr;
//	test(&ptr);	
//	test(pp);
//
//	int* arr[10];
//	test(arr);
//	return 0;
//}

// **********************************����ָ��
// ����ָ�� - ��ָ�������ָ��
// ����ָ�� - ��ָ������ָ�� - ��ź�����ַ��һ��ָ��

//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	// ����ָ��
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;
//	//printf("%d\n", Add(a,b));
//	/*
//	// &������ �� ������ ���Ǻ����ĵ�ַ
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//	*/
//	// ����ָ��
//	int (*pa)(int, int) = Add;
//	printf("%d\n", (*pa)(2, 3)); // ����һ��
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = print;
//	(*p)("hello bit");
//	return 0;
//}

// ������������
/*
(*(void (*)())0) (); �� 0 ǿ��ת���� void(*)() ����ָ�����ͣ�����Ϊ�� - 0����һ�������ĵ�ַ�����øú���

void (*signal(int,void(*)(int)) )(int)
void (*              )(int) ��һ������ָ�� �м�յĲ��־��Ǻ�����
signal(int,void(*)(int)) �����Ĳ�����2������һ����int���ڶ����Ǻ���ָ��
signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ����Ĳ�����int

*/
