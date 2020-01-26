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
void delete_Node(Node* root, Node* d_node)
{
	queue<Node*>q;
	q.push(root);
	Node* curr;
	while(!q.empty())
	{
		curr=q.front();
		q.pop();
		if(curr==d_node)
		{
			curr==NULL;
			delete(d_node);
			return;
		}
		
		if(curr->left)
		{
			if(curr->left==d_node)
			{
				curr->left=NULL;
				delete(curr->left);
				return;
			}
			else
			q.push(curr->left);
		}
			if(curr->right)
		{
			if(curr->right==d_node)
			{
				curr->right=NULL;
				delete(curr->right);
				return;
			}
			else
			q.push(curr->right);
		}
	
	}
}
Node* deleteNode(Node* root, int key)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->left==NULL && root->right==NULL)
	{
		if(root->data=key)
		{
			return NULL;
		}
		else
		return root;
	}
	queue<Node*>q;
	q.push(root);
	Node* curr;
	Node* key_node=NULL;
	while(!q.empty())
	{
		curr=q.front();
		q.pop();
		if(curr->data==key)
		{
			key_node=curr;
		}
		if(curr->left)
		{
			q.push(curr->left);
		}
		 if(curr->right)
	   {
	   	q.push(curr->right);
	   }
	}
	if(key_node!=NULL)
	{
		int x=curr->data;
		delete_Node(root,key_node);
		key_node->data=x;
	}
	return root;
}
void InOrder(Node* node)
{
	if(node==NULL)
	return;
	InOrder(node->left);
	cout<<node->data<<" ";
	InOrder(node->right);
}
int main()
{
	Node* root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	int n; cin>>n;
	InOrder(root);cout<<endl;
	root=deleteNode(root,n);
	InOrder(root);
	
}

