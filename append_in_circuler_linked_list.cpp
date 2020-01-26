#include<bits/stdc++.h>
using namespace std;
class Node{
	public:
		int data;
		Node* next;
};
void append(Node** head_ref, int data)
{
	Node* new_node=new Node();
	new_node->data=data;
	new_node->next=*head_ref;
	Node* last=*head_ref;
	if(*head_ref!=NULL)
	{
		while(last->next!=*head_ref)
		{
			last=last->next;
		}
		last->next=new_node;
	}
	else
	{
		new_node->next=new_node;
		*head_ref=new_node;
	}
}
void print(Node* head)
{
	Node* temp=head;
	do{
		cout<<temp->data<<" ";
		temp=temp->next;
	} while(temp!=head);
	cout<<endl;
}
int main()
{
	Node* head=NULL;
	int n; cin>>n;
	int l;
	for(int i=0; i<n; i++)
	{
		cin>>l;
		append(&head,l);
	}
	print(head);
}
