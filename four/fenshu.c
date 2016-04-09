/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业13
    > 作业号: 习题13

    概述:判断输入日期是本年的第几天
 ***********************************************************************/

#include<stdio.h>
int main()
{
    int n,i=0;
    float a,b,c,medium;
    scanf("%d",&n);
    for(;i<n;i++)
    {
        scanf("%f%f%f",&a,&b,&c);
        if((a>b&&b>c)||(c>b&&b>a))
        {
            medium = b;
            printf("B:%.1f\n",medium);
        }
        else if((a>c&&c>b)||(b>c&&c>a))
        {
            medium = c;
            printf("C:%.1f\n",medium);
        }
        else
        {
            medium = a;
            printf("A:%.1f\n",medium);
        }
    }
    return 0;
}
