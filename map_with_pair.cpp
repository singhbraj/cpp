#include<bits/stdc++.h>
using namespace std;

int main()
{
 int t;
 cin>>t;
 bool z;
  while(t--)
  {
      unordered_map<string , pair<int,int>>m;
      string s;
      int x,r=0;
      int n;
      cin>> n;
      for(int i=0;i<n;i++)
      {
          cin>> s>> z;
           if(z)
           {
                  m[s].first+=1;
           }
               else
                    m[s].second+=1;
           }
             for (auto i:m)
             {
                 r+=max(i.second.first,i.second.second);
             }
               cout<< r<< endl;
      }
  }
             
               
          
    
    
    
        
    

