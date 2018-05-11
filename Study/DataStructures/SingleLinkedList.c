#include<stdio.h>

//Single Linked List[SLL] is represented in C++ using forward_list class container


Pending:
Palindrome
Find the biggest palindrome from linked list
a->bc->dc->b->a,Prove this is a Palindrome
a->b->c->d->c->b->a,Prove this is a Palindrome
Addition of Nodes

struct node
{
	int data;
	struct node *next;
};

void Print&CountNodes(struct node *headref)
{
        struct node *temp = headref;
	int count=1;
	while(temp !=NULL)
	{
		count++;
		printf("%d",temp->data);
		temp=temp->next;
	}
	printf("%d",count);

    (or)
	int count=0;
        do
	{
		count++;
		printf("%d",temp->data);
		temp=temp->next;
	}while(temp !=NULL);
	printf("%d",count);
}

void insertAtBegin(struct node *headref,int newdata)
{
	struct node *newnode=(struct node*)sizeof(struct node);
	newnode->data = newdata;
	newnode->next=headref;
	headref=newnode;
}

void insertAfterMiddle(struct node *headref)
{
	struct node *fast=headref;
	struct node *slow= headref;
	while(fast !=NULL && fast->next !=NULL)
	{
		fast = fast->next->next;
		slow = slow->next;
	}

	struct node *newnode=(struct node*)sizeof(struct node);
	newnode->data = newdata;
	newnode->next =slow->next;
	slow->next=newnode;
}

void insertAfterNthPosition(struct node *headref)
{
	struct node *temp = headref;
	int count =1;//since temp points to head node
	while(temp->next != NULL&&count < N)
	{
		count++;
		temp = temp->next;
	}
	struct node *newnode=(struct node*)sizeof(struct node);
	newnode->data = newdata;
	newnode->next = temp->next;
	temp->next = newnode;
}

void insertAfterEnd(struct node *headref)
{
	struct node *temp = headref;
	while(temp != NULL)
	{
		temp = temp->next;
	}
	struct node *newnode=(struct node*)sizeof(struct node);
	newnode->data = newdata;
	newnode->next = NULL;//Since it is the last node
	temp->next = newnode;
}

void DeleteFirstNode(struct node *headref)
{
	struct node *temp = headref;
	headref =headref->next;
        temp->next = NULL; //V.V.Imp step
	free(temp);
}

void DeleteMiddleNode(struct node *headref)
{
	struct node *fast=headref;
	struct node *slow= headref;
	struct node *prev=NULL;
	while(fast !=NULL && fast->next !=NULL)
	{
		fast = fast->next->next;
		prev=slow; //Preserve the node, then traverse
		slow = slow->next;
	}
	prev->next = slow->next;//slow is the middle node at this point
	free(slow);
} 

void DeleteNthNode(struct node *headref)
{
	struct node *temp = headref;
	struct node *prev=NULL;
	int count =1;//since temp points to head node
	while(temp->next != NULL&&count < N)
	{
		count++;
		prev=temp; //Preserve the node, then traverse
		temp = temp->next;
	}
	prev->next=temp->next;
	free(temp);
}

void DeleteLastNode(struct node *headref)
{
	struct node *temp = headref;
	struct node *prev=NULL; //SLL needs Extra ptr for deletion 
	while(temp->next !=NULL)
	{
		prev=temp; //Preserve the node, then traverse
		temp=temp->next;
	}
	prev->next = NULL;
	free(temp);
}


void FindIntersection/MergePoint(struct node *headref) //Using Floyd's Algorithm
{
//clue: Join the end node with start node of shorter linked list 
//to form the circular loop with lesser nodes,to achieve less time complexity
//After finding the intersection point,break the link b/w start and end node of shorter linked list

	struct node *fast=headref;
	struct node *slow=headref;
	while(fast !=NULL && fast->next !=NULL) //Floyd's Cycle Detection Algorithm 
	{
		fast=fast->next->next;
		slow= slow->next;
		if(fast == slow)
		{
			printf("Linked List is Circular,It is having Loop");
			break; //Mandatory to break this loop, or else it leads to infinite loop
		}
	}
        
        while(headref->data != slow->data) //Keep comparing both the nodes, by the end of this loop both the nodes data will match
             {
               headref = headref->next;
               slow = slow->next;
             }  
            print("The Intersection/Merge point of 2 Linked lists is %d",slow->data);//headref->data 
}


void FindMiddleNode2ptrs(struct node *headref)
{
	struct node *fast=headref;
	struct node *slow=headref;
	while(fast !=NULL && fast->next !=NULL) //Floyd's Cycle Detection Algorithm
	{
		fast=fast->next->next;
		slow= slow->next;
	}
	printf("%d",slow->data); //MiddleNode
}
//Time Complexity is O(n)

void FindMiddleNode1ptr(struct node *headref)
{
	struct node *temp = headref;
	struct node *mid = headref;
	int count =1;
	while(temp!=NULL)
	{
		count++;
		if(count%2==1)
			mid=mid->next;

		temp=temp->next;
	}
}

void FindCircularLoopNRemoveLoop(struct node *headref)
{
	struct node *fast=headref;
	struct node *slow=headref;
	while(fast !=NULL && fast->next !=NULL) //Floyd's Cycle Detection Algorithm 
	{
		fast=fast->next->next;
		slow= slow->next;
		if(fast == slow)
		{
			printf("Linked List is Circular,It is having Loop");
			break; //Mandatory to break this loop, or else it leads to infinite loop
		}
	}

	struct node *slowprev = NULL;
	while(headref->data != slow->data) //Keep comparing both the nodes, by the end of this loop both the nodes data will match
	{
		headref = headref->next;
		slowprev = slow; //Preserve slow ptr, then traverse
		slow = slow->next;
	}
           slowprev->next = NULL; //Disconnect slowprev from the intersection pt to break the circular loop
}

//This Works only when the Length/Total no. of nodes in SLL is given 
void FindNthPosNodefromEndofSLL(struct node *headref)
{
	struct node *temp = headref;
	int count = 0;
	while(temp != NULL)
	{
		count++;
		if(count == (L-Npos+1)) //L is length/total no. of nodes in SLL
		{
			cout<<"Node data present at Nth position from End of SLL is:"<<temp->data;
                        break;
		}
		temp = temp->next;
	}
}

//This Works when the Length/Total no. of nodes in SLL is NOT given
void FindNthPosNodefromEndofSLL(struct node *headref)
{
	struct node *fast = headref;
	struct node *slow = headref;
        int count = 0;
        
        while(fast !=NULL && count< Npos) //Moving the fast ptr by Npos Nodes
        {
         count++;
         fast= fast->next;
        }
        while(fast != NULL) //Now Moving fast ptr & slow ptr by each node so that the distance b/w them remains the same
        {
               fast = fast->next
               slow = slow->next;
        }
        cout<<"Node value at Nth position from End of Linked List is:"<<slow->data;
}

void ConvertSLLtoCLL(struct node *headref)
{
	struct node *temp=headref;
	while(temp->next != NULL)
	{
		temp =temp->next;
	}
	temp->next=headref;
}

void swap(int *x,int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void PairwiseSwap(struct node *headref)
{
	struct node *temp= headref;
	while(temp !=NULL && temp->next !=NULL)
	{
		swap(&(temp->data),&(temp->next->data));
		temp = temp->next->next; //V.V.Imp Step
	}
}
//Time Complexity is O(n)

void DupNodesCount&RemovalSLL(struct node *headref)
{
	struct node *temp=headref;
	struct node *dup=NULL;
	int count=0;
	while(temp !=NULL && temp->next !=NULL)
	{
		if(temp->data == temp->next->data) //If data matched,Delete the duplicate
		{
			dup = temp->next;
			temp->next = dup->next; //Form the link before deleting the node
			free(dup);
			count++;
		}
		else // If node data is not matched then keep traversing
			temp=temp->next;
	}
	printf("%d",count); //Counts the no. of duplicate nodes 
}
//Time Complexity is O(n)

void DupNodesCount&RemovalUnSLL(struct node *headref)
{
	struct node *temp1=headref;
	struct node *temp2=NULL;
	int count=0;
	while(temp1 != NULL && temp1->next !=NULL)
	{
		temp2=temp1;  //V.V.V.Imp step 
		while(temp2->next!=NULL)
		{
			if(temp1->data == temp2->next->data)
			{
				dup = temp2->next;
				temp2->next = dup->next; //temp2->next=temp2->next->next;
				free(dup);
			}
			else
				temp2=temp2->next;
		}
		temp1=temp1->next;
	}
	printf("%d",count);
}
//Time Complexity is O(n2)

void DeleteAltNodes(struct node *headref)
{
	struct node *dup=NULL;
	while(temp != NULL && temp->next != NULL)
	{
		dup=temp->next;
		temp->next=dup->next;
		free(dup);
		temp = temp->next; //For traversing 
	}
}  
//Time Complexity is O(n)

void DeleteSinglePtrtoNode(struct node *headref)
{
	//We have the copy the data and link of next node to ptr pointing Node
	ptr->next=ptr->next->next;
	ptr->data=ptr->next->data;
	free(ptr->next);
}

void IterativeReverseSLL(struct node *headref)
{
	struct node *temp = headref;
	struct node *x =NULL; //next Node
	struct node *y = NULL; //prev Node
	while(temp != NULL)
	{
		x = temp->next;
		temp->next = y; //temp->next should be made NULL for the 1st node
		y = temp; //For Traversing
		temp = x; //For Traversing
	}
	headref = y; //head node pointing to the prev Node
}

void RecursiveReverseSLL(struct node *headref) //Recursive Reverse with void
{
	if(headref->next == NULL)
	{
         return;
	}
	Recursive(headref->next);
	headref->next->next = headref;
	headref->next = NULL;
}

node* RecursiveReverseSLL(struct node *headref) //Recursive Reverse with node* return type
{
	if(headref->next == NULL)
	{
         return headref;
	}
	struct node *temp = Recursive(headref->next);
	headref->next->next = headref; //Making the last node connect to the previous node using this line of code
	headref->next = NULL;// Making the previous node link as NULL,since we are reversing the linked list
        return temp;
}


void RotateByKnodes(struct node *headref)
{
	//i/p:1->2->3->4->5
	//o/p:4->5->1->2->3
	struct node *temp1 = headref;
	while(temp1 != NULL)
	{
		temp1 = temp1->next;
	}
	temp1->next = headref; //Making the last node connect with head, forming circular loop

	struct node *temp2 = headref;
	while(temp2 != NULL && count <K)
	{
		count++;
		temp2 = temp2->next;
	}
	temp2->next = headref; //Making Kth node next as head
	temp2->next = NULL; //Breaking the Kth node link with head 
}

void Palindrome(struct node *headref)
{

}

void AdditionOfNodesin2SLLists(struct node *head1,struct node *head2)
{
	while(head1 !=NULL && head2 !=NULL)
	{

		head1 = head1->next;
		head2 = head2->next;

	}
}

int main()
{
	struct node *head = NULL;
	insertAtBegin(head,5);
	insertAtBegin(head,6);
	while(head->next)
	{
		printf("%d",head->data);
		head = head->next;
	}
}


