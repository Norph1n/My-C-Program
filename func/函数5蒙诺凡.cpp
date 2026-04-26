#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int back;
int sushu(int x)
{
	for(int i=2;i<x;i++)
	{
		if(x%i == 0)
		{
			return false;	//不是素数，返回0
		}	
	}
	return true;	//是素数，返回1
}
int main()
{	
	for(int i=1;i<=1000;i++)
	{
		int pin =i;	//定义替身，对替身动刀
		while(pin>0)	//求倒序数，几位就循环几次
		{
			back*=10;
			back+=(pin%10);
			pin/=10;
		}
		if(sushu(i))
			if(sushu(back))
				printf("%d\n",i);
	}
	return 0;
}