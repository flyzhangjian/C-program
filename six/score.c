/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业84
    > 作业号: 习题84

    概述:对成绩进行排序，并输出对应名字
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void score(int a[],int N,char b[][N]);

int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        char c;
        int a[n];
        char b[n][100];
        for(i=0;i<n;i++)
        {
            scanf("%s",b[i]);
            scanf("%d",&a[i]);/*输入对应成绩及名字*/
        }
        score(a,n,b);
        c=getchar();
    }
}

void score(int a[],int N,char b[][100])
{
    int i,j=0,temp,k;
    char c[100];
    for(j=0;j<N;j++)
    {
        i=j;
        for(;i<N;i++)
        {
            if(a[j]<a[i])
            {
                a[j]=a[i]+a[j];
                a[i]=a[j]-a[i];
                a[j]=a[j]-a[i];/*交换两个数*/
                strcpy(c,b[i]);
                strcpy(b[i],b[j]);
                strcpy(b[j],c);
            }
        }/*选择出最da的一个放在前面*/
    }
    putchar('\n');
    for(i=0;i<N;i++)
    {
        printf("%s %d\n",b[i],a[i]);/*输出*/
    }
}
