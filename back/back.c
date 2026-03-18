#include<stdio.h>
#include<math.h>

int a;
int main()
{
    scanf("%d",&a);
    while(a>0)
        {
            printf("%d",a%10);
            a=a/10;
        }
    printf("\n");
    return 0;
}