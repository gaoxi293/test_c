#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}

//f5�������Ժ�f9���öϵ����ʹ��
// Debug����ѭ����Release��ӡʮ��hehe
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for (i = 0; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//f9���öϵ�
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", 10-i);
//	}
//	return 0;
//}

// �Զ�����
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}

// ���ö�ջ
//void test2()
//{
//	printf("�Ǻ�\n");
//}
//void test1()
//{
//	test2();
//}
//void test()
//{
//	test1();
//}
//int main()
//{
//	test();
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	// Debug�� i�Ǹߵ�ַ��Release�� arr�Ǹߵ�ַ
//	printf("%p\n",arr);
//	printf("%p\n",&i);
//
//	for (i = 0; i <= 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}
//	system("pause");
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src; // '\0'
//}
// �Ż�һ��
//void my_strcpy(char* dest, char* src)
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
// ��һ���ж��Ƿ������Ϊ��ָ��
//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}
// �Ӷ���
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
// �Ӷ���
//#include <assert.h>
//void my_strcpy(char* dest, char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
 // ��const,���dest��src�����ˣ��ᱨ��
//#include <assert.h>
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}

//int main()
//{
//	// strcpy
//	// �ַ�������
//	char arr1[] = "#################";
//	char arr2[] = "bit";
//	//strcpy(arr1,arr2);
//	my_strcpy(arr1,arr2);// �Լ�ʵ���ַ�������
//	printf("%s\n",arr1); // ������ֻ��bit���ַ����ֵ�\0Ҳ����
//
//	return 0;
//}

// ����ֵ���͸ĳ� char * ,main�з���Ŀ�ĵص�ַ
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return dest;
//}
//int main()
//{
//	// strcpy
//	// �ַ�������
//	char arr1[] = "#################";
//	char arr2[] = "bit";
//	//strcpy(arr1,arr2);
//	printf("%s\n", my_strcpy(arr1, arr2)); // ������ֻ��bit���ַ����ֵ�\0Ҳ����
//	return 0;
//}

//int main()
//{
//	//int num = 10;
//	//int* p = &num;
//	//*p = 20;
//
//	// const ����ָ�������*���ʱ�����ε���*p��Ҳ����˵����ͨ��p���ı�*p(num)��ֵ
//	// const ����ָ�������*�ұ�ʱ�����ε�ʱָ�����p����p���ܱ��ı�
//	const int num = 10;
//	int n = 100;
//	//const int* p = &num;
//	//p = &n; //*p���ܱ��ı䣬����p����
//	int* const p = &num;
//	*p = 20; // p���ܱ��ı䣬����*p����
//	printf("%d\n",num);
//	return 0;
//}

int my_strlen(const char *str)
{
	int count = 0;
	assert(str != NULL); // ��ָ֤����Ч��
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
}