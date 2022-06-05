#include "bits/stdc++.h"
 
using namespace std;
 
#define int long long
#define endl '\n'
#define pb push_back
#define mp make_pair
#define fi first
#define se second
#define all(X) (X).begin(), (X).end()
#define allr(X) (X).rbegin(), (X).rend()
#define sz(X) (int)X.size()
#define setbits(X) __builtin_popcountll(X)
#define fix(X) fixed << setprecision(X)
#define mem0(X) memset((X), 0, sizeof((X)))
#define mem1(X) memset((X), -1, sizeof((X)))
 
void oreo() {
    int n, x;
    cin >> n >> x;
    n %= 6;
    vector<int> place(3);
    place[0] = 0;
    place[1] = 1;
    place[2] = 2;
    for (int i = 0; i < n; ++i) {
        if (i & 1) {
            swap(place[1], place[2]);
        } else {
            swap(place[0], place[1]);
        }
    }
    cout << place[x] << endl;
}
 
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    int t = 1;
//    cin >> t;
    while (t--) oreo();
    return 0;
}
 
/* Thanking Almighty !! The Intellectual Odyssey Rages On */