#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	// ָ������
//	int* arr[10];
//	// ����ָ��
//	int* (*pa)[10] = &arr;
//	// ����ָ��
//	int (*pAdd)(int,int) = Add;
//	int sum = (*pAdd)(1, 2);
//	int sum = pAdd(1, 2);  // ����*Ҳ��һ�����Ե��õ�
//	printf("%d\n", sum);
//	// ����ָ�������
//	int (*pArr[5])(int, int);
//	// ָ����ָ�������ָ��
//	int (*(*pArr)[5])(int, int);
//	return 0;
//}



//void bubble_sort(int arr[], int sz)
//{
//	int i = 0; // ��������
//	for (i = 0; i < sz-1; i++)
//	{
//		int j = 0; // ���ƱȽϵĶ���
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//// qsort - �⺯��- ����   qsort���������
////void qsort(
////	void* base,
////	size_t num,
////	size_t width,
////	int(* cmp)(const void* e1, const void* e2)
////);
//cmp_int(const void* e1, const void* e2)
//{
//	 // �Ƚ���������ֵ
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = {9,8,7,6,5,4,3,2,1,0};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	// �Ƚ����־��ǱȽ��ַ���
//	// �ַ��������� ><=���Ƚϣ�Ӧ����strcmp
//	return strcmp(((struct Stu*)e1)->name , ((struct Stu*)e2)->name);
//}
//
//void test3()
//{
//	struct Stu s[3] = { {"zhangsan",20} ,{"lisi",14} ,{"wangwu",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
////	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };  // ���ڵĺ���ֻ���������ͣ��������򸡵���
//
//	// bubble_sort(arr, sz);
//	// bubble_sort(f, sz);
//	test1();
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	char* pc = &a;
//
//	char ch = 'w';
//	void* p = &a; // ������ָ�� 
//	// void* ���Խ����������͵ĵ�ַ   ���ܽ��н����ò��� ���ܽ���+-�����Ĳ���
//	p = &ch;
//	return 0;
//}

 // **********************************   qsort�ڶ���
// ð������ ֻ������
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		// һ��ð������
//		int j = 0;
//		for (j = 0; j < sz-i-1; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

// ************************ qsort - �⺯�� - ����  quick sort
void qsort(void* base,// base ���������ʼλ��
			size_t num,// ��������Ĵ�С
			size_t width,// Ԫ�صĴ�С ��λΪ�ֽ�
			int(* cmp)(const void* e1, const void* e2) // �ȽϺ���
); // cmp - cpmpare�����涨 e1<e2 ����<0,e1=e2 ����0,e1>e2 ���� >0

struct Stu
{
	char name[20]; 
	int age;
};

// �Ƚ���������ֵ
int cmp_int(const void* e1,const void* e2) 
{
	return *(int*)e1 -  *(int*)e2;
}
// qsort ���� arr,  ���ĸ�λ�õĲ�������Ҫдһ����������ȥ
void test1()
{
	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	qsort(arr, sz, sizeof(arr[0]), cmp_int);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}

// qsort �Ƚϸ�����
int cmp_float(const void* e1, const void* e2)
{
	return *(float*)e1 - *(float*)e2;

	////  ��������д���о��棬��Ϊreturn����float  ���Ǻ������ص���int����������д
	//if (*(float*)e1 == *(float*)e2)
	//	return 0;
	//else if (*(float*)e1 > *(float*)e2)
	//	return 1;
	//else
	//	return -1;
	
	//// ���߽����֮��Ľ����ǿ��ת����int
	//return ((int)(*(float*)e1 - *(float*)e2));
}
void test2()
{
	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
	int sz = sizeof(f) / sizeof(f[0]);
	qsort(f, sz, sizeof(f[0]), cmp_float);
	int j = 0;
	for (j = 0; j < sz; j++)
	{
		printf("%f ", f[j]);
	}
}

// �ȽϽṹ��
int cmp_stu_by_age(const void* e1, const void* e2) // ���������Ƚ�
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
}
int cmp_stu_by_name(const void* e1, const void* e2) // ���������Ƚ�
{
	// �Ƚ����־��ǱȽ��ַ������ַ����Ƚϲ���ֱ����><= Ӧ����strcmp - str compare����
	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
}
void test3()
{
	struct Stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",10}};
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), cmp_stu_by_name);
}

int main()
{
	//test1();
	//test2();
	test3();
	return 0;
}


// ************************ void*
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	// char* pc = &a;  �о��浫�ǲ��ᱨ��
//
//	// void* ���͵�ָ�� ���Խ����������͵ĵ�ַ ���ǲ��ܽ����� ���ܽ���+-��������
//	char ch = 'w';
//	void* p = &a;
//
//	return 0;
//}