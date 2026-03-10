//函数指针变量应该是⽤来存放函数地址的，未来通过地址能够调⽤函数的。
//以函数是有地址的，函数名就是函数的地址，当然也可以通过&函数名的方式获得函数地址
#include <stdio.h>
void test()
{
	printf("hehe\n");
}
void (*pf1)() = &test;
void (*pf2)() = test;
int Add(int x, int y)
{
	return x + y;
}
int(*pf3)(int, int) = Add;
int(*pf3)(int x, int y) = &Add;//x和y写上或者省略都是可以的