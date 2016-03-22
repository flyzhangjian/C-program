/*************************************************************************
	> File Name: lainxi.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月14日 星期一 11时13分27秒
 ************************************************************************/

#include<stdio.h>

void change();
int add();

int main()
{
    char s[20];
    printf("请输入你的测试代码：");
    scanf("%s",s);
    printf("%d\n",add(s));
    change(s);
    printf("%s\n",s);
}


void change(char s[])
{
    int j=0,temp,i;
    i=add(s)-1;
    while (j<i)
    {
        temp=s[j];
        s[j]=s[i];
        s[i]=temp;
        j++;
        i--;
    }
}

int add(char s[])
{
    int i=0;
    while (s[i]!='\0')
    {
        i++;
    }
    return i;
}

