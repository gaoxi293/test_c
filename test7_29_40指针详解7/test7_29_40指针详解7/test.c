#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*    qsort����
��һ���������������������Ԫ�ص�ַ
�ڶ��������������������Ԫ�ظ���
�����������������������ÿ��Ԫ�صĴ�С - ��λ���ֽ�
���ĸ�����������ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ - ���������Ҫ�Լ�ʵ��
*/

// �Լ�ʵ��qsort����
void Swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1, void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		// ÿһ�˱ȽϵĶ���
		int j = 0;
		for (j = 0; j < sz-i-1; j++)
		{
			// ����Ԫ�صıȽ�
			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
			{
				// ����
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
int cmp_int(const void* e1, const void* e2)
{
	// �Ƚ���������ֵ
	return *(int*)e1 - *(int*)e2;
}
void test4()
{
	int arr[10] = { 9,8,7,6,5,4,1,2,3,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	// ʹ��bubble_sort�϶�֪���Լ�Ҫ����ʲô����
	// ��Ӧ��֪����αȽϴ����������е�Ԫ��
	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
}

int main()
{

	return 0;
}