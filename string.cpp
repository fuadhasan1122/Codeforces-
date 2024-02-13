#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    string result = "";
    set<char> seen;

    for (int i = 0; i < s.length(); i++)
    {
      if (seen.count(s[i]) == 0)
      {
        result += s[i];
        seen.insert(s[i]);
      }
      else
      {
        result = "";
        seen.clear();
        seen.insert(s[i]);
      }
    }

    cout << result << endl;
  }

  return 0;
}
