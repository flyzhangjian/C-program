/*************************************************************************
	> File Name: ba_huang_hou.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月23日 星期六 22时38分37秒
 ************************************************************************/

#include<stdio.h>
#define N 8
int a[N][N];
int count=0;

void put_hou(int huanghou);
int whether(int huanghou,int i,int j);
void init(int a[][N]);

int main()
{
    extern int count;
    init(a);
    put_hou(1);
    printf("the result is %d\n",count);
    return 0;
}

void put_hou(int huanghou)
{
    extern int a[N][N];
    extern int count;
    int i,j;
    if(huanghou == N+1)
    {
        int i=0,j=0;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                printf("%2d",a[i][j]);
            }
            putchar('\n');
        }
        count++;
        putchar('\n');
        putchar('\n');
    }
    else
    {
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
          {
                if(whether(huanghou,i,j))
                {
                    a[i][j] = huanghou;
                    put_hou(huanghou+1);
                    a[i][j]=0;
                }
            }
        }
    }
}

int whether(int huanghou,int i,int j)
{
    int temp,temp1;
    for(temp=0;temp<N;temp++)
    {
        if(a[i][temp])
        {
            return 0;
        }
    }
    for(temp=0;temp<N;temp++)
    {
        if(a[temp][j])
        {
            return 0;
        }
    }
    for(temp = 0;temp<N;temp++)
    {
        for(temp1=0;temp1<N;temp1++)
        {
            if((temp-i==temp1-j)||(temp - i == j - temp1))
            {
                if(a[temp][temp1])
                {
                    return 0;
                }
            }
        }
    }
    if(huanghou == i+1)
    return 1;
    else
    return 0;
}

void init(int a[][N])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
        {
            a[i][j] = 0;
        }
    }
}
