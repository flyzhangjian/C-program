/*************************************************************************
	> File Name: end.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月20日 星期日 19时05分07秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int c,n,k;
    printf("please input a text end of Ctal + Z:\n");
    n=k=0;
    while((c=getchar())!=EOF)
    {
        n++;
        if(c=='\n')
        k++;
    }
    printf("nc=%d nl=%d",n,k);
    return 0;
}
