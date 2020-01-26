#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* next;
};
void push(Node** head_ref, int new_data)
{
	Node* new_node=new Node();
	new_node->data=new_data;
	new_node->next=*head_ref;
	*head_ref=new_node;
}
bool detectLoop(Node* head)
{
	set<Node*> s;
	while(head!=NULL)
	{
		if(s.find(head)!=s.end())
		return true;
		s.insert(head);
		head=head->next;
	}
	
}
void print(Node* head)
{
while(head!=NULL)
{
	cout<<head->data<<" ";
	head=head->next;
}
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
		push(&head,l);
	}
	print(head);
	head->next->next->next=head;
	 if (detectLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
  
    return 0; 
}
