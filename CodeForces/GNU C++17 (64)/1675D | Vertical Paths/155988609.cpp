#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
long long total = 0;
void dfs(long long src,vector<long long> adj[],vector<long long> paths[]){
    long long cnt=0;
    for(auto child : adj[src]){
        cnt++;
        paths[total].push_back(child);
        dfs(child,adj,paths);
        if(cnt!=adj[src].size()){
            total++;
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
        vector<long long> adj[n+5];
        vector<long long> paths[n+5];
        long long root=0;
        for(int i=1;i<=n;i++){
            long long u;
            cin>>u;
            if(i==u){
                root=i;
                continue;
            }
            adj[u].push_back(i);
        }
        paths[0].push_back(root);
        total=0;
        dfs(root,adj,paths);
        cout<<total+1<<"\n";
        for(int i=0;i<=total;i++){
            cout<<paths[i].size()<<"\n";
            for(int j=0;j<paths[i].size();j++){
                cout<<paths[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
 
    }
    return 0;
}