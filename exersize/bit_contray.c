/*************************************************************************
	> 文件名: add_1_to_100.c
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业64
    > 作业号: 习题64

    概述:将特定的二进制位数反转，并输出。
 ************************************************************************/

#include<stdio.h>
#include<limits.h>/* 头文件*/ 
void print_bit(int x);/**/

int main()
{
    int x,p,n,result,mask,bit,i,temp=0;/*声明变量*/
    bit = sizeof(int) * CHAR_BIT;/*取int型的bit数*/
    scanf("%d%d%d",&x,&p,&n);
    print_bit(x);/*输出原二进制数*/
    for(i=0;i<n;i++)
    {
        mask = 1 << p;
        temp = mask ^ temp;
        p+=1;
    }
    result = temp ^ x;/* 得到结果*/
    print_bit(result);/*输出反转二进制数*/

    return 0;
}

void print_bit(int x)
{
    int i;
    int n,mask;
    n = sizeof(int) * CHAR_BIT;
    mask = 1 << (n-1);
    for (i=1;i<=n;i++)
    {
        putchar(!(mask&x)?'0':'1');
        x <<= 1;
        if (!(i % CHAR_BIT) && i<n)
        {
            putchar(' ');
        }/*判断何时输出空格*/
    }
    putchar('\n');
}
