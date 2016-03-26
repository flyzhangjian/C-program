/*************************************************************************
	> File Name: empty.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月23日 星期三 14时01分15秒
 ************************************************************************/

#include<stdio.h>
int add(char s[]);

int main()
{
    char a[20];
    int i;
    scanf("%s",a);
    printf("%s",a);
    for (i=0;i<=19;i++)
    {
        if (a[i]=' ')
        {
            a[i]='\0';
        }
    }
    printf("%s\n",a);
    return 0;
}

int add(char s[])
{
    int i=0;
    while (s[i]!='\0')
    {
        i++;
    }
    return i;
}

