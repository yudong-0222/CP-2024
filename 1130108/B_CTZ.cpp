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
    string s;
    while(n != 0) {
        if(n % 2 == 1) s = "1" + s;
        else s = "0" + s;
        n /= 2;
    }
    // cout << s << endl;

    int cnt = 0;

    for(int i = s.size()-1; i >= 0; i--) {
        if(s[i] != '0') break;
        else cnt ++;
    }

    cout << cnt << endl;
}