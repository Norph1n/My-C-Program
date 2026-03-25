#include<stdio.h>
#include<stdlib.h>
int cmp(const void * a,const void *b)
    {
        return (*(int*)b - *(int*)a);
    }
int a[4];
int main()
{
    printf("请输入4个整数，分别用空格隔开\n");
    for(int i=0;i<=3;i++)
        {
            scanf("%d",&a[i]);
        }
    qsort(a,4,sizeof(int),cmp);
    printf("排序后的顺序是：\n");
    for(int i=0;i<=3;i++)
        printf("%d ",a[i]);
    return 0;
}