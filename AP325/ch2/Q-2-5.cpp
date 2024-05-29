#include <bits/stdc++.h>
#define int long long
#define endl "\n"
using namespace std;

const int p = 1e9+7;

vector<int> A = {1,1,1,0};

//矩陣乘法。將矩陣攤平成一維
vector<int> multi22(const vector<int>& a, const vector<int>& b) {
    vector<int> v(4,0);
    v[0] = (a[0]*b[0] + a[1]*b[2]) % p;
    v[1] = (a[0]*b[1] + a[1]*b[3]) % p;
    v[2] = (a[2]*b[0] + a[3]*b[2]) % p;
    v[3] = (a[2]*b[1] + a[3]*b[3]) % p;

    return v;
}

vector<int> powA(int e) {
    if(e == 1) return A;
    if(e & 1) {
        vector<int> v = powA((e-1)/2);
        return multi22(multi22(v,v), A);
    }
    vector<int> v = powA(e/2);
    return multi22(v,v);
}

int fb(int e) {
    if(e == 1) return 1;
    vector<int> v = powA(e-1); //計算 Matrix A 的 n-1 次方。
    return v[0] % p; // 費氏數列的第 n 項 就是 A 矩陣的 [0][0]
}

signed main(void) {
    ios_base::sync_with_stdio(0); cin.tie(0);

    int n;
    while(cin >> n) {
        if(n == -1) break;
        cout << fb(n) << endl;
    }
}