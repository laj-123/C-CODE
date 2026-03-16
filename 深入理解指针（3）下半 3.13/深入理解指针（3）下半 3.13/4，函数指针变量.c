#include<stdio.h>
void Add(int x, int y)
{
	return x + y;
}
int main()
{
	int (*p)(int,int) = Add;
	//   int (*pf3) (int x, int y)
		//|   |      ------------
		//|   |            |
		//|   |         pf3指向函数的参数类型和个数的交代
		//|  函数指针变量名
		//pf3指向函数的返回类型
	
		//int (*) (int x, int y) //pf3函数指针变量的类型 
	printf("%d\n", p(3, 5));//=(*p)(3,5)
	printf("%d\n", (*p)(3, 5));
	return 0;
}