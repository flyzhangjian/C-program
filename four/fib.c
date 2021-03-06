/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业16
    > 作业号: 习题16

    概述:输出斐波那契数列的前n项
 ************************************************************************/

#include<stdio.h>
void fib(int n);//声明函数

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        if(n>=3)
        {
            fib(n);
        }//判断是否输出斐波那契数列
        else
        {
            printf("Error!\n\n");
        }
        scanf("%d",&n);//循环读入
    }
    return 0;
}

void fib(int n)
{
    int a=1,b=1,temp;
    int i=1,j=1;
    printf("%10d%10d",a,b);
    for(;i<=n-2;i++)
    {
        temp = b;
        a+=b;//进行斐波那契数列的计算
        printf("%10d",a);//输出斐波那契数列
        b=a;
        a=temp;
        if((j+2)%8 ==0 ||(j+2)==n)
        {
            printf("\n");
        }//控制换行
        j++;
    }
    printf("\n");//换行隔开
}
