#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>

int main()
{
	// ************************* һά���� *************************
	//int a[] = {1,2,3,4};
	//printf("%d\n", sizeof(a)); // 4 * 4 = 16
	//printf("%d\n", sizeof(a + 0));// 8 - ������������ʾ��Ԫ�ص�ַ 64λƽ̨ 8���ֽ�
	//// ����������Ԫ�ص�ַ �� ���������������
	//// 1. sizeof(������) - ��������ʾ��������
	//// 2. &������ - ��������ʾ��������
	//printf("%d\n", sizeof(*a)); // 4 - ��������ʾ��Ԫ�ص�ַ��*a������Ԫ��
	//printf("%d\n", sizeof(a + 1));// 8 - ��������ʾ��Ԫ�ص�ַ��a+1 �ǵڶ���Ԫ�ص�ַ
	//printf("%d\n", sizeof(a[1]));// 4 - �ڶ���Ԫ�ش�С
	//printf("%d\n", sizeof(&a));// 8 - &aȡ����������ĵ�ַ������ĵ�ַҲ�ǵ�ַ��8���ֽ�
	//printf("%d\n", sizeof(*&a));// 16 - & �� * �໥������sizeof����ľ�������Ĵ�С
	//printf("%d\n", sizeof(&a + 1));// 8 &a ȡ�Ļ�������ĵ�ַ��&a+1�����������飬�����ǵ�ַ��8���ֽ�
	//printf("%d\n", sizeof(&a[0]));// 8 ��һ��Ԫ�صĵ�ַ
	//printf("%d\n", sizeof(&a[0] + 1));// 8 �ڶ���Ԫ�صĵ�ַ
	//printf("\n");


	//// ************************* �ַ����� **************************
	//char arr[] = {  'a','b','c','d','e','f' };
	//printf("%d\n", sizeof(arr)); // 6 * 1 = 6
	//printf("%d\n", sizeof(arr + 0));// 8 arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ����ַ��С�� 8�ֽ�
	//printf("%d\n", sizeof(*arr));// 1 arr����Ԫ�ص�ַ��*arr������Ԫ��
	//printf("%d\n", sizeof(arr[1]));// 1 
	//printf("%d\n", sizeof(&arr));// 8 &arr��Ȼ������ĵ�ַ�������ǵ�ַ
	//printf("%d\n", sizeof(&arr + 1));// 8 &arr+1���������������ĵ�ַ 
	//printf("%d\n", sizeof(&arr[0] + 1));// 8  �ڶ���Ԫ�ص�ַ


	// ********************** �ַ����� ******************************
	//char arr1[] = { 'a','b','c','d','e','f' };
	//printf("%d\n", strlen(arr1));// ���ֵ
	//printf("%d\n", strlen(arr1 + 0));// ���ֵ
	////printf("%d\n", strlen(*arr1));// 'a'��ASCII��ֵΪ97  ��97����һ����ַȥ�����Ǵ���ģ�����д���Ǵ����
	////printf("%d\n", strlen(arr1[1]));// ͬ��Ҳ�Ǵ���ģ�'b'��ASCIIֵΪ98
	//printf("%d\n", strlen(&arr1)); // ���ֵ
	//printf("%d\n", strlen(&arr1 + 1));// ���ֵ  ����һ��֮������ֵ֮��Ӧ�����6
	//printf("%d\n", strlen(&arr1[0] + 1));// ���ֵ  ��&arr Ӧ�����1  �Ǵ�'b'��ʼ��


	// **********************
	//char arr[] = "abcdef";

	//printf("%d\n", sizeof(arr));// 7 sizeof(arr)�����������Ĵ�С����λ���ֽ�
	//printf("%d\n", sizeof(arr + 0));// 8 ��Ԫ�ص�ַ
	//printf("%d\n", sizeof(*arr));// 1 *arr ����Ԫ�أ�sizeof(arr)������Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1]));// 1 �ڶ���Ԫ��
	//printf("%d\n", sizeof(&arr));// 8 &arr��Ȼ������ĵ�ַ����Ҳ�ǵ�ַ
	//printf("%d\n", sizeof(&arr + 1));// 8 ���������������ĵ�ַ����Ҳ�ǵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));// 8 &arr[0] + 1 �ǵڶ���Ԫ�صĵ�ַ

	//char arr[] = "abcdef";

	//printf("%d\n", strlen(arr));// 6  strlen����\0ֹͣ
	//printf("%d\n", strlen(arr + 0));// 6 ��Ԫ�ص�ַ + 0 ������Ԫ�ص�ַ
	////printf("%d\n", strlen(*arr));// err  �����ַ�a��'a'��ASCII��ֵ��97����ַ����
	////printf("%d\n", strlen(arr[1]));// err �����ַ�b��
	//printf("%d\n", strlen(&arr));// 6
	//printf("%d\n", strlen(&arr + 1));// ���������ַ�����ǿ��������ڿռ����һ������ĳ��� Ҳ�������ֵ
	//printf("%d\n", strlen(&arr[0] + 1));// 5  &arr[0]�ǵ�һ��Ԫ�ص�ַ +1  ����'b'�ĵ�ַ

	//char* p = "abcdef"; // p����ֻ���� a �ĵ�ַ

	//printf("%d\n", sizeof(p));// 8 ָ��Ĵ�С
	//printf("%d\n", sizeof(p + 1));// 8  p+1 �õ������ַ�b�ĵ�ַ
	//printf("%d\n", sizeof(*p));// 1 *p �����ַ����ĵ�һ���ַ�  -  'a'
	//printf("%d\n", sizeof(p[0]));//1  p[0] == *(p + 0) == *p
	//printf("%d\n", sizeof(&p));// 8
	//printf("%d\n", sizeof(&p + 1));// 8 ��һ���ڴ�ռ�ĵ�ַ
	//printf("%d\n", sizeof(&p[0] + 1));// 8  'b'�ĵ�ַ


	//char* p = "abcdef"; // p����ֻ���� a �ĵ�ַ

	//printf("%d\n", strlen(p));// 6 
	//printf("%d\n", strlen(p + 1));// 5
	////printf("%d\n", strlen(*p));// err  *p����a  a��ASCII��ֵ��96
	////printf("%d\n", strlen(p[0]));// err P[0]��*pһ����
	//printf("%d\n", strlen(&p));// ���ֵ p����ŵ�a�ĵ�ַ��p���ռ�ĵ�ַҲ�ǲ�ȷ����
	//printf("%d\n", strlen(&p + 1));// ���ֵ
	//printf("%d\n", strlen(&p[0] + 1));// 5

	// ************************** ��ά����************************************
	int a[3][4] = { 0 };

	printf("%d\n", sizeof(a));// 3*4*4 = 48 
	printf("%d\n", sizeof(a[0][0]));// 4
	printf("%d\n", sizeof(a[0]));// 16  �൱�ڵ�һ����Ϊһά�����������
	// 8 ��һ�еڶ���Ԫ�صĵ�ַ a[0]�ǵ�һ�е�����������������ʱ����Ԫ�صĵ�ַ�����ǵ�һ�е�һ��Ԫ�ص�ַ
	printf("%d\n", sizeof(a[0] + 1)); // 8
	printf("%d\n", sizeof(a + 1));// 8  �ڶ��еĵ�ַ  a������Ԫ�ص�ַ����ά�������Ԫ���ǵ�һ�е�һά����
	printf("%d\n", sizeof(*(a + 1)));// 16  �ڶ��еĴ�С
	printf("%d\n", sizeof(&a[0] + 1));// 8 �ڶ��еĵ�ַ
	printf("%d\n", sizeof(*(&a[0] + 1)));// 16 �ڶ��еĴ�С
	printf("%d\n", sizeof(*a));// 16 ��һ�еĴ�С
	printf("%d\n", sizeof(a[3]));// 16 sizeof()()�ڲ��ֱ��ʽ������� ��sizeof(arr[0])Ч����һ���ģ�ֻ������С

	return 0;
}