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
    while(n--) {
        int a,b; cin >> a >> b;
        // if(a > b) swap(a,b);
        if(max(a,b) > 2*min(a,b) || (a+b)%3 != 0) cout << "NO\n";
        else cout << "YES\n";
    }  
}