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

int p[50010];

int chicken(int left, int right) {
    int m = (p[right] - p[left]) / 2;
    return p[right] - p [left] + chicken(left, m) +chicken(m, right);
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,l; cin >> n >> l;
    p[0] = 0; p[n+1] = l;
    for(int i = 0; i < n; ++i) cin >> p[i];
    cout << chicken(0, n + 1);
}