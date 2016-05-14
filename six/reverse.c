/*************************************************************************
	> File Name: reverse.c
	> Author: 
	> Mail: 
	> Created Time: 2016年05月14日 星期六 15时25分16秒
 ************************************************************************/

#include<stdio.h>
void reverse(int n,int *first,int *last);

int main()
{
    int n,p,i,j;
    scanf("%d",&p);
    for(j=0;j<p;j++)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        reverse(n,&a[0],&a[n-1]);
        for(i=0;i<n;i++)
        {
            if(i==0)
            {
                printf("%d",a[i]);
            }
            else
            {
                printf(" %d",a[i]);
            }
        }
        putchar('\n');
    }
    return 0;
}

void reverse(int n,int *first,int *last)
{
    int haha=1;
    int *temp=&haha;
    while(first<last)
    {
        *temp=*first;
        *first = *last;
        *last = *temp;
        first++;
        last--;
    }
}
