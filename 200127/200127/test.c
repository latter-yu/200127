#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void change(int *p, int len)
{
	int *q = p + len - 1;
	int temp;
	while (p < q)
	{
		while ((*p & 1) == 1)
		{
			p++;
		}
		while ((*q & 1) == 0)
		{
			q--;
		}
		if (p < q)
		{
			temp = *p;
			*p = *q;
			*q = temp;
		}
	}
	return;
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int len = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	change(arr, len);
	for (i; i < len; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n");

	return 0;
}

#include<stdio.h>
int main()
{
	char arr[20] = { 0 };
	char *p = "this is cool";
	strcpy(arr, p);
	printf("%s\n", arr);
	return 0;
}

#include<stdio.h>
#include<assert.h>

int my_strlen(const char *str)
{
	int count = 0;
	assert(NULL != str);
	while (*str)
	{
		count++;
		str++;
	}
	return count;
}
int  main()
{
	char  arr[] = "hello world";
	int ret = my_strlen(arr);
	printf("%d\n", ret);
	return 0;
}
