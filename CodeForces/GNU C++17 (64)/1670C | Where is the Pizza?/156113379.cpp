#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
#define mod 1000000007
 
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
            
        }
};
 
vector<int> adj[200005];
vector<bool> vis(200005,false);
 
void dfs(long long src,long long &cnt){
    vis[src]=true;
    for(auto child : adj[src]){
        if(vis[child]==false){
            cnt++;
            dfs(child,cnt);
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
        for(int i=0;i<=n;i++){
            adj[i].clear();
            vis[i]=false;
        }
 
        vector<pair<int,int>> a(n);
        vector<int> d(n);
        for(int i=0;i<n;i++){
            cin>>a[i].first;
        }
        
        for(int i=0;i<n;i++){
            cin>>a[i].second;
            if(a[i].first!=a[i].second){
                adj[a[i].first].push_back(a[i].second);
                adj[a[i].second].push_back(a[i].first);
            }
            
        }
        for(int i=0;i<n;i++){
            cin>>d[i];
            if(d[i]>=1){
                adj[a[i].first].push_back(0);
                adj[0].push_back(a[i].first);
            }
        }
        long long ans = 1;
        for(int i=0;i<n;i++){
            long long cnt=0;
            if(vis[a[i].first]==false){
                dfs(a[i].first,cnt);
                // cout<<a[i].first<<" ";
                if(cnt>=1 && vis[0]==false){
                    ans = (ans*2)%mod;
                }
                
            }
            vis[0]=false;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}