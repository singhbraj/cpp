#include<bits/stdc++.h>
using namespace std;
int min(int a, int b, int c)
{
	return min(min(a,b),c);
}
int editDis(string s1, string s2, int m, int n)
{ 
	if(n==0)
	return m;
	if(m==0)
	return n;
	if(s1[m-1]==s2[n-1])
	{
		return editDis(s1,s2,m-1,n-1);
	}
	else
	return 1+min(editDis(s1,s2,m,n-1),editDis(s1,s2,n-1,m),editDis(s1,s2,m-1,n-1)); //insert, remove, replace
}
int main()
{
	string s1,s2;
	cin>>s1>>s2;
	int m=s1.length();
	int n=s2.length();
	cout<<editDis(s1,s2,m,n);
}
