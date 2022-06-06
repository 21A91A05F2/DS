#include<stdio.h>
void s_s(int *arr,int n)
{
	int i,j,temp,p,swapcount=0;
	for(p=1;p<=n;p++)
	{
		for(i=0,j=1;j<n;j++,i++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
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
