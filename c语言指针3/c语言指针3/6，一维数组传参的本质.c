//数组传参传递的是数组⾸元素的地址

#include<stdio.h>
void test(int arr[10])//// 形参写arr[10],实际是int* arr,arr在函数内部被当作指针使用，
//sizeof(arr)计算的是指针的大小，而不是数组的大小
{
	int sz2 = sizeof(arr) / sizeof(arr[0]);//1
	printf("sz2=%d\n", sz2);
}
//x86 架构下，32 位系统中，
// 指针占 4 字节（32 位），
// 64 位系统中，指针占 8 字节（64 位）。

//CPU 的地址总线宽度为 32 位，一次能处理 32 位的二进制数据；
//内存地址用32 个二进制位（bit） 来编号，可寻址的地址范围是 0 ~2 ^ 32 - 1（约 4GB 内存）。
// 二进制位数 → 字节数的换算
//计算机中：
//1 字节（Byte） = 8 位（bit）
//32 位二进制地址需要的字节数 = 32 ÷ 8 = 4字节
//所以：32 位系统下，任何类型的指针都占 4 字节，
// 哪怕是void * 、int * 、char * ，大小都是 4 字节。

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz1 = sizeof(arr) / sizeof(arr[0]);//10
	printf("sz1=%d\n", sz1);
	test(arr);
	return 0;
}