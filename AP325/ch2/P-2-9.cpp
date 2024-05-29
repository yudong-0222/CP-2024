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

void rec(vector<int> &v, int i, int pr, umap<int,int> &m, int p) {
    if(i >= v.size()) {
        m[pr] += 1;
        return;
    }
    rec(v, i+1, (pr*v[i])%p, m ,p);
    rec(v, i+1, pr, m, p);
    return;
}

int pow(int a, int n, int p) {
    if(n == 0) return 1;
    if(n & 1) return (pow(a, n-1, p)*a) % p;
    int t = pow(a, n/2 ,p);
    return (t*t) % p;
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int i,n, p; cin >> n >> p;
    vector<int> v1,v2;
    
    for(i = 0; i < n/2; ++i) {int x; cin >> x; v1.eb(x);}
    for( ; i < n; ++i) {int x; cin >> x; v2.eb(x);}

    umap<int, int> m1,m2;
    m1[1] -= 1; m2[1] -= 1;
    rec(v1, 0, 1, m1, p);
    rec(v2, 0, 1, m2, p);

    int ans = (m1[1] + m2[1]) %p;

    for(auto e : m1) {
        int a = e.F, b = e.S;
        int inverse = pow(a, p-2, p);

        auto it = m2.find(inverse);
        if(it != m2.end()) ans = (ans + b*it->S)%p;
    }

    cout << ans << endl;

}