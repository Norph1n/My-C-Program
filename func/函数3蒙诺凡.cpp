#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void year(int x)
{
	if(((x%4 == 0) && (x%100 != 0)) || (x%400 == 0))
		printf("%d\n",x);
}
int main()
{	
	for(int i=2024;i<=3000;i++)
		year(i);
	return 0;
}