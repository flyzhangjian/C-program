/*************************************************************************
	> File Name: add.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月09日 星期三 15时10分44秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i,x,positive=0,negative=0;
    for(i=0;i<10;i++)
    {
        printf("please input your number:");
        scanf("%d",&x);
        if(x<0)
        {
            negative++;
        }
        else if(x>0)
        {
            positive++;
        }
        else
        {
            printf("the number is wrong!");
        }
    }
    printf("negative=%-5d positive=%-5d",negative,positive);

    return 0;
}

