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

/*
    0 東
    1 南
    2 西
    3 北
*/


signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,px,py,pre_d = 0, dir;
    int l = 0, r =0, t = 0;

    cin >> n >> px >> py;
    for(int i = 1; i < n; ++i) {
        int a,b; cin >> a >> b;
        
        if(a > px) dir = 0;
        else if (a < px) dir = 2;
        else if(b > py) dir = 3;
        else if(b < py) dir = 1;

        if(dir == (pre_d+1)%4) r++;
        else if(dir == (pre_d+2)%4) t++;
        else if(dir == (pre_d + 3)%4) l++;

        pre_d = dir;
        px = a; py = b;
    }
    cout << l << " " << r << " " << t << endl;
}