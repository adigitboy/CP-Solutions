#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
class DSU{
    private:
        vector<int> par;
        vector<int> size;
    public:
        DSU(int n){
            for(int i=0;i<=n;i++){
                par.push_back(i);
                size.push_back(1);
            }
        }
        int findPar(int x){
            if(par[x]==x){
                return x;
            }
            return par[x] = findPar(par[x]);
        }
        void unionSize(int x,int y){
            int x_rep = findPar(x);
            int y_rep = findPar(y);
            if(x_rep==y_rep){
                return;
            }
            if(size[x_rep]>=size[y_rep]){
                size[x_rep]+=size[y_rep];
                par[y_rep] = x_rep;
            }
            else{
                size[y_rep]+=size[x_rep];
                par[x_rep] = y_rep;
            }
        }
        int nodeSize(int x){
            return size[findPar(x)];
        }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    DSU dsu(n);
    for(int i=0;i<m;i++){
        int k;
        cin>>k;
        vector<int> v(k);
        for(int i=0;i<k;i++){
            cin>>v[i];
            dsu.unionSize(v[0],v[i]);
        }
    }
    for(int i=1;i<=n;i++){
        long long ans = dsu.nodeSize(i);
        cout<<ans<<" ";
    }
    cout<<"\n";
    return 0;
}