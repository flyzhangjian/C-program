/*************************************************************************
	> File Name: english_interger.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月10日 星期日 15时46分17秒
 ************************************************************************/

#include<stdio.h>

int main()
{
    char c;
    int count = 0,flag = 1;
    while((c=getchar())!=EOF)
    {
        if ((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
        {
            flag=1;
        }
        else
        {
            switch (c)
            {
                case ' ':
                case '\n':
                case ',':
                case '.':
                case '?':
                if(flag)
                {
                    count++;
                    flag = 0;
                }
                break;
                case '\'':
                break;
                default:
                flag = 1;
                break;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}
