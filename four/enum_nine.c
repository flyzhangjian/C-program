/*************************************************************************
	> File Name: enum_nine.c
	> Author: 
	> Mail: 
	> Created Time: 2016年04月17日 星期日 22时06分36秒
 ************************************************************************/

#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g,h,i,j,m,result1,result2;
    printf("please input your number:\n");
    scanf("%d",&m);
    for(a=0;a<=9;a++)
    {
        for(b=0;b<=9;b++)
        {
            if(a!=b)
            {
                for(c=0;c<=9;c++)
                {
                    if((c-a)*(c-b)!=0)
                    {
                        for(d=0;d<=9;d++)
                        {
                            if((d-a)*(d-b)*(d-c)!=0)
                            {
                                for(e=0;e<=9;e++)
                                {
                                    if((e-a)*(e-b)*(e-c)*(e-d)!=0)
                                    {
                                        result1 = a*10000 + b*1000 + c*100 + d*10 +e;
                                        result2 = result1*m;
                                        if(result2 <= 99999)
                                        {
                                            f = result2/10000;
                                            g = (result2 - f*10000)/1000;
                                            h = (result2 - f*10000 - g*1000)/100;
                                            i = (result2 - f*10000 - g*1000 - h*100)/10;
                                            j = result2 - f*10000 - g*1000 - h*100 - i*10;
                                            if(((f-a)*(f-b)*(f-c)*(f-d)*(f-e)!=0)&&((g-f)*(g-a)*(g-b)*(g-c)*(g-d)*(g-e)!=0)&&((h-a)*(h-b)*(h-c)*(h-d)*(h-e)*(h-f)*(h-g)!=0)&&((i-a)*(i-b)*(i-c)*(i-d)*(i-e)*(i-f)*(i-g)*(i-h)!=0)&&((j-a)*(j-b)*(j-c)*(j-d)*(j-e)*(j-f)*(j-g)*(j-h)*(j-i)!=0))
                                            {
                                                printf("%d/%d=%d\n",result2,result1,m);
                                            } 
                                        } 
                                    } 
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
