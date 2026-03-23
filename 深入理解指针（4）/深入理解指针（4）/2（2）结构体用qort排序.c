//用我自己的话总结:返回值为负的话就是指针P1排前面 
//返回值为零的话就是相等,返回值为正的话就是指针P2放前面 
//不需要关心它的遍历顺序 
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>  // qsort需要这个头文件，必须加

// 定义学生结构体
struct stu
{
	char name[20];
	int age;
};

// 按名字排序的比较函数（strcmp返回值：小于0/等于0/大于0，符合qsort要求）
int cmp_stu_name(const void* p1, const void* p2)
{
	// void*强制转为struct stu*，再用->访问成员
	return strcmp(((struct stu*)p1)->name, ((struct stu*)p2)->name);
}

// 按年龄排序的比较函数（返回差值：正/负/0，符合qsort要求）
int cmp_stu_age(const void* p1, const void* p2)
{
	return ((struct stu*)p1)->age - ((struct stu*)p2)->age;
}

// 修正：函数参数先写类型，再写变量名（传入结构体数组）
void test1(struct stu s[], int sz)  // 错误1修复：struct stu s[] 接收结构体数组
{
	printf("按名字排序结果：");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%s ", s[i].name);
	}
	printf("\n");
}

// 修正：同理，参数类型+变量名
void test2(struct stu s[], int sz)  // 错误1/4修复
{
	printf("按年龄排序结果：");
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", s[i].age);
	}
	printf("\n");
}

int main()
{
	struct stu s[] = { {"zhangsan",20},{"lisi",22},{"wangwu",18} };
	int sz = sizeof(s) / sizeof(s[0]);

	// 错误2修复：第三个参数是每个结构体元素的大小，不是int
	// 先测试按名字排序
	qsort(s, sz, sizeof(struct stu), cmp_stu_name);
	test1(s, sz);  // 错误3修复：直接传结构体数组s，不用强转

	// 重新初始化数组（避免被上一次排序覆盖，才能测试年龄排序）
	struct stu s2[] = { {"zhangsan",20},{"lisi",22},{"wangwu",18} };
	// 按年龄排序
	qsort(s2, sz, sizeof(struct stu), cmp_stu_age);
	test2(s2, sz);  // 错误4修复：传s2数组

	return 0;
}