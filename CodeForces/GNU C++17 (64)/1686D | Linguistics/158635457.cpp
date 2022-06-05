// Author : Epsilon573
// If it works, don't touch it.
 
#include <bits/stdc++.h>
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;
 
const ll mod  = 1e9+7;
const ld eps  = 1e-9 ;
const ll maxn = 1e5+1;
const ll inf  = 5e18 ;
const ll minf = -inf ;
 
#define mp make_pair
#define pb push_back
#define endl "\n"
 
bool solve()
{
    ll a,b,c,d,n;
    cin >> a >> b >> c >> d;
    string s;
    cin >> s;
 
    if(count(s.begin(),s.end(),'A')!=a+c+d){
        return false;
    }
    
    n = a+b+2*c+2*d;
    s += string(1,s[n-1]);
    
    string curr = string(1,s[0]);
    vector<ll> AB,BA;
 
    ll commonCount = 0;
    for(ll i=1 ; i<=n ; ++i){
        // two consecutive letters, strings break here
        if(s[i]==s[i-1]){
            if(curr.size()==1) {
                // do nothing;
            }
            else if(curr.size()&1){
                commonCount += curr.size()/2;
            }
            else{
                if(curr[0]=='A')
                    AB.pb(curr.size()/2);
                else
                    BA.pb(curr.size()/2);
            }
 
            curr = "";
        }
 
        curr.pb(s[i]);
    }
    
    sort(AB.begin(),AB.end());
    sort(BA.begin(),BA.end());
 
    // try to make enough AB
    ll cntAB = 0, cntBA = 0;
    ll commonCountLeft = commonCount;
 
    for(auto &x : AB){
        ll req = c-cntAB;
        if(req>=x){
            cntAB += x;
            x = 0;
        }
        else{
            cntAB += req;
            x -= req;
        }
    }
 
    for(auto &x : BA){
        ll req = d-cntBA;
        if(req>=x){
            cntBA += x;
            x = 0;
        }
        else{
            cntBA += req;
            x -= req;
        }
    }
 
    if(cntAB<c){
        ll required = c - cntAB;
        cntAB += min(required,commonCountLeft);
        commonCountLeft -= min(required,commonCountLeft);
    
        required = c - cntAB;
 
        // need to borrow from BA
        if(required>0){
            for(auto &x : BA){
                if(!x) continue;
 
                ll req = c-cntAB;
                if(req>=x-1){
                    cntAB += x-1;
                    x = 0;
                }
                else{
                    cntAB += req;
                    x -= req+1;
                }                
            }
        }
    }
 
    if(cntBA<d){
        ll required = d - cntBA;
        cntBA += min(required,commonCountLeft);
        commonCountLeft -= min(required,commonCountLeft);
    
        required = d - cntBA;
 
        // need to borrow from AB
        if(required>0){
            for(auto &x : AB){
                if(!x) continue;
 
                ll req = d-cntBA;
                if(req>=x-1){
                    cntBA += x-1;
                    x = 0;
                }
                else{
                    cntBA += req;
                    x -= req+1;
                }                
            }
        }
    }
 
    return cntAB>=c && cntBA>=d;    
}
 
int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
 
    #ifdef EPSILON
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif
 
    ll t=1;
    cin >> t;
 
    while(t--)
    {
        if(solve())
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
 
    return 0;
} 