#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    vector<pair<long long,long long>> adj[n+1];
    map<long long,long long> mp;
    for(int i=0;i<n-1;i++){
        long long u,v;
        cin>>u>>v;
        u--;
        v--;
        adj[u].push_back({v,i});
        adj[v].push_back({u,i});
        mp[u]++;
        mp[v]++;
    } 
    vector<long long> ans(n+1,-1);
    long long cnt=0;
    for(auto it : mp){
        if(it.second>=3){
            // cout<<it.second<<" ";
            for(auto child : adj[it.first]){
                ans[child.second] = cnt;
                cnt++;
            }
            break;
 
        }
    }
    for(int i=0;i<n-1;i++){
        if(ans[i]==-1){
            ans[i]=cnt;
            cnt++;
        }
    }
    for(int i=0;i<n-1;i++){
        cout<<ans[i]<<"\n";
    }
    return 0;
}