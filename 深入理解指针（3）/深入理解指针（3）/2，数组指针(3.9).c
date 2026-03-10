#include<stdio.h>
int main()
{
	int arr[] = {1,2,3,4,5};
	int(*p)[10] = &arr;//数组指针，指向数组的指针
	char ch = 'e';
	char* pc = ch;//字符指针，指向字符的指针
//重点（3.10）
	char* ch[5];
	char* (*a)[5] = &ch;

	return 0;
}