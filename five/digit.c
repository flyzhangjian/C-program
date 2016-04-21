/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业22
    > 作业号: 习题22

    概述:输出输入数字的第k个数字
 ************************************************************************/

#include<stdio.h>

int digit(long n,int k);/*计算结果*/
int sum_1(long n);/*统计数字长度*/
int main()
{
    long n;
    int k,intt;
    scanf("%ld%d",&n,&k);
    while(n!=0&&k!=0)/*判断进入循环条件*/
    {
        intt = sum_1(n);
        if(k<1 || k>intt)
        {
            printf("digit(%ld,%d) = -1\n",n,k);/*输入不符合条件时输出*/
        }
        else
        {
            intt = digit(n,k);/*获取结果*/
            if(intt>=0)
            printf("digit(%ld,%d) = %d\n",n,k,intt);
            else
            {
                printf("digit(%ld,%d) = %d\n",n,k,-intt);
            }/*根据正负数输出*/
        }
        scanf("%ld%d",&n,&k);/*循环读入*/
    }
    return 0;
}

int sum_1(long n)
{
    int sum=0,temp=1;
    while((n/temp)!=0)
    {
        sum++;
        temp*=10;/*统计数字长度*/
    }
    return sum;
}

int digit(long n,int k)
{
    long i,j=1,result;
    for(i=0;i<k-1;i++)
    {
        j = j*10;   
    }
    result = (n/j)%10;/*得到最后结果*/
    return result;
}
