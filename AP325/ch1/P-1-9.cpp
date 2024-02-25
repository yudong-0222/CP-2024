/*
N-QUEEN
N*N 棋盤
*/


#include <bits/stdc++.h>
#define read(type) readInt<type>() // Fast read
#define int long long
#define endl "\n"
using namespace std;


int nq(int n, int k, int p[]) {
    if(k >= n) return 1;
    int total = 0; bool valid[n];

    for(int i = 0; i < n; ++i) valid[i] = true;
    for(int j = 0; j < k; ++j) {
        valid[p[j]] = false;
        int i = k-j+p[j];
        if(i < n) valid[i] = false;
        i = p[j]-(k-j);
        if(i>=0) valid[i] =false;
    }
    for(int i = 0; i < n; ++i) {
        if(valid[i]) p[k] = i, total+=nq(n,k+1,p);
    }

    return total;

}


signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int p[15];

    //對於所有 N 的解法數量：

    // for(int i =1; i < 12; ++i) {
    //     cout << nq(i, 0, p) << " ";
    // }

    //針對特定 N 的解法數量
    
    cout << nq(n,0,p) << endl;

    cout << endl;
}