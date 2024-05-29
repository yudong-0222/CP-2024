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

    int n,k; cin >> n >> k;

    vector<int> v(n, 0), pre(n+1, 0);

    for(int i = 0; i < n; ++i) cin >> v[i];
    

    // for(int i = 0;  i < n; ++i) cout << "v: " << v[i] << endl;

    int sum = 0, ans = 0, g = 0;
    for(int l = 0, r = 0; r < n; ++r) {
        sum += v[r];
        // cout << "g: " << v[r] << endl;
        while(sum > k) {
            sum -= v[l];
            l++;
        }
        
        if(sum > ans) ans = sum, g = 1;
        else if(sum == ans) g++;
    }
    cout << ans << endl << g << endl;
}