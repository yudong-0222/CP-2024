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

//output: Maximum length of the different color-shit.

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    vector<int> v(n,0);
    vector<int> cnt(n, 0);
    umap<int, int> mp;

    for(int i = 0; i < n; ++i) {
        cin >> v[i];
        mp[v[i]] = 0;
    }

    int nc = 0;
    for(auto &p : mp) p.second = nc++;
    
    int l = 0, r = 0, ans = 0;

    while(r < n) {
        int current = mp[v[r]];
        cnt[current] ++;
        r++;
        
        while(cnt[current] > 1) cnt[mp[v[l]]]--,l++;
    
        ans = max(ans, r-l);
    }
    cout << ans << endl;
}