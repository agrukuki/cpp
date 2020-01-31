#include <bits/stdc++.h>
#define ll long long
using namespace std;
string fc,c[5];
void Enter() {
    cin >> fc;
    for (int i = 0;i < 5;i++) {
        cin >> c[i];
    }
}
void Solve() {
    for (int i = 0;i < 5;i++) {
        if (fc[0] == c[i][0]||fc[1] == c[i][1]) {
            cout << "YES";
            return;
        }
    }
    cout << "NO";
}
int main() {
    Enter();
    Solve();
}



