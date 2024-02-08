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

int eval() {
    int x,y;
    string s; cin >> s;
    
    if(s[0] == 'f') {
        x = eval();
        return 2*x - 1;
    } else if(s[0] == 'g') {
        x = eval(); y = eval();
        return x + 2*y - 3;
    } else {
        return atoi(s.c_str());
    }
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int ans = eval();
    cout << ans << endl;
}