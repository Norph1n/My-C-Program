#include<stdio.h>

int a,b,c;
float delta;
int main()
{
   printf("请输入a，b，c，分别用空格隔开\n");
   scanf("%d%d%d",&a,&b,&c);
   delta=(b*b)-(4*a*c);
   if(delta<0)
      printf("该方程无实根\n");
   else if(delta==0)
      printf("该方程有一个重根\n");
   else
      printf("该方程有两个不同根\n");
   return 0;
}