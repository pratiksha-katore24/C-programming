#include<stdio.h>
void main()
{
	int i,j,arr[2][2]={{1,2},{3,4}};
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("\n arr[%d][%d]=[%d]",i,j,arr[i][j]);
		}
	}
}