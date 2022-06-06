#include<stdio.h>
#include<stdlib.h>
int *que,size,rear=-1,front=-1;
void enque(int val)
{
	if(rear==size-1)
	{
		printf("Over Flow\n");
	}
	else if(front==-1 && rear==-1)
	{
		que[++rear]=val;
		front=0;
	}
	else
	{
		que[++rear]=val;
		
	}
}
int deque()
{
	int val;
	if(front==-1 && rear==-1)
	{
		return -1;
	}
	else if(front==rear)
	{
		val=que[front];//anything we write at que [] as at same position
		front=-1;
		rear=-1;
	}
	else
	{
		val=que[front];
		front++;
	}
	return val;
}
void display()
{
	int i;
	if(front==-1 && rear==-1)
	{
		printf("Under Flow\n");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d ",que[i]);
		}
		printf("\n");
	}
}
void main()
{
	int i,ch,val;
	scanf("%d",&size);
	que=(int *)calloc(size,sizeof(int));
	while(1)
	{
		printf("1.enqueue  2.dequeue 3. Display 4. exit:");
		scanf("%d",&ch);
		if(ch==1)
		{
			scanf("%d",&val);
			enque(val);
			
		}
		else if(ch==2)
		{
			val=deque();
			if(val!=-1)
			{
				printf("%d\n",val);
			}
			else
			{
				printf("Under Flow");
			}
		}
		else if(ch==3)
		{
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
1.enqueue  2.dequeue 3. Display 4. exit:1
23
1.enqueue  2.dequeue 3. Display 4. exit:1
34
1.enqueue  2.dequeue 3. Display 4. exit:1
45
1.enqueue  2.dequeue 3. Display 4. exit:1
34
1.enqueue  2.dequeue 3. Display 4. exit:1
67
1.enqueue  2.dequeue 3. Display 4. exit:1
45
Over Flow
1.enqueue  2.dequeue 3. Display 4. exit:3
23 34 45 34 67
1.enqueue  2.dequeue 3. Display 4. exit:2
23
1.enqueue  2.dequeue 3. Display 4. exit:
2
34
1.enqueue  2.dequeue 3. Display 4. exit:2
45
1.enqueue  2.dequeue 3. Display 4. exit:2
34
1.enqueue  2.dequeue 3. Display 4. exit:2
67
1.enqueue  2.dequeue 3. Display 4. exit:2
Under Flow1.enqueue  2.dequeue 3. Display 4. exit:4

--------------------------------*/
