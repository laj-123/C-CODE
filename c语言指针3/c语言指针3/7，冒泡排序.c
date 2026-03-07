#include<stdio.h>
int count = 0;
void bubble_sort(int* arr, int sz)
{
	for (int i = 0; i < sz-1; i++)//控制趟数
	{
		int flag = 0;
		for (int j = 0; j < sz - 1 - i; j++)//控制每趟进行的排序次数
		{
			count++;
			if(arr[j]>arr[j+1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}

int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", arr+i);
	}
	bubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\ncount=%d\n", count);
	return 0;
}