/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业5
    > 作业号: 习题5

    概述:输出16进制数对应的整数
 ************************************************************************/

#include<stdio.h>
int main()
{
    int n,i=0;
    scanf("%d",&n);
    n=n*2;
    for(;i<n;++i)
    {
        char c;
        c=getchar();
        if(c>='0'&&c<='9')
        {
            c = c - '0';
            printf("%d\n",c);
        }
        else if(c>='a'&&c<='f')
        {
            c=c-87;
            printf("%d\n",c);
        }
        else if(c>='A'&&c<='F')
        {
            c=c-55;
            printf("%d\n",c);
        }
        else if(c=='\n')
        {
            ;
        }
        else
        {
            printf("%d\n",c);
        }
    }
    return 0;
}