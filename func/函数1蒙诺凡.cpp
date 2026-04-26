#include<stdio.h>
#include<stdlib.h>
#include<math.h>

float a;
float cal(float x)
{
	if(a<2)
		return (2.5-x);
	else if(x>=4)
		return ((x/2)-1.5);
	else 
		return (2-1.5*pow(x-3,2));
}
int main()
{	
	printf("ÇëÊäÈëÊı¾İ");
	scanf("%f",&a);
	printf("%f\n",cal(a));
	return 0;
}