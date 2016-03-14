/*************************************************************************
	> File Name: compare.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月13日 星期日 09时46分11秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a,i;
    char ch;
    scanf("%d",&a);
    do 
    {
        scanf("%d",&i);
        if(a<=i)
        {
            a=i;
        }
    }while((ch=getchar())!='\n');
    printf("the max number is %d\n",a);
    return 0;
}
