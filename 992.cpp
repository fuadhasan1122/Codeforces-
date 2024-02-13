#include<bits/stdc++.h>
using namespace std;
int main()
{

  int n;
  cin>>n;
  int price=0;
  int a=0;
  int m=0;
  for(int i=99;i<=9999;i=i+100){
    a=n-i;
    if(a<0){
      a=i-n;
    }
    if(a<100){
      m=i+100-n;
      if(m<0){
        m=n-i-100;
      }
      if(a<m){
        price=i;
      }
      else{
        price=i+100;
      }
      break;
    }
  }
  cout<<price<<endl;
  return 0;
}