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
void postorder(Node* root)
{
	stack<Node*>s1,s2;
	Node* curr;
	s1.push(root);
	while(!s1.empty())
	{
		curr=s1.top();
		s1.pop();
		s2.push(curr);
		if(curr->left)
		s1.push(curr->left);
		if(curr->right)
		s1.push(curr->right);
	}
	while(!s2.empty())
	{
		curr=s2.top();
		s2.pop();
		cout<<curr->data<<" ";
	}
}
int main()
{
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	postorder(root);
}
