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
 
long long powMod(long long x,long long y){
    if(y==0){
        return 1%mod;
    }
    long long ans = powMod(x,y/2);
    if(y%2==0){
        return ((ans%mod)*(ans%mod))%mod;
    }
    return ((( (x%mod) * (ans%mod) )%mod )*(ans%mod))%mod;
}
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        vector<long long> a(n),b(n);
        long long val=0;
        DSU dsu(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            dsu.unionRank(a[i],b[i]);
        }
        set<int> st; 
        for(int i=1;i<=n;i++){
            st.insert(dsu.findPar(i));
        }
        long long ans = powMod(2,st.size())%mod;
        cout<<ans<<"\n";
    }
    return 0;
}