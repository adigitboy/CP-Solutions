#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
vector<long long> adj[4005];
 
 
pair<long long,long long> dfs(long long src,long long &total,string &color){
    long long b=0,w=0;
    if(color[src-1]=='W'){
        w++;
    }
    else{
        b++;
    }
    for(auto child : adj[src]){
        pair<long long,long long> p = dfs(child,total,color);
        w = w+p.first;
        b = b+p.second;
    }
    if(w==b){
        total++;
    }
    
    return {w,b};
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        string color;
        cin>>n;
        for(int i=0;i<=n;i++){
            adj[i].clear();
        }
        for(int i=2;i<=n;i++){
            long long u;
            cin>>u;
            
            adj[u].push_back(i);
            
        }
        cin>>color;
        long long total=0;
        dfs(1,total,color);
        cout<<total<<"\n";
    }
    return 0;
}