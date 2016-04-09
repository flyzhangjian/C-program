/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业17
    > 作业号: 习题17

    概述:阶乘求和
 ************************************************************************/

#include<stdio.h>

int main()
{
    int a,b,max,min; //声明变量
    scanf("%d%d",&a,&b);
    while(a!=0 || b!=0) //判断进入循环条件
    {
        int i,j;
        if(a%b==0)
        {
            max = a;
            min = b;
            printf("%d %d\n",min,max);
        }
        else if(b%a == 0)
        {
            max = b;
            min = a;
            printf("%d %d\n",min,max);
        }//处理两个数能够除尽的情况，优化算法
        else
        {
            if(a>b)
            {
                i=b,j=a;
                while(a%i!=0 || b%i != 0 )
                {
                    i--;
                }
                printf("%d",i);
                while(j%a!= 0||j%b!=0)
                {
                    j++;
                }
                printf(" %d\n",j);//寻找最大公约数以及最小公倍数
            }
            else if(a<b)
            {
                i=a,j=b;
                while(a%i!=0 || b%i != 0 )
                {
                    i--;
                }
                printf("%d",i);
                while(j%a!=0||j%b!=0)
                {
                    j++;
                }
                printf(" %d\n",j);
            }
        }
        scanf("%d%d",&a,&b);//循环读入数据
    }
    return 0;
}
