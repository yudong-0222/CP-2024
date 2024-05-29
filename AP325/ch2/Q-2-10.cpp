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
#pragma GCC target("popcnt")
using namespace std;

int p, ans =0;

void rec(vector<int> &v, int i, int sum, vector<int> &s) {
    if(sum > p) return;
    if(i == v.size()) {
        s.eb(sum);
        ans = max(ans, sum);
        return;
    }
    rec(v, i+1, v[i]+sum, s);
    rec(v, i+1, sum, s);
    return;
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);

    int n; cin >> n >> p;
    vector<int> v1,v2;

    for(int i = 0; i < n; ++i) {
        int x; cin >> x;
        if(i < n/2) v1.eb(x);
        else v2.eb(x);
    }

    vector<int> s1,s2;
    rec(v1,0,0,s1);
    rec(v2,0,0,s2);

    sort(all(s1));
    sort(all(s2));

    for(auto e: s1) {
        auto it = upper_bound(all(s2), p-e);

        if(it == s2.begin()) continue;
        --it;
        ans = max(ans, (*it)+e);
    }

    cout << ans << endl;

}