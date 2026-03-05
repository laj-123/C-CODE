//#include<stdio.h>
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	int* p;
//	for (p = a; p < a+sz;)
//	{
//		printf("%d ", *p++);
//	}
//	return 0;
//}

//#include <stdio.h>
////指针+- 整数 
//int main()
//
//{
//	
//		int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//		int* p = &arr[0];
//		int i = 0;
//		int sz = sizeof(arr) / sizeof(arr[0]);
//		for (i = 0; i < sz; i++)
//		{
//				printf("%d ", *(p + i));//p+i 这⾥就是指针+整数 
//		}
//		return 0;
// }