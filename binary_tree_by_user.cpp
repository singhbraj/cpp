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
	int t; cin>>t;
	while(t--)
	{
		int n; cin>>n;
		Node* root=NULL;
		while(n--)
		{
			int n1,n2;
			char ch;
			cin>>n1>>n2>>ch;
			Node* parent;
			
			map<int,Node*>m;
			if(m.find(n1)==m.end())
			{
				parent=new Node(n1);
				m[n1]=parent;
				if(root==NULL)
				{
					root=parent;
				}
			}
			else
			parent=m[n1];
			Node* child=new Node(n2);
			if(ch=='L')
			{
				root->left=child;
			}
			if(ch=='R')
			{
				root->right=child;
			}
		}
		inorder(root);
		cout<<endl;
	}
}
