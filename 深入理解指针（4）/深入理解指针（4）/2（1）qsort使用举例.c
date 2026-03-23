//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
////qsort默认排序顺序为升序
//// 
////1,用qsort函数排序整型数组
//int cmp_int(const void* p1, const void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//void test1(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = { 5,4,6,8,2,1,3,7,10,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(int), cmp_int);//注意是sizeof(int)，不是sizeof(arr)
//	test1(arr,sz);
//	return 0;
//}