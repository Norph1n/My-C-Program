#include<stdio.h>
#include<math.h>

int r;
float s,v;
int main()
{   
    printf("请输入半径\n");
    scanf("%d",&r);
    s=r*r*3.14*4;
    v=(r*r*r*4*3.14)/3;
    printf("球的表面积是:%.2f\n球的体积是:%.2f\n",s,v);
    return 0;
}