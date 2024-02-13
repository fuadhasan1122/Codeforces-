#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int prelen = 1;
    int maxlen = 1;

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == s[i - 1])
        {
            prelen++;
            if (prelen > maxlen)
            {
                maxlen = prelen;
            }
        }
        else
        {
            prelen = 1;
        }
    }

    cout << maxlen << endl;

    return 0;
}
