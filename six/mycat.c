/*************************************************************************
	> File Name: mycat.c
	> Author: 
	> Mail: 
	> Created Time: 2016年05月13日 星期五 14时20分07秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
void mycat(char a[][100],int n);

int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        char a[n][100];
        char c;
        int i;
        c=getchar();
        for(i=0;i<n;i++)
        {
            fgets(a[i],100,stdin);
        }
        mycat(a,n);
        scanf("%d",&n);
    }
    return 0;
}

void mycat(char a[][100],int n)
{
    char *p;
    int i;
    p=a[0];
    while(*p!='\n')
    {
        p++;
    }
    for(i=1;i<n;i++)
    {
        char *temp;
        temp=a[i];
        while(*temp!='\n')
        {
            *p = *temp;
            p++;
            temp++;
        }
    }
    *p='\0';
    printf("%s\n",a[0]);
}
