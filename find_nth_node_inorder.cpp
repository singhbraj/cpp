#include<bits/stdc++.h>
using namespace std;
struct Node{
	int data;
	Node* left;
	Node* right;
	Node(int data)
	{
		this->data=data;
		left=NULL;
		right=NULL;
	}
};
void NthInorder(Node* node, int n)
{	static int count=0;
	if(node==NULL)
	{
		return;
	}
	if(count<=n)
	{
	NthInorder(node->left,n);
	count++;
	if(count==n)
	{
	cout<<node->data<<" ";
   }
	NthInorder(node->right,n);	
	}
}
int main()
{
	  Node* root = new Node(10); 
    root->left = new Node(20); 
    root->right = new Node(30); 
    root->left->left = new Node(40); 
    root->left->right = new Node(50); 
    int n = 4; 
    NthInorder(root, n); 

}
