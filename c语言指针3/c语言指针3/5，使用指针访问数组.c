arr(i)=*(arr+i)=*(i+arr)=i(arr)



#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = arr;
	//输入
	for (int i = 0; i < sz; i++)
	{
		scanf("%d",arr+i);
		//scanf("%d",p+i);
		//scanf:接收输入并写入内存
		//arr+i 是一个地址，scanf会把输入的整数写入这个地址
	}
	//输出
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
		//printf("%d ", *(p + i));
	}

}