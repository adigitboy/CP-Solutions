#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
 
 
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
            return par[x] = findPar(par[x]);
        }
 
        void unionByrank(int x,int y){
            int x_ref = findPar(x);
            int y_ref = findPar(y);
            if(x_ref==y_ref){
                return;
            }
            else if(rank[x_ref]>rank[y_ref]){
                par[y_ref]=x_ref;
            }
            else if(rank[y_ref]>rank[x_ref]){
                par[x_ref]=y_ref;
            }
            else{
                rank[x_ref]+=1;
                par[y_ref]=x_ref;
            }
        }
};
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,d;
    cin>>n>>d;
    DSU dsu(n);
    int ex = 0;
    priority_queue<int> pq;
    
    for(int i=0;i<d;i++){
        int x,y;
        cin>>x>>y;
        if(dsu.findPar(x)==dsu.findPar(y)){
            ex++;
        }
        else{
            dsu.unionByrank(x,y);
        }
        unordered_map<int,int> mp;
        vector<int> v(105,1);
        for(int i=1;i<=n;i++){
            mp[dsu.findPar(i)]++;
        }
        for(auto it : mp){
            v.push_back(it.second);
        }
        sort(v.begin(),v.end(),greater<int>());
        int ans = v[0];
        for(int i=1;i<=ex;i++){
            ans+=v[i];
        }
        cout<<ans-1<<"\n";
    }
    return 0;
}