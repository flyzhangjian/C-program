/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业18
    > 作业号: 习题18

    概述:阶乘求和
 ************************************************************************/

#include<stdio.h>
int plus(int x);

int main()
{
    int x,result;/*声明变量*/
    while(scanf("%d",&x),x)/*判断条件*/
    {
        if (x<0)
        {
            printf("Error!\n");
        }
        if (x>0)
        {
            result=plus(x);
            printf("%d\n",result);/*根据不同输入值执行不同函数*/
        }
    }
    return 0;
}

int plus(int x)
{
    int result=0,i=1;
    for(;i<=x;i++)
    {
        int j=1,temp=1;
        for (;j<=i;j++)
        {
            temp *=j ;/*求阶乘*/
        }
        result +=temp;/*对阶乘求和*/
    }
    return result;/*返回结果*/
}   
