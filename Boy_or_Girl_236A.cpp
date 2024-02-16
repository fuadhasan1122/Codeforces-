#include<bits/stdc++.h>
using namespace std;
int main ()
{
  string s;
  cin>>s;
  for(int i=0; i<s.size();i++){
    if(s[i]!=s[i+1])
    {
      cout<< "CHAT WITH HER!" <<endl;
    }
    else
    {
      cout << "IGNORE HIM!"<<endl;
    }
  }


  return 0;
}