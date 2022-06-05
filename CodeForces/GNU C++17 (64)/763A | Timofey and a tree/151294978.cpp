#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
vector<long long> adj[200005];
 
vector<long long> colors;
 
void dfs(long long src,long long par,unordered_set<long long> &st)
{
    
    st.insert(colors[src]);
    for(auto child : adj[src]){
        if(child!=par){
            dfs(child,src,st);
        }
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    
    for(int i=0;i<n-1;i++){
        long long u,v;
        cin>>u>>v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    for(int i=0;i<n;i++){
        long long u;
        cin>>u;
        colors.push_back(u);
    }
    
  
    long long ans = -1;
    vector<long long> edges;
    unordered_map<long long,long long> mp;
    for(int i=0;i<n;i++){
        bool flag1=true;
        for(auto child : adj[i]){
            if(colors[child]!=colors[i]){
                if(mp[child]==0){
                    edges.push_back(child);
                    mp[child]++;
                    break;
 
                }
            }
            
        }
        
    }
    if(edges.size()==0){
        cout<<"YES\n"<<ans+2<<"\n";
    }
    else{
        bool flag=false;
        long long ans = -1;
        for(int i=0;i<2;i++){
            bool flag1=true;
            for(auto child : adj[edges[i]]){
                unordered_set<long long> st;
                dfs(child,edges[i],st);
                if(st.size()>1){
                    flag1=false;
                    break;
                }
                
            }
            if(flag1){
                flag=true;
                ans = edges[i];
                break;
            }
        }
        if(flag){
            cout<<"YES\n"<<ans+1<<"\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}