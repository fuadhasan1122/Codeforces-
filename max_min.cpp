#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,c;
  cin >> a >> b >> c;
  if ((a <= b) && (a <= c)){

     cout << a << " ";
     if(b>=c){
      cout<<b<<endl;

     }
     else{
      cout<<c<<endl;
     }
    
  }
  else if((b <= a) && (b <= c)){
    cout << b << " ";
    if(a<=c){
      cout<<c<<endl;
    }
    else{
      cout << a << endl;
    }
  }
  else if ((c <= a) && (c <= b))
  {
    cout << c << " ";
    if (b <= a)
    {
      cout << a << endl;
    }
    else
    {
      cout << b << endl;
    }
  }

  return 0;
}