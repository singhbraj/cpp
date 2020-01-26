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
/*Node* newNode(int data)
{
	Node* newnode=new Node();
	newnode->data=data;
	newnode->left=newnode->right=NULL;
}*/
void inorder(Node* root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
Node* insert(Node* node, int key)
{
	if(node==NULL)
	return new Node(key);
	if(key<node->data)
	node->left=insert(node->left,key);
	else if(key>node->data)
	node->right=insert(node->right,key);
}
int main()
{
	Node* root=NULL;
	root=insert(root,50);
	insert(root,30);
	insert(root,20);
	insert(root,40);
	insert(root,70);
	insert(root,60);
	insert(root,80);
	inorder(root);
	return 0;
}
