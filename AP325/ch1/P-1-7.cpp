/*
Practice by myself.
*/

#include <iostream>
#define int long long
#define endl "\n"
using namespace std;


int P = 10009, ans = 0, n;
int v[26];

void cal(int x, int prod) {
    if(x >= n) {
        if(prod == 1) ans++;
        return;
    }

    //因為要算幾種可能，因此有兩種選擇：選 and 不選。
    // 1. 選擇 v[x]
    // 2. 不選 v[x]
    cal(x+1, (prod*v[x])%P); // remember to mod P.
    cal(x+1, prod);
}

signed main(void) {
    ios_base::sync_with_stdio(0);cin.tie(0);
    
    cin >> n; ans = 0;
    for(int i = 0; i < n; ++i) cin >> v[i];
    cal(0, 1);
    cout << ans-1 << endl;
}