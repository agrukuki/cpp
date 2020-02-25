#include <bits/stdc++.h>
#define ll long long
#define maxC 51
using namespace std;
string s,x;
ll arr[maxC],cnt(0);
void Enter() {
    getline(cin,s);
}
void Solve() {
    for (int i = 0;i < s.length();i+=2) {
        x = s.substr(i,1);
        arr[cnt] = x[0]-'0';
        cnt++;
    }
    sort(arr,arr+cnt);
    for (int i = 0;i < cnt-1;i++) {
        cout << arr[i] << "+";
    }
    cout << arr[cnt-1];
}
int main() {
    Enter();
    Solve();
}
