/*************************************************************************
	> File Name: pack.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月26日 星期六 20时27分07秒
 ************************************************************************/

#include<stdio.h>
int pack(int year,int month,int day);
int unpacked(int temp,int a[]);

int pack(int year, int month,int day)
{
    int temp;
    temp=day<<11 | month<<7 | year;
    return temp;
}

int unpacked(int temp,int a[])
{
    int x=0x007f,y=0x000f;
    a[2]=temp>>11;
    a[1]=(temp>>7)&y;
    a[0]=temp&x;
}

int main()
{
    int year,month,day,temp;
    int a[3],i=0;
    scanf("%d %d %d",&year,&month,&day);
    temp=pack(year,month,day);
    printf("%d\n",temp);
    unpacked(temp,a);
    for(;i<=2;i++)
    printf("%d ",a[i]);
    printf("\n");
    return 0;
}
