//结论：指针的类型决定了，对指针解引⽤的时候有多⼤的权限（⼀次能操作⼏个字节）。
//⽐如： char* 的指针解引⽤就只能访问⼀个字节，⽽ int* 的指针的解引⽤就能访问四个字节。
//代码1
//#include <stdio.h>
//int main()
//{
//	int n = 0x11223344;
//	int* pi = &n;
//	*pi = 0;
//	return 0;
//}

//代码2 
#include <stdio.h>
int main()
{
	int n = 0x11223344;
	char* pc = (char*)&n;
	*pc = 0;
	printf("%x\n", n);
	return 0;
}
