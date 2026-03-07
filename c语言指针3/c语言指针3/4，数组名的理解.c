//其实数组名就是数组⾸元素(第⼀个元素)的地址是对的，但是有两个例外：

//1,sizeof(数组名)，sizeof中单独放数组名，这⾥的数组名表⽰整个数组，计算的是整个数组的⼤⼩，
//单位是字节

//2,& 数组名，这⾥的数组名表⽰整个数组，取出的是整个数组的地址（整个数组的地址和数组⾸元素
//的地址是有区别的）
//除此之外，任何地⽅使⽤数组名，数组名都表⽰⾸元素的地址
#include<stdio.h>	
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };	
	printf("&arr[0]=%p\n", &arr[0]);
	printf("arr    =%p\n", arr);
	printf("&arr   =%p\n", &arr);
	printf("\n");
	printf("&arr[0]=%p\n", &arr[0]+1);
	printf("arr    =%p\n", arr+1);
	printf("&arr   =%p\n", &arr + 1);

	return 0;	
}