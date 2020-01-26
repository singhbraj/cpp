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
void preorder(Node* root)
{
	stack<Node*>s;
	Node* curr=root;
	s.push(curr);
	while(s.empty()==false)
	{
		curr=s.top();
		s.pop();
		cout<<curr->data<<" ";
		if(curr->right)
		{
			s.push(curr->right);
		}
		if(curr->left)
		{
			s.push(curr->left);
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
	preorder(root);
}
