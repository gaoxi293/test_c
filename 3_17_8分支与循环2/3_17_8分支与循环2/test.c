#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>

//int main()
//{
	//int ch = 0;
	//// EOF end of file �ļ�������־
	//while ((ch = getchar()) != EOF)
	//{
	//	putchar(ch);
	//}

	// ���´��벢û�еȴ���������Y/N������ֱ���������ȷ�ϣ���Ϊ������������֮������һ���س�
	// getchar��������\n����Ӧ��ASCIIֵ��10��ֱ������else
	//scanf����password֮�����뻺��������һ����/n������һ��gerchar
	//int ret = 0;
	//int ch = 0;
	//char password[20] = {0};
	//printf("���������룺");
	//scanf("%s", password);//�������룬�������password������
	//���뻺��������һ����\n��
	//getchar(); //����\n
	 //������������������ 123 ABC����getcharֻ�ܶ�ȡһ���ո��ַ�����Ȼ��������ִ��
	//����һ��ѭ����ֱ������\n
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��<Y/N>:");
//	ret = getchar();// Y/N
//	if (ret == 'Y') // �����ַ���Ҫ�ó�˫����
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}
//********************************************
//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("���������룺");
//	scanf("%s",password); // ���%s����ӿո���Ҫ��������password�Ż��ӡ����һ����ȷ��<Y/N> ?????
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��<Y/N>");
//	ret = getchar();
//
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//	{
//		printf("����ȷ��\n");
//	}
//	return 0;
//}


//�������־ʹ�ӡ�����������޷�Ӧ
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}


//forѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ",i);
//	}
//	return 0;
//}


// while ������ѭ�������
//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int s = 1;
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 10; j++)//j = 0���ʡ�Ծ�ֻ��ӡ10��hehe��j=10֮���һֱΪ10
//		{
//			printf("hehe%d\n",s);
//			s++;
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x=0,y=0;x<2 && y<5;++x,y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//ѭ��Ҫѭ�����ٴ�
//ѭ��0��--�ж�����λ�ø����Ǹ�ֵ��� k=0��Ϊ�٣�ѭ����ִ��
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//		k++;
//	return 0;
//}

//do-whileѭ��
//int main()
//{
//	int i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

//			******** ��ϰ ********
//����n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret = %d\n",ret);
//	return 0;
//}


// �����׳˵ĺ�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d",&n);
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("������׳˺����֣�");
//	scanf("%d",&n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum + ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}

//�������������ҵ�7
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 1;
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i <= sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n",i);
//			break;  // ��дbreak�Ļ�i��һֱ������9.
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//���ַ�����
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int k = 6;
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int mid = (right + left) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//��Ҫ���ӡ�ַ���
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = (sizeof(arr1)/sizeof(arr1[0]))-2; //-2����Ϊ�ַ��������\n
//	int right = strlen(arr1) - 1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000); //ms  # include <windows.h>
//		system("cls"); //��ӡ�������Ļ��#include <stdlib.h>
//		left++;
//		right--;
//	}
//	return 0;
//}


//�������� �������3��
//int main()
//{
//	int i = 0;
//	char password[20] = {0};
//	for (i = 0; i < 3; i++)
//	{
//		printf("���������룺");
//		scanf("%s",password);
//		// if (password == "123456") // == �������������ַ���ʱ�����
//		if(strcmp(password, "123456") == 0)
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//		printf("3������������˳�����\n");
//	return 0;
//}