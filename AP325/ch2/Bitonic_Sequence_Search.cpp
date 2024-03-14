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

int bss(vector<int>& v) {
    int n = v.size();
    vector<int> ga(n+1,0);
    ga[0] = 0;

    for(int i = 1; i < n; ++i) ga[i] = v[i] - v[i-1];

    for(int i = 0; i < n; ++i) cout << ga[i] << " ";
    cout << endl;
    
    auto it = lower_bound(ga.begin(), ga.end(), 0);
    int index = distance(ga.begin(), it);
    cout << "差分後的數字: " << *it << endl;
    cout << "對應的原始數字: " << v[index] << endl;
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    vector<int> vv;
    int n; cin >> n;
    for(int i = 0; i < n; ++i) {
        int x; cin >> x; vv.eb(x);
    }

    int gay = bss(vv);
    // cout << "ans: " << vv[gay] << endl;
     
}