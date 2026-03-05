#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	while (p < arr + sz)
	{
		printf("%d", *p);
	}
	return 0;
}