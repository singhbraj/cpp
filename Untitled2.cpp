#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;
int fun(string s)
{
int n=s.length();
int i,j,cl;
int l[n][n];
for(int i=0; i<n; i++)
l[i][i]=1;
for(cl=2; cl<=n; cl++)
{
    for(int i=0; i<n-cl+1; i++)
    {
        j=i+cl-1;
        if(s[i]==s[j] && cl==2)
        {
         l[i][j]=2;
        }
        else if(s[i]==s[j])
        {
            l[i][j]=l[i+1][j-1]+2;

        }
        else
        l[i][j]=max(l[i][j-1],l[i+1][j]);
    }

}
return l[0][n-1];
}
int main() {
 string s; cin>>s;
 int r=fun(s);
 cout<<r<<endl;
}
