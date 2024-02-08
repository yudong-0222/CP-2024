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

struct Cat {
    string name;
    string kit;
    int age;
};

int getlevel(string kit) {
    if(kit == "elder") {
        return 8;
    } else if(kit == "nursy") {
        return 7;
    } else if(kit == "kit") {
        return 6;
    } else if(kit == "warrior") {
        return 5;
    } else if(kit == "appentice") {
        return 4;
    } else if(kit == "medicent") {
        return 3;
    } else if(kit == "deputy") {
        return 2;
    } else if(kit == "leader") {
        return 1;
    }
}

bool check(const Cat &a, const Cat &b) {
    if(a.kit == b.kit) {
        if(a.kit == "appentice") {
            if(a.age == b.age) return a.name < b.name;
            else return a.age < b.age;
        }
        if(a.age == b.age) return a.name < b.name;
        else return a.age > b.age;
    } else {
        int ap = getlevel(a.kit), bp = getlevel(b.kit);
        return ap > bp;
    }
}


signed main(void) {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,m; cin >> n >> m;

    Cat ct[n];
    for(int i = 0; i < n; ++i) cin >> ct[i].name >> ct[i].kit >> ct[i].age;

    sort(ct, ct + n, check);

    for(int i = 0; i < m; ++i) cout << ct[i].name << endl;
}