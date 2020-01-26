#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};
void push(Node** head_ref, int data)
{
	Node* new_node=new Node();
	new_node->data=data;
	new_node->next=*head_ref;
	Node* temp=*head_ref;
	// if link list not NULL
	if(*head_ref!=NULL)
	{    //cout<<"kishor"<<endl;
		while(temp->next!=*head_ref)
		{  
			temp=temp->next;
		}
		temp->next=new_node;
	}
	else
	{  //cout<<"braj"<<endl;
		new_node->next=new_node;
	}
	*head_ref=new_node;
}
void print(Node *head)  
{  
    Node *temp = head;  
    
        do
        {  
            cout << temp->data << " ";  
            temp = temp->next;  
        }  
        while (temp != head);  
    
}  
  
int main()
{
	Node* head=NULL;
	int n; cin>>n;
	int l;
	for(int i=0; i<n; i++)
	{
		cin>>l;
		push(&head,l);
	}
	print(head);
}
