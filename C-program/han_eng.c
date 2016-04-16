/*************************************************************************
	> File Name: han_eng.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月10日 星期日 16时38分17秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    char c;
    int count_english=0,count_chinese=0;
    while((c=getchar())!=EOF)
    {
        if (c<0)
        {
            count_chinese++;
        }
        else if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            count_english++;
        }
    }
    printf("English:%d  chinese:%d\n",count_english,count_chinese/3);
    return 0;
}
