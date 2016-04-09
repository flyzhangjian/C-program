/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业15
    > 作业号: 习题15

    概述:简易计算器的书写
 ************************************************************************/

#include<stdio.h>
int main()
{
    double a,b,result;
    char c;
    int n,i=0;//声明相关变量
    scanf("%d",&n);//读取控制行数
    for (;i<n;i++)
    {
        scanf("%lf%lf",&a,&b);
        c=getchar();//忽略空格
        c=getchar();
        switch (c)
        {
            case '+':
                result=a+b;
                printf("%.6f+%.6f=%.6f\n",a,b,result);
                break;
            case '-':
                result = a-b;
                printf("%.6f-%.6f=%.6f\n",a,b,result);
                break;
            case '*':
                result = a*b;
                printf("%.6f*%.6f=%.6f\n",a,b,result);
                break;
            case '/':
                if(b==0)
                {
                    printf("Error!No result.\n");
                }
                else
                {
                    result = a/b;
                    printf("%.6f/%.6f=%.6f\n",a,b,result);
                }
                break;
        }//根据操作符的不同进行相应运算并输出
        if(c!='+'&&c!='-'&&c!='*'&&c!='/')
        {
            printf("Error!No result.\n");
        }
    }
    return 0;//结束程序
}
