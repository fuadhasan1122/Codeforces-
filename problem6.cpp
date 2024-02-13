#include<bits/stdc++.h>
using namespace std;
int main(){
  int t,n,lsd,msd;
  cin>>t;
  while (t--)
  {
    cin>>n;
    lsd=n%10;
    while(n!=0){
      msd=n%10;
      n=n/10;
    }
    cout<<"Sum "<<"= "<<lsd+msd<<endl;
  

}
}