/*********************************************************************
	> 作  者: 张建
    > 班  级: CS1510
    > 学  号: U201514751
	> 邮  箱: 1836810995@qq.com
    > 课  程: C语言作业8
    > 作业号: 习题8

    概述:计算圆柱的表面积和体积
 ************************************************************************/

#include<stdio.h>
#include<math.h>
# define PI 3.1415926

float square(float radii,float height);

float cubic(float radii,float height);

int main()
{
    int n,i=0;
    float radii,height,result_square,result_cubic;
    scanf("%d",&n);
    for(;i<n;i++)
    {
        scanf("%f%f",&radii,&height);
        result_square = square(radii,height);
        result_cubic = cubic(radii,height);
        printf("%f ",result_square);
        printf("%f\n",result_cubic);
    }
    return 0;
}

float square(float radii,float height)
{
    float result;
    result = 2 * PI * radii * radii + 2 * PI * radii * height;

    return result;
}

float cubic(float radii,float height)
{
    float result;
    result = PI * radii * radii * height;

    return result;
}
