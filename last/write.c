/*************************************************************************
	> File Name: write.c
	> Author: 
	> Mail: 
	> Created Time: 2016年06月07日 星期二 19时02分40秒
 ************************************************************************/

#include<stdio.h>
#include<ctype.h>

void change(char *p,int *flag);//声明改变首字母的函数
void write(char *p);//往文件中进行写

int main()
{
    char a;
    int flag=1,*p=&flag;
    while((a=getchar())!='\n')
    {
        change(&a,p);//判断是不是字母的首字母，并把他转换为大写
        write(&a);//进行读写
    }
    write(&a);//最后写入换行
    return 0;
}

void change(char *p,int *flag)
{
    if((*flag==1)&&isalpha(*p))
    {
        if(islower(*p))
        {
            *p=toupper(*p);
        }
        *flag=0;//将首字母变为大写
    }
    else if(*flag==0&&(!isalpha(*p)))
    {
        *flag=1;
    }
}

void write(char *p)
{
    FILE *fout;
    fout=fopen("test.txt","a+");
    fprintf(fout,"%c",*p);
    fclose(fout);//对文件进行写
}
