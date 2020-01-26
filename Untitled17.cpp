#include<bits/stdc++.h>
using namespace std;
class item{
	int num;
	float cost;  //private data member by default
	public:
		void getdata(int a, float b)
		{ num=a;
		  cost=b;	
		}
		void putdata()
		{
			cout<<"Number is :"<<num<<endl;
			cout<<"Cost is :"<<cost<<endl;
		}
};
int main()
{
	int t; cin>>t;
	while(t--)
	{
		item o;
		int a; cin>>a;
		float c; cin>>c;
		o.getdata(a,c);
		o.putdata();
		
	}
}
