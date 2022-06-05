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
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<pair<long long,pair<long long,long long>>> vp(n);
        for(int i=0;i<n;i++){
            long long u;
            cin>>u;
            vp[i] = {v[i],{u,-1}};
        }
        for(int i=0;i<n;i++){
            long long u;
            cin>>u;
            vp[i] = {v[i],{vp[i].second.first,u}};
        }
        long long ans = INT_MIN;
        vector<long long> dp(n,0);
        dp[1] = abs(vp[1].second.second-vp[1].second.first)+vp[1].first+1;
        ans = dp[1];
        for(int i=2;i<n;i++){
            if(vp[i].second.first==vp[i].second.second){
                dp[i] = abs(vp[i].second.second-vp[i].second.first)+vp[i].first+1;
            }
            else{
                dp[i] = max(1+vp[i].first + dp[i-1]-abs(vp[i].second.second-vp[i].second.first),abs(vp[i].second.second-vp[i].second.first)+1+vp[i].first);
            }
            
            ans = max(ans,dp[i]);
        }
        // for(int i=1;i<n;i++){
        //     cout<<dp[i]<<" ";
        // }
        cout<<ans<<"\n";
 
    }
    return 0;
}