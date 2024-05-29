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
    
    //二分搜找 S(i)

    vector<int> h(n+1,0),p(n+1,0);
    for(int i = 1; i <= n; ++i) cin >> h[i];
    for(int i = 1; i <= n; ++i) cin >> p[i];

    int ans = 0;
    //put height and index in pair.
    set<pair<int, int> > vt; vt.insert({h[1], 1});
    for(int i = 2; i <= n; ++i) {
        auto it = vt.upper_bound({h[i]+p[i], i});
        if(it == vt.end()) ans += i - 1;
        else ans += i - (*it).S - 1;

        while(!vt.empty() && vt.begin()-> F <= h[i]) vt.erase(vt.begin());
        vt.insert({h[i], i});
    }
    cout << ans << endl;
}