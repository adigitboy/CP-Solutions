#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        map<long long,long long> mp;
        map<long long,long long> mp1;
        vector<long long> numele(n+2,0);
        vector<long long> pre(n+1,0),suf(n+2,0);
        for(int i=0;i<n;i++){
            long long u;
            cin>>u;
            mp[u]++;
        }
        for(auto it : mp){
            mp1[it.second]++;
        }
        for(int i=1;i<=n;i++){
            pre[i]=pre[i-1]+mp1[i]*i;
        }
        for(int i=n;i>=0;i--){
            suf[i]=suf[i+1]+mp1[i]*i;
            numele[i]=numele[i+1]+mp1[i];
        }
        // for(int i=1;i<=n;i++){
        //     cout<<pre[i]<<" ";
            
        // }
        long long ans = INT_MAX;
        for(int i=1;i<=n;i++){
            ans = min(ans,pre[i-1]+suf[i+1]-i*numele[i+1]);
        }
        cout<<ans<<"\n";
        // cout<<"\n";
    }
    return 0;
}