#include <bits/stdc++.h>
using namespace std;

int main()
{
//cout << "Hello World!" << endl;
ios_base::sync_with_stdio (false);
unsigned long long int n;

while(cin>>n)
{
int c=0;
while(n)
{
n=n&(n-1);
c++;
}
cout<<c<<endl;
}

return 0;
}
