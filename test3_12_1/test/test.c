#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

// main ǰ���int��ʾmain�������ú󷵻�һ������ֵ
//printf  print function ��ӡ����
//int main() //������-���������
//{
//	char ch = 'a'; //�ڴ�
//	printf("%c\n", ch); // %c ��ӡ�ַ���ʽ������
//	int age = 20; // - ����
//	printf("%d\n", age);// %d ��ӡ����ʮ������
//	long num = 100;
//	printf("%d\n", num);
//	float f = 5.0;
//	printf("%f\n", f);
//	double d = 3.14;
//	printf("%f\n",d);
//	return 0;
//}


//int main()
//{
//	printf("%d\n", sizeof(char)); // size of char
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));  // 1 2 4 4/8 8 4 8
//	return 0;
//}

//int main()
//{
//	short age = 20;//���ڴ�����2���ֽڣ�16������λ���������20
//	float weight = 95.6;//�о��� ��һ��double˫��������
//	float weight = 95.6f; //��һ��f��ȷ���ǵ����ȣ�����4���ֽڣ����С��
//	return 0;
//}


// ����������
//int num2 = 20;//ȫ�ֱ���-�����ڴ����{}���
//
//int main()
//{
//	int num = 10;//�����ڴ����{}�ڲ�
//	int num2 = 2;//���ȫ�ֱ����;ֲ������������ֲ���������
//	printf("%d\n", num2);
//	return 0;
//}

//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//��������-ʹ�����뺯��scanf
//	scanf("%d%d", &num1, &num2);//ȡ��ַ����&
//	//C �����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ�棬����sum
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}

// ��������������
// ȫ�ֱ����������������̣�����.c�ļ�Ҳ����ʹ��
int global = 2020;

void test()
{
	printf("test()--%d\n", global);
}
int main()
{
	int num = 0; //�ֲ�������������ڵ�ǰ�Ĵ�����ڲ�
	printf("num = %d\n", num);
	extern int g_val;//ʹ��extern����һ�������ļ���ȫ�ֱ�������Ȼ�ᾯ��
	printf("g_val = %d\n", g_val);

	return 0;
}