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
		if (input >= 1 && input <= 4)
		{
			int (*arr[5])(int, int) = { 0,Add,Sub,Mul,Div };
			printf("请输入两个数字\n");
			scanf("%d %d", &x, &y);
			ret = arr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出计算器\n");
		}
		else printf("输入错误，请重新输入\n");
	} while (input);
	return 0;
}