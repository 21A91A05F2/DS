#include<stdio.h>
int linear_search(int *arr ,int n,int se)
{
	int i,c=0;
	for(i=0;i<n;i++)
	{
		if(arr[i]==se)
		{
			c++;
		}
	}
	if(c>0)
	{
		return c;
	}
	return -1;
}
int main()
{
	int arr[100],n,i,se,res;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	scanf("%d",&se);
	printf("%d",linear_search(arr,n,se));
	
}
/*
5
23 34 23 4 23
23
3
----------*/

