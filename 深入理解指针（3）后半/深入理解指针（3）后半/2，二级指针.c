#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 5;
	int* p = &a;
	int** pa = &p;
	printf("%d\n",**pa);
	**pa = 20;
	printf("%d",a);
	return 0;
}