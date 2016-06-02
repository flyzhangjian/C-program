/*************************************************************************
	> File Name: web_name.c
	> Author:张建 
	> Mail: 
	> Created Time: 2016年06月01日 星期三 21时06分07秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
struct web_name{
    char web_name_part[21];
    char web_name_all[41];
    char web[80];
};//声明结构
void change(struct web_name *p,int n);//声明函数

int main()
{
    int n,i;
    scanf("%d",&n);
    struct web_name web_ha[n], *p=web_ha;//声明结构数组，指针操作
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s",(p+i)->web_name_part,(p+i)->web_name_all,(p+i)->web);//输入
    }
    for(i=0;i<n;i++)
    {
        printf("%-20s%-40s%s\n",(p+i)->web_name_part,(p+i)->web_name_all,(p+i)->web);//排序前输出
    }
    putchar('\n');
    change(p,n);//执行排序函数
    for(i=0;i<n;i++)
    {
        printf("%-20s%-40s%s\n",(p+i)->web_name_part,(p+i)->web_name_all,(p+i)->web);//排序后输出
    }
}

void change(struct web_name *p,int n)
{
    int i,j;
    struct web_name temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(((p+i)->web_name_part),((p+j)->web_name_part))>0)
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }//选择排序
        }
    }
}
