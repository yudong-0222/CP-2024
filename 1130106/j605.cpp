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
    int sc = 0, tt = 0, big = imin,bad = 0;
    int rn = n;
    while(n--) {
        int s,t; cin >> t >> s;
        if(s == -1) bad++;
        else {
            if(s > big) big = s, tt = t;
        }
    }
    sc = (big - rn)- (bad * 2);
    if(sc < 0) sc = 0;
    cout << sc << " " << tt << endl;
}