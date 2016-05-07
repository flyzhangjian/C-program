/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业82
    > 作业号: 习题82

    概述:N人保数问题
 ************************************************************************/

#include<stdio.h>
int check(int a[],int temp,int n);
int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)/*判断进入循环条件*/
    {
        int a[n],j=0,temp=1;
        while(j<=n-2)
        {
            for(i=0;i<n;i++)
            {
                a[i]=1;
            }/*把所有数组元素设为1*/
            while(j<=n-2)
            {
                j=0;
                temp = check(a,temp,n);/*报数函数*/
                for(i=0;i<n;i++)
                {
                    if(!a[i])
                    {
                        j++;
                    }/*统计是3的倍数的人的个数*/
                }
            }
        }
        for(j=0;j<n;j++)
        {
            if(a[j])
            printf("%d\n",j+1);
        }/*输出*/
    }
    return 0;
}

int check(int a[],int temp,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i])
        {
            if(temp%3==0)
            {
                a[i]=0;
            }/*如果这个人报的数为3的倍数，那么将对应的数组元素变为0*/
            temp++;
        }
    }
    return temp;
}
