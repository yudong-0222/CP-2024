#include <bits/stdc++.h>
#define read(type) readInt<type>() // Fast read
#define int unsigned long long
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

int afk(int a, int b) {
    return (a%b + b) % b;
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    // string s; cin >> s;
    int n; cin >> n;

    int po = 1;
    for(int i = 2; i < n ; ++i ) {
        po = afk(po * i, n);
    }     

    cout << po << endl;
}
