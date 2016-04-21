/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业20
    > 作业号: 习题20

    概述:阶乘求和
 ************************************************************************/

#include<stdio.h>
double plus(int x);

int main()
{
    int x;
    double result;/*声明变量*/
    while(scanf("%d",&x),x)/*判断条件*/
    {
        if (x<0)
        {
            printf("Error!\n");
        }
        if (x>0)
        {
            result=plus(x);/*计算阶层倒数之和*/
            printf("s = %.8f\n",result);/*根据不同输入值执行不同函数*/
        }
    }
    return 0;
}

double plus(int x)
{
    double result=0;
    int i=1;
    for(;i<=x;i++)
    {
        int j=1;
        double temp=1.0;
        for (;j<=i;j++)
        {
            temp *=j ;/*求阶乘*/
        }
        temp = 1/temp;
        result +=temp;/*对阶乘求和*/
    }
}   
