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

bool howtocode(pii a, pii b) {
    if(a.F == b.F) return a.S > b.S;
    else return a.F < b.F;
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,a,b; cin >> n;
    vector<pair<int, int> > p;

    for(int i = 0; i < n; ++i) {
        cin >> a >> b;
        p.emplace_back(a,b);
    }

    sort(p.begin(), p.end(), howtocode);

    for(int i = 0; i < n; ++i) {
        cout << p[i].F << " " << p[i].S << endl;
    }

}