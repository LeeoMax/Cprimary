#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
//strlen实现
//模拟实现库函数strlen

//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while ((*str) != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char str[] = "abcdef";
//	int len = my_strlen(str);
//	printf("Length:%d\n", len);
//	return 0;
//}

size_t my_strlen(const char* str)
{
	assert(str != NULL);
	int count = 0;
	while ((*str) != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char str[] = "abcdef";
	size_t len = my_strlen(str);
	printf("Length:%u\n", len);
	return 0;
}

//----------------------------------------------------------------------------------------------------------------------

//strcpy实现
//模拟实现库函数strcpy
//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	
//	while ((*src) != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//	
//}

//void my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//
//}
//int main()
//{
//	char str1[] = "abcdef";
//	char str2[] = "hello";
//	//my_strcpy(str1, str2);
//	//printf("%s\n", str1);
//	printf("%s\n", my_strcpy(str1, str2));
//	return 0;
//}