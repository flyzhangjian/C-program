/*************************************************************************
	> File Name: prime.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月17日 星期日 19时59分52秒
 ************************************************************************/

#include<stdio.h>

void  is_prime(int m,int a[]);

int main()
{
    static int a[100001];
    int i,j,m;
    printf("please input your number :\n");
    scanf("%d",&m);
    for(i=0;i<10001;i++)
    {
        a[i]=1;
    }
    is_prime(m,a);
    for(i=2;i<m+1;i++)
    {
        j = i+1;
        while(!a[j]&&j<m+1)
        {
            j+=1;
        }
        if(j-i==2)
        {
            if(a[i]==1&&a[j]==1)
            printf("%d %d\n",i,j);
        }
    }
    return 0;
}

void is_prime(int m,int a[])
{
    int i,j;
    for(i=2;i<m+1;i++)
    {
        if(a[i])
        {
            for(j=i*i;j<m+1;j=j+i)
            {
                a[j] = 0;
            }
        }
    }
}
