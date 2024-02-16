// IN THE NAME OF ALLAH
#include<bits/stdc++.h>
using namespace std;

int main() {
    int h,m,s;
    string a;
    cin >> h >> m >> s >> a ;
    int total;
    if (a == "AM") {
        total = h * 3600 + m * 60 + s;
    } else {
        total = (h + 12) * 3600 + m * 60 + s;
    }
  cout<< total <<endl;
    return 0;
}