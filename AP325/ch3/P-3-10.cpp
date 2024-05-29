#pragma GCC optimize("Ofast,fast-math,unroll-loops,no-stack-protector")
#include <bits/stdc++.h>
#define read(type) readInt<type>() // Fast read
#define int long long
#define endl "\n"
#define pb push_back
#define eb emplace_back
#define mk make_pair
#define pii pair<int, int>
#define F first
#define S second
#define vi vector<int>
#define all(x) (x).begin(), (x).end()
#define umap unordered_map
#define uset unordered_set
#define MOD 1e9 + 7
#define imax INT_MAX
#define imin INT_MIN
#define exp 1e9
#define sz(x) (int((x).size()))
using namespace std;

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v(n+1, 0);
    vector<int> cnt(n+1, 0);
    unordered_map<int, int> mp;

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
        mp[v[i]] = 0;
    }

    int nc = 0;
    for(auto &p : mp) p.S = nc++;
    // init the all color

    int l = 0, r = 0, small = 0, ans = n;
    //small = number of color in window [l ,r-1];

    //make sliding window
    while(r < n) {
        int color = mp[v[r]];
        cnt[color]++;
        if(cnt[color] == 1) small++;
        r++;
        //shrink left side if we catch same number;
        while(1) {
            color = mp[v[l]];
            //if the color is only have 1, we couldn't move right.
            if(cnt[color] == 1) break;
            cnt[color]--;
            l++;
        }
        if(small == nc) ans = min(r-l , ans);
    }
    cout << ans << endl;
}