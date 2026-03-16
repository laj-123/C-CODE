////存放的应该是数组的地址，能够指向数组的指针变量
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;//得到的就是数组的地址，把数组arr的地址交给指针p，把指针
//	//p解引用得到的值即为arr
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ",*p[i]);//arr[i]
//	}
//	return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int*p = arr;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", p[i]);//p[i]=*(p+i)
//	}
//	return 0;
//}