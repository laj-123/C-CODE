//指针减去指针
//两个指针相减得到的是两个指针之间的元素个数
#include<stdio.h>
int my_strlen(const char* s)
{
		const char* p = s;
		while (*p)
			p++;
		return p - s;
}
int main()
{
		printf("%d\n", my_strlen("abc"));
		return 0;
}


//#include <stdio.h>
//#include<string.h>
//int main()
//{
//	char a[] = "hellogirl";
//	int len = strlen(a);
//	printf("%d", len);
//	return 0;
//}

#include <stdio.h>
//int my_strlen(char*p)
//{
//	char* end = p;
//	int count = 0;
//	while (*end)
//	{
//		end++;
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int my_strlen(char* b);
//	char a[] = "hellogirl";
//	int len = my_strlen(a);
//	printf("%d", len);
//	return 0;
//}

