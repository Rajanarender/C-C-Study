
/***************************************************************
Queue using Array,ptr
Queue using class
Queue using Single Linked list
Queue using Stacks
Queue Operations are achieved in C++ using STL deque container class
*****************************************************************/








/********************************************
Queue implementation using Single Linked List
********************************************/
struct node
{
int data;
struct node *next;
};


void Enqueue(struct node *front,struct node *rear,int newdata)
{
	struct node *newnode= (struct node*)malloc(sizeof(struct node));
	if(rear == NULL) //If Queue is Empty
	{
		front = rear = newnode; //Make front,rear point to newnode
                return;
	}
        rear->data = newdata;
	rear->next = newnode;
	rear = newnode;
}

int Dequeue(struct node *front,struct node *read)
{
	if(front == NULL) //If Queue is Empty
	{
		rear = NULL; //Make rear also NULL
		return -1;
	}
	struct node *temp=front;
	front = front ->next;

	int x = temp->data; //Preserve the queue data
	temp->next =NULL;
	free(temp);
	return x;
}


int main()
{
	struct node *front=NULL,*rear=NULL;
	Enqueue(front,rear,5);
	Enqueue(front,rear,6);
	Enqueue(front,rear,7);
	Enqueue(front,rear,8);
	cout<<Dequeue(front,rear);
	cout<<Dequeue(front,rear);
	cout<<Dequeue(front,rear);
	cout<<Dequeue(front,rear);
}





