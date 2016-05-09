/*************************************************************************
	> File Name: zui.c
	> Author: 
	> Mail: 
	> Created Time: 2016年05月07日 星期六 15时14分44秒
 ************************************************************************/

#include<stdio.h>
int *max_min(int a,int b,int *p[2]);
int main()
{
    int m,n;
    int *p[2];
    printf("please input :");
    scanf("%d%d",&m,&n);
    max_min(m,n,p);
    printf("max = %d\n min = %d\n",*p[0],*p[1]);
    return 0;
}
int *max_min(int a,int b,int *p[2])
{
    static int max,min; //声明变量
        if(a%b==0)
        {
            max = a;
            min = b;
            p[0] = &max;
            p[1] = &min;
        }
        else if(b%a == 0)
        {
            max = b;
            min = a;
            p[0] = &max;
            p[1] = &min;
        }//处理两个数能够除尽的情况，优化算法
        else
        {
            if(a>b)
            {
                min=b,max=a;
                while(a%min!=0 || b%min != 0 )
                {
                    min--;
                }
                p[1]=&min;
                while(max%a!= 0||max%b!=0)
                {
                    max++;
                }
                p[0]=&max;//寻找最大公约数以及最小公倍数
            }
            else if(a<b)
            {
                min=a,max=b;
                while(a%min!=0 || b%min != 0 )
                {
                    min--;
                }
                p[1] = &min;
                while(max%a!=0||max%b!=0)
                {
                    max++;
                }
                p[0]=&max;
            }
        }
}

