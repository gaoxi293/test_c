#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	// ����һ������-�������-10��
//	int arr[10];
//	int arr2[9] = {1,2,3};// ����ȫ��ʼ����ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ 0
//	char arr3[5] = {'a','b'}; // ����ȫ��ʼ����ʣ�µ�Ĭ��Ϊ 0
//	char arr4[4] = "ab"; // ��ʵ��ʼ����3����a b �� \0 ��ʣ�µ�����Ĭ��Ϊ 0������Ľ������3��0
//	char arr5[] = "abcdef"; // �����һ��\0 
//	printf("%d\n",sizeof(arr5)); // sizeof ����arr4��ռ�ռ�Ĵ�С  7*1=7
//	printf("%d\n",strlen(arr5)); // strlen ���ַ������ȣ��ҵ�\0��ֹͣ��\0�����볤��
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n", sizeof(arr2));
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

// *************һά�����ʹ��
//int main()
//{
//	char arr[] = "abcdef"; // ��������洢ʱ��[a][b][c][d][e][f][\0]
//	printf("%c\n",arr[3]);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i <len; i++)
//	{
//		printf("%c\n",arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("&arr[%d] = %p\n",i,&arr[i]); // %p��ӡ��ַ
//	}
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4, 5} }; // 1 2 3 ���ڵ�һ�У�45���ڵڶ���
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//	char ch[5][6];
//	int arr1[][4] = {{ 1,2,3,4 }, { 5, 6, 7, 8 }}; // ��ά������в���ʡ�� �п���ʡ��
//	return 0;
//}



// **************������Ϊ��������
// ð������

//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int flag = 1;// ������һ��Ҫ����������Ѿ�����
//		// ÿһ��ð������
//		int j = 0;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0; // ������������ݲ���ȫ����
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {9,8,7,6,5,4,3,2,1};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	// ��arr��������
//	bubble_sort(arr,sz);//ð��������
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*
	������������Ԫ�صĵ�ַ ��������������
	1.sizeof(������) ��������ʾ�������飬sizeof(������)���������������Ĵ�С����λ���ֽ�
	2.&arr �����������������飬ȡ��������������ĵ�ַ
	*/
	printf("%p\n",arr); // ������������Ԫ�صĵ�ַ
	printf("%p\n",&arr[0]); // �������һ��	
	printf("%d\n",*arr); // ��arr�����ã��õ� 1

	printf("%p\n",&arr); // ��Ȼ��ʾ���ǵ�һ��Ԫ�صĵ�ַ����������������ĵ�ַ

	// �Ա�һ��
	printf("%p\n", arr);
	printf("%p\n", arr+1); //������4
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);//������4
	printf("%p\n", &arr);
	printf("%p\n", &arr+1);//������28��������7��Ԫ�أ�ÿ��Ԫ��4���ֽ�
	return 0;
}