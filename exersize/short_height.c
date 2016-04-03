/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业6
    > 作业号: 习题6

    概述:输出短整数的高字节与低字节
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,i=0;
    unsigned short x;
    unsigned short mask=(1<<9)-1;
    scanf("%d",&n);
    for(;i<n;i++)
    {
        unsigned short temp;
        scanf("%hu",&x);
        temp = (x>>8)&mask;
        putchar(temp);
        putchar(44);
        temp = x&mask;
        putchar(temp);
        putchar('\n');
    }
    return 0;
}

