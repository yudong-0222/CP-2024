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

vector<int> v, pref, suff, ppf, ssf;

int cut(int l, int r, int stop) {
    int m = r-l+1;

    if(m < 3 || stop == 0) return 0; //stop conditions

    ppf[l] = pref[l] = v[l]; 
    ssf[r] = suff[r] = v[r];

    //計算距離乘積總和：
    //做兩次前墜河  
    for(int i = l+1; i <= r; ++i) pref[i] = pref[i-1] + v[i];
    for(int i = l+1; i <= r; ++i) ppf[i] = ppf[i-1] + pref[i];
    //做兩次前墜河
    for(int i = r-1; i >= l; --i) suff[i] = suff[i+1] + v[i];
    for(int i = r-1; i >= l; --i) ssf[i] = ssf[i+1] + suff[i];

    int mx = INT_MAX, mi = INT_MIN;

    for(int i = l+1; i < r; ++i) {
        int cost = abs(ppf[i-1] - ssf[i+1]);
        if(cost < mx ||  (cost == mi && i < mi)) mx = cost, mi = i;
    }

    return cut(l, mi-1, stop-1) + cut(mi+1, r, stop-1) + v[mi];
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n,k; cin >> n >> k;
    v.resize(n), pref.resize(n), suff.resize(n), ppf.resize(n), ssf.resize(n);
    for(int i = 0; i < n; ++i) cin >> v[i];
 
    cout << cut(0, n-1, k) << endl;
}