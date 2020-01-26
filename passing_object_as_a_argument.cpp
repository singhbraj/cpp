#include<bits/stdc++.h>
using namespace std;
class Time{
	int h;
	int m;
	public:
	void gettime(int, int);
	void puttime();
	void sum(Time,Time);
};
void Time::gettime(int hh,int mm)
{	
     	h=hh;
     	m=mm;
}
void Time::puttime()
{
    cout<<"Hours "<<h<<endl;
	cout<<"Minutes "<<m<<endl;
}
void Time::sum(Time t1, Time t2)
{
	m=t1.m+t2.m;
	int hour=m/60;
	m=m%60;
	h=t1.h+t2.h+hour;
}

int main()
{
	Time t1,t2,t3;
	t1.gettime(2,45);
	t2.gettime(3,25);
	t3.sum(t1,t2);
	t3.puttime();
}
