#include<bits/stdc++.h>
using namespace std;
int main()
{
  
   int t=1;
   cin>>t;
   const int n=80;
   vector<string>ans(n,"forg");
   for (char a='a';a<='z';a++){
    for(char b='b';b<='z';b++){
      for(char c='c';c<='z';c++){
        string s;
        s.push_back(a);
        s.push_back(b);
        s.push_back(c);
        int val =int(a) + int(b) + int(c)- 'a'*3;
        ans[val]=(ans[val]=="frog" ? s:ans[val]);

      }
    }
   }
   while(t--){
    int n;
    cin>>n;
    cout<< ans[n-3]<<endl;
   }

   return 0;
}