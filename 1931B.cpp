#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        long long sum = 0;
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        long long avg = sum / n;

        if (sum % n == 0) {
            bool possible = true;
            long long excess = 0;
            for (int i = 0; i < n; ++i) {
                if (a[i] > avg) {
                    excess += a[i] - avg;
                } else if (a[i] < avg) {
                    if (excess >= avg - a[i]) {
                        excess -= avg - a[i];
                    } else {
                        possible = false;
                        break;
                    }
                }
            }
            if (possible) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}
