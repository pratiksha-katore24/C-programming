#include<stdio.h>
void main()
{
	int n,i;
	printf("Enter size:");
	scanf("%d",&n);
	int a[n];
	printf("Enter array elements:");
	scanf("%d",&a[n]);
	for(i=0;i<n;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("\n a[%d]=%d",i,a[i]);
	}
}