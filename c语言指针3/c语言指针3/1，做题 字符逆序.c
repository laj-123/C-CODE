////在一行上输入一个长度为 
////1≦len(s)≦10^4、由小写字母和空格混合构成的字符串𝑠
////输出描述 :
////输出一个字符串，表示将输入字符串𝑠翻转后的结果
#include<stdio.h>
#include<string.h>
void swap(int len,char*p)
{
    char* end = p + len - 1;
    while (p < end)//重点错误
        //p<end
    {
        char c = 0;
        c = *p;
        *p = *end;
        *end = c;
        p++;
        end--;
    }
}
int main()
{
    char arr[10001]; 
    //scanf("%10000s", arr); 
	fgets(arr, 10001, stdin);
	//int len = sizeof(arr) / sizeof(arr[0]);
    //重点错误
    // 修正2：
    //用strlen获取字符串实际长度（不是数组总大小）
    int len = strlen(arr);
    swap(len,arr);
    printf("%s", arr); 
    return 0;
}