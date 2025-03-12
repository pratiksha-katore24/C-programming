#include<stdio.h>
void main()
{
	
int i;	
int marks[5];
marks[0]=10;
marks[1]=20;
marks[2]=30;
marks[3]=40;
marks[4]=50;

for(i=0;i<5;i++)
{
	printf("marks[%d]:%d\n",i,marks[i]);
}
}