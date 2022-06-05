#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
vector<long long> adj[200005];
 
class DSU{
    private:
        vector<int> par;
        vector<int> rank;
    public:
        DSU(int n){
            for(int i=0;i<=n;i++){
                par.push_back(i);
                rank.push_back(1);
            }
        }
        int findPar(int x){
            if(x==par[x]){
                return x;
            }
            return par[x]=findPar(par[x]);
        }
        void unionRank(int x,int y){
            int x_rep = findPar(x);
            int y_rep = findPar(y);
            if(x_rep==y_rep){
                return;
            }
            if(rank[x_rep]>rank[y_rep]){
                par[y_rep]=x_rep;
            }
            else if(rank[x_rep]<rank[y_rep]){
                par[x_rep]=y_rep;
            }
            else{
                par[y_rep]=x_rep;
                rank[x_rep]++;
            }
        }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin>>n>>m;
    DSU dsu(n+1);
    bool flag=true;
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
        dsu.unionRank(u,v);
    }
    map<long long,long long> mp;
    for(int i=1;i<=n;i++){
        mp[dsu.findPar(i)]++;
    }
    for(int i=1;i<=n;i++){
        
        if(adj[i].size()!=mp[dsu.findPar(i)]-1){
            flag=false;
            break;
        }
    }
    if(flag){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
 
    return 0;
}