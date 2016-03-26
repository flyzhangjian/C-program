/*************************************************************************
	> File Name: da_xiao.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月26日 星期六 19时43分42秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char c;
    while((c=getchar())!='\n')
    {
        c=c^32;
        printf("%c",c);
    }
    printf("\n");
    return 0;
}
