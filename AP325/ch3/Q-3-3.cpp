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
#pragma GCC target("popcnt")
using namespace std;


signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s; cin >> s;
    stack<int> S{{0}};
    int sign = 0;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == '+') sign = 0;
        else if(s[i] == '-') sign = 1;
        else if(s[i] == '*') sign = 2;
        else if(s[i] == '/') sign = 3;
        else {
            int dg = s[i] - '0';
            if(sign == 0) S.emplace(dg);
            else if(sign == 1) S.emplace(-dg);
            else if(sign == 2) { int tp = S.top(); S.pop(); S.emplace(tp*dg); }
            else if(sign == 3) { int tp = S.top(); S.pop(); S.emplace(tp / dg); }
        }
    }
    
    int ans = 0;
    //check if there is still have shit.
    while(S.size()) {
        int tp = S.top(); S.pop();
        ans += tp;
    }

    cout << ans << endl;
}