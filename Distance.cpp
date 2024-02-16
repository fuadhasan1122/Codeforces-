// IN THE NAME OF ALLAH
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    double dx = pow(x2 - x1, 2);
    double dy = pow(y2 - y1, 2);
    float distance = sqrt(dx + dy);

    cout << distance << endl;

    return 0;
}
