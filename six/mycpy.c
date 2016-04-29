/************************************************************************
    > 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业37
    > 作业号: 习题37

    概述:将字符串的前n个字符复制到另一个数组中去
 ************************************************************************/

#include<stdio.h>
void mycpy(char a[],char b[],int front);/*声明函数*/

int main()
{
    int count,i=0,front;
    char a[1000],b[1000],c;
    scanf("%d",&count);
    c = getchar();/*忽略换行，防止对读取字符串造成影响*/
    while(i<count)
    {
        fgets(a,1000,stdin);/*读取字符串*/
        scanf("%d",&front);
        c = getchar();/*忽略换行*/
        mycpy(b,a,front);
        printf("%s\n",b);/*输出*/
        i++;
    }
    return 0;
}

void mycpy(char a[],char b[],int front)
{
    int i = 0;
    for(;i<front;i++)
    {
        a[i] = b[i];/*复制前front个数到另一个数组中*/
    }
    a[i] = '\0';/*添加字符串结束标志*/
}
