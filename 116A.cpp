#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t,a,b,pas=0,min=0;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    cin>>a>>b;
    pas=pas-a+b;
    if(pas>min)
    {
      min=pas;
    }
  }
  cout<<min<<endl;
  return 0;
}