#include<stdio.h>
int max(int *arr,int n)
{
	int i,ind=0,maxi=arr[0];
	for(i=0;i<=n;i++)
	{
		if(maxi<arr[i])
		{
			maxi=arr[i];
			ind=i;
		}
	}
	return ind;
}
void s_s(int *arr,int size)
{
	int i,maxi,temp;
	for(i=size-1;i>=0;i--)
	{
		maxi=max(arr,i);//find max value ind and store in maxi
		//maxi=(arr,9)
		temp=arr[i];
		arr[i]=arr[maxi];
		arr[maxi]=temp;
	}
}
int main()
{
	int arr[100],i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	s_s(arr,n);
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
/*10
1 2 34 5 6 7 90 23 15 8
1 2 5 6 7 8 15 23 34 90
--------------------------------*/

