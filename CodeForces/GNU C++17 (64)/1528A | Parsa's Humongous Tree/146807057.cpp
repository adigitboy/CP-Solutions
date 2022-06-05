#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
vector<long long> adj[200005];
 
void dfs(long long src,long long par,vector<pair<long long,long long>> &values, vector<vector<long long>> &dp){
    bool leaf=true;
    for(auto child : adj[src]){
        if(child!=par){
            leaf=false;
            dfs(child,src,values,dp);
            // cout<<src<<" "<<dp[src][0]<<" "<<dp[src][1]<<"\n";
            dp[src][0]+=max(abs(values[src].first-values[child].first)+dp[child][0],abs(values[src].first-values[child].second)+dp[child][1]);
            dp[src][1]+=max(abs(values[src].second-values[child].first)+dp[child][0],abs(values[src].second-values[child].second)+dp[child][1]);
            // cout<<src<<" "<<dp[src][0]<<" "<<dp[src][1]<<"\n";
        }
    }
    if(leaf){
        
        dp[src][0]=0;
        dp[src][1]=0;
        // cout<<dp[src][0]<<" ";
        // cout<<dp[src][1]<<"\n";
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){ 
        int n;
        cin>>n;
        vector<pair<long long,long long>> values(n+2,{0,0});
        vector<vector<long long>> dp(n+2,vector<long long>(2,0));
        for(int i=0;i<=n;i++){
            adj[i].clear();
        }
        for(int i=1;i<=n;i++){
            cin>>values[i].first>>values[i].second;
        }
        for(int i=1;i<n;i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1,0,values,dp);
        long long ans = max(dp[1][0],dp[1][1]);
        cout<<ans<<"\n";
    }
    return 0;
}