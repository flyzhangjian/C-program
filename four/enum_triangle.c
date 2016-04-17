/*************************************************************************
	> File Name: enum_triangle.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月17日 星期日 20时40分40秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a[7],i=1,m,n,q;
    for(;i<7;i++)
    {
        a[i]=i;
        for(int j=1;j<7;j++)
        {
            if(a[j]!=i)
            {
                a[j]=j;
                for(int b=1;b<7;b++)
                {
                    if((a[b]!=i)&&(a[b]!=j))
                    {
                        a[b]=b;
                        for(int c=1;c<7;c++)
                        {
                            if((a[c]!=b)&&(a[c]!=i)&&(a[c]!=j))
                            {
                                a[c]=c;
                            for(int d=1;d<7;d++)
                                {
                                    if((a[d]!=b)&&(a[d]!=i)&&(a[d]!=j)&&(a[d]!=c))
                                    {
                                    a[d]=d;
                                    for(int e=1;e<7;e++)
                                        {
                                            if((a[e]!=b)&&(a[e]!=a[i])&&(a[e]!=j)&&(a[e]!=c)&&(a[e]!=d))
                                            {
                                                a[e]=e;
                                            }
                                            if(((m=a[i]+a[j]+a[b])==(n=a[b]+a[c]+a[d]))&&((q=a[d]+a[e]+a[i])==(m=a[b]+a[c]+a[d])))
                                            {
                                                printf("a:%d b:%d c:%d d:%d e:%d f:%d\n",a[i],a[j],a[b],a[c],a[d],a[e]);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
