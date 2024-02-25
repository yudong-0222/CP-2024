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

int p[13][13];

int ch(int x1, int x2, int y1, int y2) {
    int m = x2 - x1 + 1; int n = y2 - y1 + 1;
    if(x1 == x2 || y1 == y2) return 0;

    int u = 0, d = 0, l = 0, r = 0;

    for(int i = x1;  i<=x2; ++i) {
        if(p[i][y1] == 1) u++;
        if(p[i][y2] == 1) d++;     
    }
    for(int i = y1; i <= y2;++i) {
        if(p[x1][i] == 1) l++;
        if(p[x2][i] == 1) r++;
    }
    u = min(u, m-u);
    d = min(d, m-d);
    l = min(l, n-l);
    r = min(r, n-r);

    int x = min(ch(x1+1, x2, y1, y2) + l, ch(x1, x2-1, y1, y2)+ r);
    int y = min(ch(x1, x2, y1+1, y2) + u, ch(x1,x2,y1,y2-1) + d);

    return min(x,y);
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int m,n; cin >> m >> n;
    for(int i = 0; i < m; ++i) {
        for(int j = 0; j < n;++j) {
            cin >> p[i][j];
        }
    }
    cout << ch(0,m-1, 0, n-1) << endl;
}