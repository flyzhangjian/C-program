/*************************************************************************
	> File Name: shuixianhua.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月16日 星期三 14时34分37秒
 *************************************************************************/

#include<stdio.h>
int main()
{
    int i,k,l,j;
    for(i=100;i<=999;i++)
    {
        j=i/100;
        k=(i-j*100)/10;
        l=i%10;
        if(i==j*j*j+k*k*k+l*l*l)
        printf("%-5d\n",i);
    }
    return 0;
}
