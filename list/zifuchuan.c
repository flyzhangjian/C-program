/*************************************************************************
	> File Name: zifuchuan.c
	> Author:张建 
	> Mail: 
	> Created Time: 2016年06月01日 星期三 23时13分54秒
 ************************************************************************/

#include<stdio.h>
#include<stdlib.h>
struct s_list{
    char c;
    struct s_list *next;
};//声明结构
int create_list(struct s_list **headp);//声明函数

int main()
{
    int sum;
    char *result;//声明变量
    struct s_list *head = NULL,*p;
    sum = create_list(&head);
    p=head;
    while(p->next!=(NULL))
    {
        putchar(p->c);
        p = p->next;
    }//遍历单项链表输出
    putchar('\n');
    putchar('\n');
    sum++;
    char ch[sum];
    result = ch;
    p=head;//由于遍历后p指向链表最后一个。此时需要把他指向链表第一个
    while(p->next!=(NULL))
    {
        *result=(p->c);
        p = p->next;
        result++;
    }//对动态生成的数组进行赋值
    *result='\0';
    printf("%s\n",ch);//输出
    return 0;
}

int create_list(struct s_list **headp)
{
    struct s_list *loc_head = NULL,*tail;
    char temp;
    int i=0;
    if((temp=getchar())!=EOF)
    {
        loc_head = (struct s_list *)malloc(sizeof(struct s_list));
        loc_head->c = temp;
        tail = loc_head;
        i++;
        while((temp = getchar())!=EOF)
        {
            tail->next = (struct s_list *)malloc(sizeof(struct s_list));
            tail = tail->next;
            tail->c=temp;
            i++;
        }
        tail->next=NULL;//先进先出建立链表
    }
    *headp = loc_head;//使主函数头指针指向生成链表的第一个
    return i;//返回链表节点数
}
