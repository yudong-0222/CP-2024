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

int p[50010];

//法一: normal
int chicken(int left, int right) {
    int m = (p[right] - p[left]) / 2;
    return p[right] - p [left] + chicken(left, m) +chicken(m, right);
}

//法二: 跳躍二分搜

int jump_search(int l, int r) {
    if(r - l <= 1) return 0;
    int m = l;
    int k = (p[r] - p[l]) / 2;

    for(int jump = (r-l)/2; jump > 0; jump>>=1) {
        while(m + jump < r && p[m + jump] < k) m+=jump;
    }
    if(p[m] - p[l] < p[r] - p[m+1])m++;

    return p[r] - p[l] + jump_search(l, m) + jump_search(m, r);
}

signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,l; cin >> n >> l;
    p[0] = 0; p[n+1] = l;
    for(int i = 0; i < n; ++i) cin >> p[i];
    cout << chicken(0, n + 1);
}