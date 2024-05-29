#include <bits/stdc++.h>
#define int long long
#define endl "\n"
#define eb emplace_back

using namespace std;

int p = 10009, ans = 0, n;

void rec(vector<int> &v, int x, int sum) {
    //x 是遞迴層數
    if(x >= n) {
        if(sum == 1) ans ++;
        return;
    }
    rec(v, x+1, (sum*v[x])%p); //選擇v[x]，然後繼續往下遞迴
    rec(v, x+1, sum);
    return;
}

signed main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x; v.eb(x);
    }

    int sum = 1;
    rec(v,0, sum);

    cout << ans-1 << endl;    

}