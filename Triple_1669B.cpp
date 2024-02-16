#include<bits/stdc++.h>
using namespace std;
int main ()
{
   long long int  t,n,count=0;
   vector<int>v(n);
   cin>> t;
   while (t--){
    cin>>n;
    for(int i=0; i<n; i++) {
      cin>>v[i];
      sort(v.begin(),v.end());
      if(v[i]==v[i+1]){
        count++;
        if(count==3){
          cout<<v[i]<<endl;
        }
       
        }
         else{
          cout<<"-1"<<endl;
      }
    }


   }

  return 0;
}