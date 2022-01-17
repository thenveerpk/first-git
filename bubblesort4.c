#include <stdio.h>
int main()
{
	int a[50],i,j,temp,size;
	printf("enter the size of arry");
	scanf("%d",&size);
	printf("enter the elements of array:");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{

			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the sorted array is");
	for(i=0;i<size;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}
	
	
