//转移表就是函数指针数组
//具体：写一个计算器，拥有进行两个数的加减乘除的功能
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}


int main()
{
	int x, y;
	int input = 0;
	int ret = 0;
	do
	{
		printf("***************\n");
		printf("1:Add     2:Sub\n");
		printf("3:Mul     4:Div\n");
		printf("0:exit         \n");
		printf("please enter:  \n");
		printf("***************\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("请输入两个整数\n");
			scanf("%d %d", &x, &y);
			ret = Add(x, y);
			printf("%d\n", ret);
			break;
		case 2:
			printf("请输入两个整数\n");
			scanf("%d %d", &x, &y);
			ret = Sub(x, y);
			printf("%d\n", ret);
			break;
		case 3:
			printf("请输入两个整数\n");
			scanf("%d %d", &x, &y);
			ret = Mul(x, y);
			printf("%d\n", ret);
			break;
		case 4:
			printf("请输入两个整数\n");
			scanf("%d %d", &x, &y);
			ret = Div(x, y);
			printf("%d\n", ret);
			break;
		case 0:
			printf("你已退出游戏\n");
			break;
		default:
			printf("输入错误，请输入正确的值\n");
			break;
		}
	}
	while (input);
	return 0;
}