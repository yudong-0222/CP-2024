/*
Q-1-8
*/
#include<bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

int p, ans, n;
int v[26];

//需要傳入x，因為要正確地記錄當前的 x。不傳入會亂掉。
void fun2(int x, int sum) {
    if(x >=n) {
        if(sum <= p) ans = max(ans, sum);
        return;
    }

    fun2(x+1, sum+v[x]);
    fun2(x+1, sum);
}
signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> p; ans = 0;
    for(int i = 0; i < n; ++i) cin >> v[i];
    fun2(0,0);
    cout << ans<< endl;
}