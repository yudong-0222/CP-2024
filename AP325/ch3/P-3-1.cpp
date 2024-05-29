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
 	
 	int n; cin >> n;
 	vector<int> parent(n+5, 0);
 	vector<int> h(n+5, 0);
 	vector<int> v(n+5, 0);
 	queue<int> q;
 	
 	for(int i = 1; i <= n; ++i) {
 		cin >> v[i];
 		if(v[i] == 0) q.push(i);
 		for(int j = 0; j < v[i]; ++j) {
 			int x;cin >> x;
 			parent[x] = i;
 		}
 	}
 	
 	int root, tot = 0;
 	
 	while(1) {
 		int f = q.front();
 		q.pop();
 		
 		tot += h[f]; //add the height into total.
 		int p = parent[f];
 		//if it's root => NO parent
 		if(p == 0) {root = f;break;}
 		
 		h[p] = max(h[p], h[f]+1);
 		if(--v[p] == 0) q.push(p);
 	}
 	cout << root << endl << tot << endl;
 	
}