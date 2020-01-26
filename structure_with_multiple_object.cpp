#include<bits/stdc++.h>
using namespace std;
struct person{
	string name;
	int age;
	float salary;
	void get()
	{
		cin>>name>>age>>salary;
	}
	display();

};
person::display()
{
		
		cout<<name<<" "<<endl;
		cout<<age<<" "<<endl;
		cout<<salary<<" "<<endl;
	
}
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
   	person p;
   	p.get();
   	p.display();
   }
}
