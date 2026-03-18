#include<stdio.h>
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}


int main()
{
	int (*pf1)(int,int) = Add;
	int (*pf2)(int,int) = Sub;
	int (*pf3)(int,int) = Mul;
	int (*pf4)(int,int) = Div;
	类型都为int (*)(int,int)，用一个函数指针数组来接收
	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };
	for (int i = 0; i < 4; i++)
	{
		int ret = 0;
		printf("%d\n", parr[i](8,2));
	}
	return 0;
}