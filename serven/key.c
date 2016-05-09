/*************************************************************************
	> File Name: key.c
	> Author: 
	> Mail: 
	> Created Time: 2016年05月07日 星期六 15时46分47秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char c;
    int result;
    while(c=getchar()!='\n')
    {
        check(c);
    }
    printf("%d\n",result);
}
