#include <cmath>
#include <cstdio>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <deque>
#include <map>
#include <set>
#define FOR(j,k,n) for (int j = k; j < (int)(n); j++)
#define ROF(j,n,k) for (int j = n; j >=k; j--)
#define MAXN 100000000000000000
#define test(t)  int t; cin>>t; while(t--)
#define pb push_back
#define mp make_pair
using namespace std;
typedef long int lli;
lli m,n,k,p1,p2,p3,p,f,b[102000];
string s1,s2;
int main(){
    cin>>n>>m;
    lli a[n][m];
    FOR(i, 0, n)
        FOR(j, 0, m)
        {
            scanf("%ld",&a[i][j]);
            if(i)
                a[i-1][j] = (a[i][j] >= a[i-1][j]);
        }
    FOR(i1, 0, n)
        FOR(j, 0, m)
        {
            lli i = n-i1-1;
            if(i==n-1)
                a[i][j] = 0;
            if(a[i][j])
                a[i][j] = 1+a[i+1][j];
        }
    FOR(i, 0, n-1)
        FOR(j, 0, m)
            b[i] = max(b[i], a[i][j]);
    cin>>k;
    while (k--) {
        
        cin>>p1>>p2;
 
        if(b[p1-1] >= p2-p1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    
    return 0;
}
 
 