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

int x = 0; //諧咖，這從零開始，我一開始打錯。
int cal(string& s, int g) {
    if(s[x] == '1') return g*g; //it;s a n*n block that all are "1".
    if(s[x] == '0') return 0; // is black nigga.
    else {
        int ans = 0;
        for(int i = 0; i < 4 ; ++i) {
            x++; ans+=cal(s, g/2);
        }
        return ans;
    }
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; int k; cin >> s >> k;
    cout << cal(s, k);
}