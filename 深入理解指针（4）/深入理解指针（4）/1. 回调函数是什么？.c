//#define _CRT_SECURE_NO_WARNINGS//宏定义必须放在最开头
//#include<stdio.h> 
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//void cal(int (*ptr)(int, int))
//{
//	int x,y;
//	int ret = 0;
//	printf("请输入两个数字\n");
//	scanf("%d %d", &x, &y);
//	ret = ptr(x, y);
//	printf("%d\n", ret);
//}
//
//int main()
//{
//	int input = 0;
//	do
//	{
//		printf("********************\n");
//		printf("***1:add    2:sub***\n");
//		printf("***3:mul    4:div***\n");
//		printf("***0:exit        ***\n");
//		printf("***请选择：      ***\n");
//		printf("********************\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			cal(add);
//			break;
//		case 2:
//			cal(sub);
//			break;
//		case 3:
//			cal(mul);
//			break;
//		case 4:
//			cal(div);
//			break;
//		case 0:
//			printf("退出程序\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}