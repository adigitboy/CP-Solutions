#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
class Trees{
    public:
        long double ans=0;
        vector<long long> adj[100005];
        void dfs(long long src,long long par,long long lvl,long double prob){
            bool leaf = true;
            for(auto child : adj[src]){
                    if(child!=par){
                    leaf = false;
                    long double temp=prob;
                    if( (src==1 && adj[src].size()>=2) || (src!=1 && adj[src].size()>=3) ){
                        long double sz = adj[src].size();
                        if(src!=1){
                            sz-=1;
                        }
                        temp = prob/sz;
                    }
                    dfs(child,src,lvl+1,temp);
                }
            }
            if(leaf){
                ans = ans + (prob*lvl);
            }
        }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    Trees tree;
    for(int i=0;i<n-1;i++){
        long long u,v;
        cin>>u>>v;
        tree.adj[u].push_back(v);
        tree.adj[v].push_back(u);
    }
    tree.dfs(1,0,0,1);
    cout<<setprecision(12)<<tree.ans<<"\n";
    return 0;
}