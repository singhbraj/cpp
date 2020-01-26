#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};
void levelOrder(Node* root)
{
	queue<Node*>q;
	q.push(root);
	Node* curr;
	while(q.empty()==false)
	{ curr=q.front();
	   cout<<curr->data<<" ";
	   q.pop();
	   if(curr->left)
	   {
	   	q.push(curr->left);
	   }
	   if(curr->right)
	   {
	   	q.push(curr->right);
	   }
		
	}
}
int main()
{
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	levelOrder(root);
	return 0;
}
