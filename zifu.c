/*************************************************************************
	> File Name: zifu.c
	> Author: 
	> Mail: 
	> Created Time: 2016年03月20日 星期日 18时38分19秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int i=0,j=0,k=0;
    char name[100];
    scanf("%s",name);
    while(name[i]!='\0')
    {
        if(name[i]>='0'&&name[i]<='9')
        k++;
        else if((name[i]<='z'&&name[i]>='a')||(name[i]>='A'&&name[i]<='Z'))
        j++;
        i++;
    }
    printf("the interger numbers is %d\n",k);
    printf("the other number is %d\n",j);
    return 0;
}

