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
void inOrder(Node* root)
{ if(root==NULL)
    return;
  inOrder(root->left);
  cout<<root->data<<" ";
  inOrder(root->right);
}
int Sumproprty(Node* root)
{  int l=0; 
   int r=0;
	if(root==NULL||(root->left==NULL && root->right==NULL))
	return 1;
	else
	{  if(root->left!=NULL)
		l=root->left->data;
		if(root->right!=NULL)
		r=root->right->data;
		if(root->data==(l+r) && Sumproprty(root->left) && Sumproprty(root->right))
		return 1;
		else
		return 0;
	}
}
int main()
{
	int n; cin>>n;
	Node* root=NULL;
map<int,Node*>m;
	while(n--)
	{	
	 Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent=new Node(n1);
           m[n1]=parent;
           if(root==NULL)
           root=parent;
        }
        else
           parent = m[n1];
        Node *child = new Node(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     inOrder(root);
     cout<<endl;

     if(Sumproprty(root))
     cout<<"Tree has Child sum proprty"<<endl;
     else
     cout<<"Three has Not child sum proprty"<<endl;
     
}

