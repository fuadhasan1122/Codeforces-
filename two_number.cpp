#include <bits/stdc++.h>
using namespace std;

int main()
{
  float n, m;
  cin >> n >> m;

  cout << "floor " << n << " / " << m << " = " << floor(n / m) << endl;
  cout << "ceil " << n << " / " << m << " = " << ceil(n / m) << endl;
  cout << "round " << n << " / " << m << " = " << round(n / m) << endl;
  return 0;
}