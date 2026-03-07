//传值调⽤和传址调⽤
//学习指针的⽬的是使⽤指针解决问题，那什么问题，// ⾮指针不可呢？例如：写⼀个函数，交换两个整型变量的值//#include<stdio.h>
//void swap(int* pa, int* pb)
//{
//	int c=0;
//	c = *pa;
//	*pa = *pb;
//	*pb = c;
//}
//int main()
//{
//	int a = 10, b = 20;
//	printf("初始的情况是：a=%d,b=%d\n", a, b);
//	swap(&a, &b);
//	printf("变换后情况是：a=%d,b=%d\n", a, b);
//	return 0;
//}