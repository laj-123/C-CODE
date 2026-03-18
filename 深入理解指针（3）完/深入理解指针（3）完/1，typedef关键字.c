//typedef是用来对类型进行重命名的
typedef unsigned int uint;
typedef int* ptr;
//特殊的情况
//数组指针和函数指针
typedef int(*parr)[10];//int(*)[5] ,需要重命名为 parr

typedef void(*pf_t)(int);//void(*)(int) 类型重命名为 pf_t
