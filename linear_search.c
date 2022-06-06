#include<stdio.h>
int linear_search(int *arr,int n,int se)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)
		{
			return 1;
		}		
	}
	return 0;
}
int main()
{
	int arr[100],i,n,se;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	if(linear_search(arr,n,se))
	{
		printf("found");
	}
	else
	{
		printf("Not found");
	}
}
/*
5
23 34 2 3 1
2
found
--------------------------------*/
