#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin >> t;
long long a,b,rem,res;

while(t--){
cin>>a>>b;
    rem = b%a;
	res = pow(a,rem+1);
	res = res%10;
	cout<<res<<endl;
	
}
return 0;
}