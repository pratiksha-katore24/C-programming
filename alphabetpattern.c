#include<stdio.h>
int main()
{
	int i,j;
    for(i=1;i<=5;i++)
	{ 
	    char Alphabet='A';
		for(j=1;j<=5;j++)
		{ 
			printf(" \t %c",Alphabet);
			Alphabet++;
		}
		printf(" \n");
	
	}
}