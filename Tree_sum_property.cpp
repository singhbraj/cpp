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
int sum(Node* root)
{
	if(root==NULL)
	  return 0;
	return sum(root->left)+root->data+sum(root->right);
}
int isSumTree(struct Node* node) 
{ 
    int ls, rs; 
  
    /* If node is NULL or it's a leaf node then 
       return true */
    if(node == NULL || 
            (node->left == NULL && node->right == NULL)) 
        return 1; 
  
   /* Get sum of nodes in left and right subtrees */
   ls = sum(node->left); 
   rs = sum(node->right); 
   cout<<ls<<" "<<rs<<endl;
  
   /* if the node and both of its children satisfy the 
       property return 1 else 0*/
    if((node->data == ls + rs)&& 
            isSumTree(node->left) && 
            isSumTree(node->right)) 
        return 1; 
  
   return 0; 
} 

int main()
{
	  Node *root  = new Node(26); 
    root->left         = new Node(10); 
    root->right        = new Node(3); 
    root->left->left   = new Node(4); 
    root->left->right  = new Node(6); 
    root->right->right = new Node(3); 
    if(isSumTree(root)) 
        printf("The given tree is a SumTree "); 
    else
        printf("The given tree is not a SumTree "); 
}

