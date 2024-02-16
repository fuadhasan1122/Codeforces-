#include <bits/stdc++.h>
using namespace std;

int main() {
    int D;
    cin >> D;
    
    long long sum = 0;
    for (int i = 0; i < D; ++i) {
        int p, q;
        cin >> p >> q;
        sum += (q - p) * (q - p);
    }

    double distance = sqrt(sum);
  cout  << setprecision(13) << distance << endl;

    return 0;
}
