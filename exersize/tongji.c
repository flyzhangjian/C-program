/*************************************************************************
	> File Name: tongji.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月26日 星期六 11时59分27秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int c,i,j,k;
    i=0;
    j=0;
    k=0;
    while((c=getchar())!=EOF)
    {
        if(c=='\n')
            i++;
        else if(c==' ')
            j++;
         else if(c=='\t')
            k++;
    }
    printf("换行符：%d\n",i);
    printf("空格：%d\n",j);
    printf("制表符：%d\n",k);

    return 0;
}
