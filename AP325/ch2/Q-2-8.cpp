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

int pow(int a, int s, int p) {
    if(s == 0) return 1;
    if(s & 1) return (pow(a, s-1, p)*a)%p;
    int t = pow(a, s/2, p);
    return (t*t)%p;
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,p; cin >> n >> p;
    while(n--) {
        int x; cin >> x;
        cout << pow(x, p-2, p) << " ";
    }
    cout << endl;
}