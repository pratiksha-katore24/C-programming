#include<stdio.h>
int main()
{
	int x,y;

	printf("Enter first number:");
	scanf("%d",&x);
	printf("Enter second number:");
	scanf("%d",&y);
	printf("\n Addition=%d",x+=y);
	printf("\n Substraction=%d",x-=y);
	printf("\n Multiplication=%d",x*=y);
	printf("\n Division=%d",x/=y);
	printf("\n Moudules=%d",x%=y);
}