#include <bits/stdc++.h>
using namespace std;
int main()
{
  int number;
  cin >> number;
  int res = number / 1000;
  if (res % 2 == 0)
  {
    cout << "EVEN" << endl;
  }
  else
  {
    cout << "ODD" << endl;
  }
  return 0;
}