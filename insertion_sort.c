#include<stdio.h>
void insertion_sort(int n,int *arr)
{
	int i,j,a,temp;//if any changes in function defination when we pass address to defination then it willnot  change in main function also.
	for(i=1;i<n;i++)
	{
		printf("%d ",arr[i]);
		temp=arr[i];
		for(j=i-1;j>=0;j--)
		{
			if(temp>arr[j])
			{
				arr[j+1]=temp;//true 
				break;
			}
			else
			{
				arr[j+1]=arr[j];//false case
			}
			for(a=0;a<n;a++)
			printf("%d ",arr[a]);
		}
		if(j==-1)
		{
			arr[0]=temp;
		}
		
	}
}
int main()
{
	int n,i,j,arr[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	insertion_sort(n,arr);
	//for(i=0;i<n;i++)
	//printf("%d ",arr[i]);
}
/*5
7 8 90 1 2
*/
