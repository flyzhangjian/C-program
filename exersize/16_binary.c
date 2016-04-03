/*************************************************************************
	> File Name: 16_binary.c
	> Author: he
	> Mail: 
    > Created Time: 2016年03月27日 星期日 20时18分40秒
 ************************************************************************/

#include<stdio.h>
int hex_print(int x);

int hex_print(int x)
{
    int mask=0xf,j,k,n;
    char binary;
    n=sizeof(x)*8;
    k=sizeof(x)*2-1;
    printf("%d",k);
    for(j=k;j>=0;j--)
    {
        int temp,result;
        result=x>>(n-4*j);
        temp=result & mask;
        if(temp<10)
        {
            binary=temp+'0';
            printf("%c",binary);
        }
        else
        {
            binary=temp-10+'a';
            printf("%c",binary);
        }
    }
}

int main()
{
    int x;
    scanf("%d",&x);
    hex_print(x);
    return 0;
}

