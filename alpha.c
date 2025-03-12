#include<stdio.h>
int main()
{
	int i,j;
	char Alphabet='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
		
		Alphabet=Alphabet+j;
		printf("%c",Alphabet);
	
	}
	printf("\n");
}
}