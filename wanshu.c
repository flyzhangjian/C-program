/*************************************************************************
	> File Name: wanshu.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月16日 星期三 14时52分09秒
 ************************************************************************/

#include<stdio.h>
int wanshu(int x)
{
    int i=1,j=0;  
    while(i<x)
    {
        if(x%i==0)
        {
            j=i+j;
        }
        i++;   
    }
    if(j==x)
    return 1;
    else
    return 0;
}


int main()
{
    int x;
    for (x=1;x<=1000;x++)
    {
        if(wanshu(x)==1)
        printf("%d\n",x);
    }
    return 0;
}
