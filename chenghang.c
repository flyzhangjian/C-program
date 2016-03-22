/*************************************************************************
	> File Name: chenghang.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月17日 星期四 22时20分07秒
 ************************************************************************/

#include<stdio.h>
int mt_times(int a,int b)

int main()
{
    int a,b;
    printf("请输入数据:");
    scanf("%d%d",&a,&b);
    printf("the result is %d",mt_times(a,b));

    return 0;
}

int mt_times(int a,int b)
{
    int i,j=a;
    for (i=1;i<=b;i++)
    {
        a*=j;
    }

    return a;
}
