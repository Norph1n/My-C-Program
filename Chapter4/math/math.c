#include<stdio.h>
#include<math.h>
#define PI 3.1415926
double a,ans;
int main()
{
    printf("请输入数据\n");
    scanf("%lf",&a);
    if(a<(PI/-2))
    {
        ans=2*a*a*a+3*cos(a)+5;
        printf("%f\n",ans);
    }
    else if(a>=(PI/2))
    {
        ans=sqrt(a+2*sin(3*a));
        printf("%f\n",ans);
    }
    else
    {
        ans=pow((a-1)/(a+2),3)+5*a;
        printf("%f\n",ans);
    }
    return 0;
}