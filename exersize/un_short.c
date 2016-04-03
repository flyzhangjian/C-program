/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业7
    > 作业号: 习题7

    概述:交换短整数的高四位与低四位
 ************************************************************************/

#include<stdio.h>
#include<limits.h>
unsigned short change(unsigned short x);

int main()
{
    int a,i=0;
    unsigned short n,result;
    scanf("%d",&a);
    for(;i<a;i++)
    {
        scanf("%hu",&n);
        result = change(n);
        printf("%hu\n",result);
    }
    return 0;
}

unsigned short change(unsigned short x)
{
    unsigned short mask=0,mask1=15;
    unsigned short result,temp,temp1,temp2;
    int n=sizeof(unsigned short)*CHAR_BIT,i=0;
    for (n=n-4;n>4;n--)
    {
        int temp;
        temp = 1<<(n-1);
        mask = mask ^ temp;
    }
    temp1 = (x&mask1)<<12;
    temp = x&mask;
    temp2 = (x>>12)&mask1;
    result = temp2^temp^temp1;
    return result;
}
