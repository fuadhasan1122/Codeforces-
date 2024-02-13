#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    string s,edu;

     
    cin>> a>> s >>b>> edu >> c;
    if((a+b==c ) || (a-b==c) ||(a*b==c)){
      cout<<"Yes" << endl;
    }
  
    
 else{
   if (s == "+")
   {
     c = a + b;
   }
   else if (s == "-")
   {
     c = a - b;
   }
   else if (s == "*")
   {
     c = a * b;
   }
   cout << c << endl;
 }
 

  return 0;
}