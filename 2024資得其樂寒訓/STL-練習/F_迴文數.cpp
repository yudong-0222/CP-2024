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

    string s; cin >> s;
    int i = 0, j = s.size()-1;
    bool isgay = true;
    while(i <= j) {
        if(s[i] != s[j]) {
            isgay = false;
            break;
        }
        i++;j--;
    }

    cout << (isgay ? "Yes\n" : "No\n");
}