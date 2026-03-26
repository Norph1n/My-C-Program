#include<stdio.h>
#include<math.h>

int a;
int main()
{   
    printf("请输入要判断的数字\n");
    scanf("%d",&a);
    if((a%5)==0)
        printf("这个数能被5整除,");
    else
        printf("这个数不能被5整除,");
    if((a%3)==0)
        printf("能被3整除\n");
    else   
        printf("不能被3整除\n");
    return 0;
}