#include <iostream>

using namespace std;

int main()
{
  int n, x;
  cin >> n >> x;

  int total = 0;

  for (int i = 0; i < n; i++)
  {
    int Si;
    cin >> Si;

    if (Si <= x)
    {
      total += Si;
    }
  }

  cout << total << endl;

  return 0;
}
