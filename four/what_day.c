/*************************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业14
    > 作业号: 习题14

    概述:判断输入日期是本年的第几天
 ***********************************************************************/

#include<stdio.h>
int judge(int year,int month,int day);//声明函数

int main()
{
    int i=0,n,year,month,day,result;//声明变量
    scanf("%d",&n);
    for(;i<n;i++)//控制输入行数
    {
        scanf("%d%d%d",&year,&month,&day);
        result = judge(year,month,day);//计算结果
        printf("%d\n",result);//输出结果
    }
    return 0;
}

int judge(int year,int month,int day)
{
    int i=0,result=0;
    int monthname1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    int monthname2[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    if((year%400==0)||(year%4==0&&year%100!=0))//判断是否是闰年
    {
        for(;i<month-1;i++)
        {
            result = result + monthname1[i];        
        }
        result = result + day;
        return result;//计算并返回结果
    }
    else
    {
        for(;i<month-1;i++)
        {
            result = result + monthname2[i];
        }
        result = result +day;
        return result;
    }
}
