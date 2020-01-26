#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* newNode(int key)
{
	Node* newnode=new Node();
	newnode->data=key;
	newnode->left=newnode->right=NULL;
	return newnode;
}
Node* minValuenode(Node* node)
{
	Node* current=node;
	while(current && current->right!=NULL)
	{
		current=current->right;
	}
	return current;
}
Node* deleteNode(Node* node, int key)
{
	if(node==NULL)
	return node;
	else if(key<node->data)
	node->left=deleteNode(node->left,key);
	else if(key>node->data)
	node->right=deleteNode(node->right,key);
	else
	{
		if(node->left==NULL)
		{
			Node* temp=node->right;
			free(node);
			return temp;
		}
		else if(node->right==NULL)
		{
			Node* temp=node->left;
			free(node);
			return temp;
		}
		Node* temp=minValuenode(node->left);
		node->data=temp->data;
		node->left=deleteNode(node->left,temp->data);
	}
	return node;
}
Node* insert(Node* node, int key)
{
	if(node==NULL)
	return newNode(key);
	if(key<node->data)
	node->left=insert(node->left,key);
	else if(key>node->data)
	node->right=insert(node->right,key);
	return node;
}
void inorder(Node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int main()
{
	Node* root=NULL;
	root=insert(root,50);
	insert(root,40);
	insert(root,70);
	insert(root,60);
	insert(root,80);
	inorder(root);
	cout<<endl;
	int key=50;
	deleteNode(root,key);
	inorder(root);
	cout<<endl;
	
	
}

