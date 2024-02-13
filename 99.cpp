#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long  n;
  cin >> n;
  long long result;
  if (n% 100 == 0)
  {
    result = n - 1;
  }
  else
  {
    result = (n/100 + 1)*100 - 1;
  }

 cout << result <<endl;

  return 0;
}
