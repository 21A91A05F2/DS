#include<stdio.h>
#include<stdlib.h>
int Top=-1;
int n,*st;
void push(int val)
{
	if(Top==n-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		st[++Top]=val;
	}
}
int pop()
{
	int val;
	if(Top==-1)
	{
		return -1;
	}
	else
	{
		val=st[Top];
		st[Top--]=0;
		return val;
	}
}
void display()
{
	int i;
	if(Top==-1)
	{
		printf("Stack is empty\n");
	}
	else
	{
		for(i=Top;i>=0;i--)
		{
			printf("%d ",st[i]);
		}
		printf("\n");
	}
}
void main()
{
	int i,ch,val;
	scanf("%d",&n);//size of the stack
	st=(int *)calloc(n,sizeof(int));//allocate memory of stack
	while(1)
	{
		printf("1.Push  2.Pop 3. Display 4. exit:\n");//
		scanf("%d",&ch);
		if(ch==1)
		{
			//push function
			scanf("%d",&val);//reading of val
			push(val);// calling push function
		}
		else if(ch==2)
		{//pop function
			val=pop();
			if(val==-1)
			{
				printf("Stack is empty\n");
			}
			else
			{
				printf("%d ",val);
			}
		}
		else if(ch==3)
		{
			//display function
			display();
		}
		else
		{
			break;
		}
	}
}
/*
5
1.Push  2.Pop 3. Display 4. exit:
1
23
1.Push  2.Pop 3. Display 4. exit:
1
34
1.Push  2.Pop 3. Display 4. exit:
1
45
1.Push  2.Pop 3. Display 4. exit:
1
56
1.Push  2.Pop 3. Display 4. exit:
1
67
1.Push  2.Pop 3. Display 4. exit:
1
78
Stack is full
1.Push  2.Pop 3. Display 4. exit:
2
67 1.Push  2.Pop 3. Display 4. exit:
2
56 1.Push  2.Pop 3. Display 4. exit:
2
45 1.Push  2.Pop 3. Display 4. exit:
2
34 1.Push  2.Pop 3. Display 4. exit:
2
23 1.Push  2.Pop 3. Display 4. exit:
2
Stack is empty
1.Push  2.Pop 3. Display 4. exit:
3
Stack is empty
1.Push  2.Pop 3. Display 4. exit:
4
--------------------------------
*/
