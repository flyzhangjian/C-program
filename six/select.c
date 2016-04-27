/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业34
    > 作业号: 习题34

    概述:选择排序
 ************************************************************************/

#include<stdio.h>
void select(int a[],int N);/*声明函数*/

int main()
{
    int N,i=0;
    scanf("%d",&N);
    while(N!=0)/*控制循环条件*/
    {
        int a[N];
        for(i=0;i<N;i++)
        {
            scanf("%d",&a[i]);
        }
        select(a,N);/*排序调用*/
        scanf("%d",&N);
    }
    return 0;
}

void select(int a[],int N)
{
    int i,j=0;
    for(;j<N;j++)
    {
        i=j;
        for(;i<N;i++)
        {
            if(a[j]>a[i])
            {
                a[j]=a[i]+a[j];
                a[i]=a[j]-a[i];
                a[j]=a[j]-a[i];/*交换两个数*/
            }
        }/*选择出最小的一个放在前面*/
    }
    for(j=0;j<N;j++)
    {
        if(j==0)
        printf("%d",a[j]);
        else
        printf(" %d",a[j]);
    }
    putchar('\n');/*输出*/
}
