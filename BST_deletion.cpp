#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
}*root=NULL;
Node* newNode(int key)
{
	Node* newnode=new Node();
	newnode->data=key;
	newnode->left=newnode->right=NULL;
	return newnode;
}
Node* insert(Node* node, int key)
{
	if(node==NULL)
	{
		return newNode(key);
	}
	if(key<node->data)
	{
		node->left=insert(node->left,key);
	}
	else if(key>node->data)
	{
		node->right=insert(node->right,key);
	}
	return node;
}
int height(Node* root)
{
	int x,y;
	if(root==NULL)
	{
		return 0;
	}
	x=height(root->left);
	y=height(root->right);
	return x>y?x+1:y+1;
}
Node* inPre(Node* node)
{
	while(node&&node->right!=NULL)
	{
		node=node->right;
	}
	return node;
	
}
Node* inSuc(Node* node)
{
	while(node&&node->left!=NULL)
	{
		node=node->left;
	}
	return node;
	
}
Node* Delete(Node* node, int key)
{   Node* temp;
    if(node==NULL)
    {
    	return node;
	}
	if(root->left==NULL && root->right==NULL)
	{
		if(node==root)
		{
			root=NULL;
	  }
			free(node);
		return NULL;
	}
	if(key<node->data)
	{
		node->left=Delete(node->left,key);
	}
	else if(key>node->data)
	{
		node->right=Delete(node->right,key);
	}
	else
	{
		if(height(node->left)>height(node->right))
		{
			temp=inPre(node->left);
			node->data=temp->data;
			node->left=Delete(node->left,temp->data);
		}
		else
		{
			temp=inSuc(node->right);
			node->data=temp->data;
			node->right=Delete(node->right,temp->data);
		}
	}
	return node;
}
void inOrder(Node* root)
{
	if(root==NULL)
	return;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}
int main()
{root=insert(root,50);
insert(root,40);
insert(root,10);
insert(root,30);
insert(root,60);
insert(root,70);
inOrder(root);
cout<<endl;
Delete(root,50);
inOrder(root);
cout<<endl;
	
}
