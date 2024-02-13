#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin>>t;

  while (t--)
  {
    long long int a, b;
    cin >> a >>b;

    long long result = 1;
    while (b > 0)
    {
      if (b % 2 == 1)
        result = (result * a) % 10;
      a = (a * a) % 10;
      b /= 2;
    }

    cout<< result<< endl;
  }

  return 0;
}
