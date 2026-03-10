//过去我们有⼀个⼆维数组的需要传参给⼀个函数的时候，我们是这样写的：
#include <stdio.h>
void test(int  a[3][5], int r, int c)
{
	int i = 0;
	int j = 0;
		for (i = 0; i < r; i++)
		{
			for (j = 0; j < c; j++)
			{
				printf("%d ", a[i][j]);
			}
			printf("\n");
		}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
	test(arr, 3, 5);
	return 0;
}


//⼆维数组传参本质上也是传递了地址，传递的是第⼀
//⾏这个⼀维数组的地址
#include <stdio.h>
void test(int (*p)[5], int r, int c)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5}, {2,3,4,5,6},{3,4,5,6,7} };
	test(arr, 3, 5);
	return 0;
}