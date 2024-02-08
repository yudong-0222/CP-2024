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
    vector<int> v(n);

    if(n == 1) cout << 1 << endl;

    if(n < 4) cout << "NO SOLUTION\n";
    else {
        int ss = 2;
        for(int i = 0; i < n/2; ++i) {
            v[i] = ss;
            ss+=2;
        }
        ss = 1;
        for(int i = n/2; i < n; ++i) {
            v[i] = ss;
            ss+=2;
        }
        for(int i : v) cout << i << " ";
        cout << endl;
    }

}

// 給定一數字 n，用 1 ~ n 構造陣列，其中不存在任意兩個相鄰數字差為 1
// n = 1 ~ 4 的話，不管怎麼排列都會有一組相鄰數字差為 1

/*
所以我們將數組拆成一半
一半是
*/