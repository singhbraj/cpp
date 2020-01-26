#include<bits/stdc++.h>
using namespace std;
class area{
	int a;
	public:
		void getdata()
		{
			cin>>a;
		}
		void Areaq()
		{
			int res=a*a;
			cout<<res<<endl;
		}
		void Areac()
		{
			int result=a*a*a;
			cout<<result<<endl;
		}
};
int main()
{
	area o;
	o.getdata();
	o.Areaq();
	o.Areac();
	
}
