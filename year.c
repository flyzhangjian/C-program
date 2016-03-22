/*************************************************************************
	> 文件名: year.c
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言第2章作业
    > 作业号: 习题4

    概述:将整数移位，并输出。
 ************************************************************************/

#include<stdio.h>
enum month {January,February,March,April,May,June,July,August,September,October,November,December};

int main()
{
    enum month monthes;
    int year;
    char *monthname1[]={"January,31","February,29","March,31","April,30","May,31","June,30","July,31","August,31","September,30","October,31","November,30","December,31"};
    char *monthname2[]={"January,31","February,28","March,31","April,30","May,31","June,30","July,31","August,31","September,30","October,31","November,30","December,31"};
    scanf("%d",&year);
    if((year%400==0)||(year%4==0&&year%100!=0))
    {
        for(monthes=January;monthes<=December;monthes++)
        {
            printf("%s\n",monthname1[monthes]);
        }
    }
    else
    {
        for(monthes=January;monthes<=December;monthes++)
        {
            printf("%s\n",monthname2[monthes]);
        }
    }
    return 0;
}
