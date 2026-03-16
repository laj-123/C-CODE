//⼆维数组传参本质上也是传递了地址，传递的是第⼀⾏这个⼀维数组的地址
//#include<stdio.h>
//void Print(int (*p)[5], int a, int b)//int arr[3][5]
//{
//	int i = 0;
//	for (i = 0; i < a; i++)
//	{
//		int j = 0;
//		for (j = 0; j < b; j++)
//		{
//			printf("%d ", *(*(p + i) + j));//arr[3][5]
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print(arr, 3, 5);
//	return 0;
//}