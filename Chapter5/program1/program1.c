#include<stdio.h>

float h;

int main()
{
    printf("请输入初始高度\n");
    scanf("%f",&h);
    for(int i=1;i<=10;i++)
    {
        h/=2;
    }
    printf("最后高度是：%f\n",h);
    return 0;
}