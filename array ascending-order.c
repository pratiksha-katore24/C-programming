#include<stdio.h>
void main()
{
	int i,j,temp;
	int a[10]={101,38,56,33,21,17,11,5,2};
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];			
				a[j]=temp;
			}
	}
}
printf("printing sorting element list..");
for(i=0;i<10;i++)
{
	printf("%d \n",a[i]);

}
}