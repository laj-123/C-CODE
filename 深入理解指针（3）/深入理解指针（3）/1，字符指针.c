//重中之重
//char数组和int数组
// char 数组能 “偷懒”，int 数组必须循环
// 
//%s 是专门为字符串设计的格式符，它的规则是：
//从传入的地址（数组名）开始，逐个读取 char 字符；
//直到读到 '\0'（字符串终止符）才停止。
//而 int 数组没有「终止符」（没有像 '\0' 这样的特殊值标记结束），
// 且 printf 没有「能自动遍历 int 数组」的格式符，
//所以直接输数组名只会输出地址，不会输出元素。

#include<stdio.h>
int main()
{
	const char* p1 = "abcdef";//这里p1指向的是一个字符型常量
	printf("%c\n", *p1); //abcdef
	printf("%s\n", p1); //a
	//1,程序运行时，系统会在「只读内存区」为 "abcdef" 分配空间
	// （存储 'a' 'b' 'c' 'd' 'e' 'f' '\0'）；
	//2,"abcdef" 这个写法，在 C 语言里直接代表这块内存的首地址（'a' 的地址）；
	//3,所以 const char* p = "abcdef"; 本质是：把「字符串首地址」赋值给指针 p 
	//指针存的是合法地址，不是直接存 'a' 'b' 这些字符值！


	/*int *p2= { 1,2,3,4 };
	printf("%d\n", *p2);
	printf("%p\n", p2);*/
	//int 指针不能写 {1,2,3,4}，是因为这是「数值列表」，不是「地址」—
	//指针的核心规则是「只能存地址」，和类型（char/int）无关；

	int arr[] = { 1,2,3,4 };
	int* p = arr;
	printf("%d\n", *arr);//1
	printf("%p\n", arr);//地址

	char arr1[] = "abcdef" ;
	char b='x';
	*arr1 = b;
	printf("%c\n", *arr1);
	printf("%s\n", arr1);
	return 0;
}