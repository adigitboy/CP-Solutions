#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
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
            if(par[x]==x){
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
            else if(rank[y_rep]>rank[x_rep]){
                par[x_rep]=y_rep;
            }
            else{
                rank[x_rep]+=1;
                par[y_rep]=x_rep;
            }
        }
};
 
 
struct Node{
    int u,v,weight;
    Node(int u1,int v1,int w){
        u=u1;
        v=v1;
        weight=w;
    }
};
 
bool myCmp(Node &a,Node &b){
    return a.weight<b.weight;
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin>>n>>m;
    DSU dsu(n);
    vector<long long> costs(n);
    for(int i=0;i<n;i++){
        cin>>costs[i];
    }
    vector<long long> adj[n+1];
    vector<Node> node;
    for(int i=0;i<m;i++){
        long long u,v;
        cin>>u>>v;
        Node n1(u,v,costs[u-1]);
        Node n2(v,u,costs[v-1]);
        node.push_back(n1);
        node.push_back(n2);
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    sort(node.begin(),node.end(),myCmp);
    vector<bool> vis(n+1,false);
    long long ans = 0;
    for(auto it : node){
        int u = it.u;
        int weight = it.weight;
        if(vis[u]==false){
            for(auto child : adj[u]){
                if(vis[child]==false){
                    ans+=weight;
                }
            }
        }
        vis[u]=true;
    }
    cout<<ans<<"\n";
    return 0;
}