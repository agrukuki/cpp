#include <bits/stdc++.h>
#define ll long long
using namespace std;
int n,k,t,cnt(0);
int a[100];
void Enter() {
    cin >> n >> k;
}
void Solve() {
    for (int i = 0;i < n;i++) {
        cin >> a[i];
    }
    for (int i = 0;i < n;i++) {
        if (a[i] >= a[k-1] && a[i] > 0) {
            cnt++;
            //cout << a[k-1] << " " << a[i] << endl;
        }
    }
    cout << cnt;
}
int main() {
    Enter();
    Solve();
}
