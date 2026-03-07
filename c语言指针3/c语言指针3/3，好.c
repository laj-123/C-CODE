//#include<stdio.h>
//
//// 反转函数（你的核心代码，完全保留）
//void swap(int* p, int count)
//{
//	int* left = p, * right = p + count - 1;
//	while (left < right)
//	{
//		int c = *left;
//		*left = *right;
//		*right = c;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10001];
//	int count = 0, num;
//	int ch; // 用来跳过非数字字符
//
//	// 核心优化：先跳过所有非数字字符，再读数字
//	while (1)
//	{
//		// 跳过逗号、空格、回车等所有非数字字符
//		while ((ch = getchar()) != EOF && !isdigit(ch));
//
//		// 如果读到EOF（Ctrl+Z），直接终止输入
//		if (ch == EOF) break;
//
//		// 把刚读到的数字字符塞回输入流，让scanf读完整数字
//		ungetc(ch, stdin);
//
//		// 读取完整整数，存入数组
//		if (scanf("%d", &num) == 1)
//		{
//			arr[count++] = num;
//		}
//	}
//
//	// 反转数组
//	swap(arr, count);
//
//	// 完美输出（无末尾空格，清晰分隔）
//	if (count > 0)
//	{
//		printf("%d", arr[0]);
//		for (int i = 1; i < count; i++)
//		{
//			printf(" %d", arr[i]);
//		}
//	}
//
//	return 0;
//}