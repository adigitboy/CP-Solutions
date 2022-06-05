#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;

const int M = 1e9+7;
ll mod(ll x){
    return (x%M + M)%M;
}

ll mul(ll a, ll b){
    return mod((mod(a)*mod(b)));
}

ll add(ll a , ll b){
    return mod(mod(a)+mod(b));
}

void solve(){
    ll n;
    cin>>n;
    ll total=0;
    for(int i=0;i<n;i++){
        ll x;
        cin>>x;
        total+=x;
    }
    int q;
    cin>>q;
    ll ans=total;
    while(q--){
        int x;
        cin>>x;
        ans=add(ans,ans);
        cout<<ans<<"\n";
    }
}  
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            // cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}


