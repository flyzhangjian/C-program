/*************************************************************************
	> File Name: sort_score.c
	> Author: 
	> Mail: 
	> Created Time: 2016年06月02日 星期四 14时54分50秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stu_info{
    char xuehao[15];
    char name[20];
    float English;
    float Math;
    float Physics;
    float C;
    float sum;
    float avg;
    struct stu_info *next;
};//声明结构用来存储学生信息
void create_list(struct stu_info **headp,int n);//创建先进先出链表
void put_my(struct stu_info *p);//输出学生信息
void change(struct stu_info *p);//修改休息
void sum_avg(struct stu_info *p,int n);//计算平均值，以及总成绩
void put_sum_avg(struct stu_info *p);//输出学生的平均值以及总成绩
void pai_xu(struct stu_info *p,int n);//冒泡排序
void put_avg(struct stu_info *p);//输出排序后的信息

int main()
{
    int n,i;
    scanf("%d",&n);
    struct stu_info students,*head=&students;
    create_list(&head,n);
    put_my(head);
    change(head);
    printf("Alter:\n");
    put_my(head);
    sum_avg(head,n);
    printf("SumAndAvg:\n");
    put_sum_avg(head);
    pai_xu(head,n);
    printf("Sort:\n");
    put_avg(head);
    return 0;
}

void put_my(struct stu_info *p)
{
    printf("%-15s%-20s%-10s%-10s%-10s%-10s\n","ID","Name","English","Math","Physics","C");
    while(p->next!=NULL)
    {
        printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n",p->xuehao,p->name,p->English,p->Math,p->Physics,p->C);
        p=p->next;
    }
    printf("%-15s%-20s%-10.2f%-10.2f%-10.2f%-10.2f\n\n",p->xuehao,p->name,p->English,p->Math,p->Physics,p->C);
}//输出学生信息

void put_sum_avg(struct stu_info *p)
{
    printf("%-15s%-20s%-10s%-10s\n","ID","Name","SUM","AVG");
    while(p->next!=NULL)
    {
        printf("%-15s%-20s%-10.2f%-10.2f\n",p->xuehao,p->name,p->sum,p->avg);
        p=p->next;
    }
    printf("%-15s%-20s%-10.2f%-10.2f\n\n",p->xuehao,p->name,p->sum,p->avg);
}//输出学生的平均值以及总成绩

void put_avg(struct stu_info *p)
{
    printf("%-15s%-20s%-10s\n","ID","Name","AVG");
    while(p->next!=NULL)
    {
        printf("%-15s%-20s%-10.2f\n",p->xuehao,p->name,p->avg);
        p=p->next;
    }
    printf("%-15s%-20s%-10.2f\n\n",p->xuehao,p->name,p->avg);
}//输出排序后的信息

void create_list(struct stu_info **headp,int n)
{
    struct stu_info *loc_head = NULL,*p;
    int i=1;
    char xuehao[15];
    if(scanf("%s",xuehao)!=0)
    {
        loc_head =(struct stu_info *)malloc(sizeof(struct stu_info));
        p=loc_head;
        for(i=0;i<15;i++)
        *((p->xuehao)+i)=*(xuehao+i);
        scanf("%s%f%f%f%f",p->name,&(p->English),&(p->Math),&(p->Physics),&(p->C));
        for(i=0;i<n-1;i++)
        {
            p->next=(struct stu_info *)malloc(sizeof (struct stu_info));
            p=p->next;
            scanf("%s%s%f%f%f%f",p->xuehao,p->name,&(p->English),&(p->Math),&(p->Physics),&(p->C));
        }
        p->next=NULL;
    }
    *headp=loc_head;
}//创建先进先出链表

void change(struct stu_info *p)
{
    int n,i;
    scanf("%d",&n);
    struct stu_info  *temp;
    char xuehao_change[15];
    temp = p;
    for(i=0;i<n;i++)
    {
        scanf("%s",xuehao_change);
        while(strcmp(temp->xuehao,xuehao_change)!=0)//判断哪个学生
        {
            temp=temp->next;
        }
        scanf("%s",xuehao_change);
        if(strcmp("English",xuehao_change)==0)//判断哪门课
        scanf("%f",&temp->English);
        else if(strcmp("Math",xuehao_change)==0)
        scanf("%f",&temp->Math);
        else if(strcmp("Physics",xuehao_change)==0)
        scanf("%f",&temp->Physics);
        else if(strcmp("C",xuehao_change)==0)
        scanf("%f",&temp->C);
        temp=p;
    }
}//修改休息

void sum_avg(struct stu_info *p,int n)
{
    int i;
    struct stu_info *temp;
    temp=p;
    for(i=0;i<n;i++)
    {
        temp->sum = (temp->Math+temp->Physics+temp->C+temp->English);
        temp->avg = temp->sum/4.0;
        temp=temp->next;
    }
}//计算平均值

void pai_xu(struct stu_info *p,int n)
{
    struct stu_info *head,*current,temp,*temp_1,*temp_2;
    int i,j;
    for(i=0,head=p;i<n-1;i++,head=head->next)
    {
        for(j=i+1,current=head->next;j<n;j++,current=current->next)
        {
            if((head->avg)>(current->avg))
            {
                temp_1=head->next;
                temp_2=current->next;
                temp=*head;
                *head=*current;
                *current=temp;
                head->next=temp_1;
                current->next=temp_2;
            }//采用交换数据的方法交换结构
        }
    }
}//选择排序
