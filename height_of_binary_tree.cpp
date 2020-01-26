#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
};
Node* newNode(int data)
{
	Node* new_node=new Node();
	new_node->data=data;
	new_node->left=NULL;
	new_node->right=NULL;
}
int height(Node* node)
{
	if(node==NULL)
	{
		return 0;
	}
	else
	{   
		int lheight=height(node->left);
		int rheight=height(node->right);
		cout<<"Braj"<<endl;
		if(lheight>rheight)
		{
		return (lheight+1);}
		else
		{
		return (rheight+1);
	    }
	}
}

int main()
{
	Node* root=newNode(1);
	root->left= newNode(2);
	root->right=newNode(3);
	root->left->left=newNode(4);
	root->left->right=newNode(5);
	cout<<height(root)<<endl;
}
