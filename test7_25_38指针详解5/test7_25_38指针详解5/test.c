#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//char* my_strcpy(char* dest, const char* src);
//// дһ������ָ��pf���ܹ�ָ��my_strcpy
//char* (*pf)(char*,const char*);
//// дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char (*pfArr[4])(char*,char*);

// ����ָ�������Ӧ�� -> ������
//void menu()
//{
//	printf("**************************\n");
//	printf("*****  1.add   2. sub*****\n");
//	printf("*****  3.mul   4. div*****\n");
//	printf("*****  5.Xor   0. exit****\n");
//	printf("**************************\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
// ����������뵱��������0��ʱ�򣬽��������������������Ż��˳��� �߼�����������
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		printf("����������������:>");
//		scanf("%d%d", &x,&y);
//		switch (input)
//		{
//		case 1:
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��/n");
//			break;
//		}
//	} while (input);
//}

// ���Ҫʵ�ָ���Ĺ��ܣ���ôcase�����Խ��Խ�࣬���������ͻ��ظ��ķǳ���
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Add(x, y));
//			break;
//		case 2:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Sub(x, y));
//			break;
//		case 3:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Mul(x, y));
//			break;
//		case 4:
//			printf("����������������:>");
//			scanf("%d%d", &x, &y);
//			printf("%d\n", Div(x, y));
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��/n");
//			break;
//		}
//	} while (input);
//}

// �Ľ����� �����Ӽ��������� ֻ���ں���ָ�����鴦�޸ľͿ���
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	// pfArr ��һ������ת������  -  ת�Ʊ�
//	int (*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("�����������:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input == 0)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	} while (input);
//}

// �Ľ����� ʹ�ûص����� - ����һ��ͨ������ָ����õĺ�����
//void Calc(int (*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(Add);
//			break;
//		case 2:
//			Calc(Sub);
//			break;
//		case 3:
//			Calc(Mul);
//			break;
//		case 4:
//			Calc(Div);
//			break;
//		case 5:
//			Calc(Xor);
//			break;
//		case 0:
//			printf("�˳�\n");
//			break;
//		default:
//			printf("ѡ�����������ѡ��/n");
//			break;
//		}
//	} while (input);
//}
 
// **************** ָ����ָ�������ָ��
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = {0};
//	int (*p)[10] = &arr; // ȡ������ĵ�ַ
//
//	int (*pf)(int, int); // pf ��һ������ָ��
//	int (*pfArr[4])(int, int); //pfArr��һ������ - ����ָ�������
//	int(*(*ppfArr)[4])(int, int) = &pfArr;// ppfArr ��һ������ָ�� ָ��ָ��������飬������4��Ԫ�أ�
//	// ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)
//	return 0;
//}

// �ص�����  print����һ���ص�����
//void print(char* str)
//{
//	printf("hehe:%s",str);
//}
//void test(void (*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	test(print);
//	return 0;
//}

// ��ʱð������ֻ����������
// qsort ���� - ���������������͵�����
