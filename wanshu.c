/*************************************************************************
	> File Name: wanshu.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月16日 星期三 14时52分09秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int x,i,j=0;
    printf("please input your number:\n");
    scanf("%d",&x);
    for(i=1;i<x;i++)
    {
        if(x%i==0)
        {
            j=i+j;
        }
    }
    if (j==x)
    printf("1\n");
    else
    printf("0\n");
    
    return 0;
}
