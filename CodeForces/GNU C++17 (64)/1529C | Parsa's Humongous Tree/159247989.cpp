#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
vector<long long> adj[200005];
 
 
 
 
void dfs(long long src,long long par,vector<pair<long long,long long>> &range,vector<vector<long long>> &dp){
    bool flag=false;
    for(auto child : adj[src])
    {
        if(child!=par){
            flag=true;
            dfs(child,src,range,dp);
            dp[src][0] +=max(dp[child][0]+abs(range[child].first-range[src].first),dp[child][1]+abs(range[child].second-range[src].first)); 
            dp[src][1] +=max(dp[child][0]+abs(range[child].first-range[src].second),dp[child][1]+abs(range[child].second-range[src].second));
        }
    }
    
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        vector<vector<long long>> dp(n+1,vector<long long>(2,0));
        for(int i=0;i<n;i++){
            adj[i].clear();
        }
        vector<pair<long long,long long>> vp(n);
        for(int i=0;i<n;i++){
            cin>>vp[i].first>>vp[i].second;
        }
        for(int i=0;i<n-1;i++){
            long long u,v;
            cin>>u>>v;
            u--;
            v--;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(0,-1,vp,dp);
        
        cout<<max(dp[0][0],dp[0][1])<<"\n";
        
        
    }
    return 0;
}