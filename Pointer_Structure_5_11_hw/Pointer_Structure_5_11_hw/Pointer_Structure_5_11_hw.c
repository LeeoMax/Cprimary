#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>
//�ַ�������
//дһ����������������һ���ַ��������ݡ�

//����һ
//void reverse(char* arr)
//{
//	char* start = arr;
//	while ((*arr) != '\0')
//	{
//		arr++;
//	}
//	char* end = arr-1;
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//
//}

//������
//void reverse(char* arr)
//{
//	char* start = arr;
//	char* end = arr+strlen(arr)-1;
//	while (start < end)
//	{
//		char tmp = *start;
//		*start = *end;
//		*end = tmp;
//		start++;
//		end--;
//	}
//
//}

//int main()
//{
//	//char arr[] = "abcdef";
//	char arr[] = "I am a student";
//	printf("����ǰ:%s\n", arr);
//	reverse(arr);
//	printf("�����:%s\n", arr);
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------

//��ӡ����
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	printf("������Ҫ��ӡ�������ϰ벿�ֵ�����:>");
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1; i++)
//	{
//		//��ӡһ��
//		//��ӡ�ո�
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line - i - 1)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//������
//int main()
//{
//	int line = 0;
//	int i = 0;
//	int j = 0;
//	printf("������Ҫ��ӡ������������:>");
//	scanf("%d", &line);
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < abs(line / 2 - i); j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < line - 2 * abs(line / 2 - i); j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//
//	return 0;
//}

//������
//int main()
//{
//    char arr[] = "             ";  //����Ϊ��
//
//    int i = 0;
//    int j = 0;
//    //��ӡ�ϰ벿��
//    for (i = (int)(strlen(arr) / 2), j = (int)(strlen(arr) / 2); i >= 0 && j <= (int)strlen(arr); i--, j++)
//    {
//        arr[i] = '*';
//        arr[j] = '*';
//        printf("%s\n", arr);
//    }
//    //��ӡ�°벿��
//    for (i = 0, j = (int)(strlen(arr) - 1); i < (int)(strlen(arr) / 2) && j > (int)(strlen(arr) / 2); i++, j--)
//    {
//        arr[i] = ' ';
//        arr[j] = ' ';
//        printf("%s\n", arr);
//    }
//
//	return 0;
//}

//-------------------------------------------------------------------------------------------------------------------

//����ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣�

int main()
{
	//int money = 20;//20ԪǮ
	int money = 0;
	printf("������Ǯ��:>");
	scanf("%d", &money);
	int empty_bottle = money;//��ƿ
	int total = money;//����ˮ����
	int new_bottle = 1;
	int surplus_bottle = 0;
	while (new_bottle!=0)
	{
		new_bottle = empty_bottle / 2;//��һ�εĻ�������ˮ
		surplus_bottle = empty_bottle % 2;//�ϴλ���ʣ��ĵľɿ�ƿ
		empty_bottle = new_bottle+ surplus_bottle;//��ǰ�Ŀ�ƿ��
		total = total+new_bottle;	
	}
	printf("��%dԪ�����Ժ�%dƿ��ˮ",money,total);

	return 0;
}





