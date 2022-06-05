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
        void dsus(int n){
            for(int i=0;i<=n;i++){
                par.push_back(i);
                rank.push_back(1);
            }
        }
        int findPar(int x){
            if(par[x]==x){
                return x;
            }
            return par[x] = findPar(par[x]);
        }
        void unionByrank(int x,int y){
            int x_rep = findPar(x);
            int y_rep = findPar(y);
            if(x_rep==y_rep){
                return;
            }
            else if(rank[x_rep]>rank[y_rep]){
                par[y_rep]=x_rep;
            }
            else if(rank[y_rep]>rank[x_rep]){
                par[x_rep]=y_rep;
            }
            else{
                rank[x_rep]++;
                par[y_rep]=x_rep;
            }
        }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    DSU dsu[105];
    for(int i=0;i<105;i++){
        dsu[i].dsus(106);
    }
 
    long long n,m;
    cin>>n>>m;
    for(int i=0;i<m;i++){
        long long u,v,val;
        cin>>u>>v>>val;
        dsu[val].unionByrank(u,v);
    }
    long long q;
    cin>>q;
    while(q--){
        long long u,v,cost=0;
        cin>>u>>v;
        for(int i=1;i<=100;i++){
            if(dsu[i].findPar(u)==dsu[i].findPar(v)){
                cost++;
            }
        }
        cout<<cost<<"\n";
    }
    
 
    return 0;
}