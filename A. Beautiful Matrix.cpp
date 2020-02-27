#include <bits/stdc++.h>
#define ll long long
#define maxN 100
using namespace std;
ll a[27],x,y;
void Enter() {
    for (int i = 0;i < 5;i++) {
        for (int j = 0;j < 5;j++) {
            cin >> a[i];
            if (a[i] == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(2-x)+abs(2-y);
}
void Solve() {

}
int main() {
    Enter();
    Solve();
}

