/*************************************************************************
	> File Name: IP.c
	> Author: 
	> Mail: 
	> Created Time: 2016年05月07日 星期六 14时12分22秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i;
    unsigned long int n,*intarray;
    unsigned char *p;
    scanf("%lu",&n);
    intarray = &n;
    p = (unsigned char *)intarray;
    for(i=0;i<4;i++)
    {
        if(i==3)
        {
            printf("%d",*p);
        }
        else 
        {
            printf("%d.",*p);
        }
        p++;
    }
    putchar('\n');
    return 0;
}
