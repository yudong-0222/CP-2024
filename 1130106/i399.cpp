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

    vector<int> v,t(10,0);

    for(int i = 0; i < 3; ++i) {
        int a; cin >> a; v.eb(a);
    }
    for(int i : v) t[i]++;
    int p = imin;
    for(int i : t) p = max(p, i);
    cout << p << " ";
    set<int,greater<int> > s;
    for(int i : v) s.insert(i);
    for(int i : s) cout << i << " ";
    cout << endl;
}