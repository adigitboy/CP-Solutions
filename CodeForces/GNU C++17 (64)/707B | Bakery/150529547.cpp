#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
vector<pair<long long,long long>> adj[200005];
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m,k;
    cin>>n>>m>>k;
    
    for(int i=0;i<m;i++){
        long long u,v,w;
        cin>>u>>v>>w;
        adj[u-1].push_back({v-1,w});
        adj[v-1].push_back({u-1,w});
    }
    unordered_set<long long> st;
    priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>> pq;
    vector<long long> dist(n,1e18);
    for(int i=0;i<k;i++){
        long long ele;
        cin>>ele;
        st.insert(ele-1);
        pq.push({0,ele-1});
        dist[ele-1]=0;
    }
    
    while(pq.empty()==false){
        long long node = pq.top().second;
        pq.pop();
        for(auto x : adj[node]){
            
            if(dist[node]+x.second<dist[x.first]){
                dist[x.first] = dist[node]+x.second;
                pq.push({dist[node]+x.second,x.first});
            }
        }
    }
    long long ans = 1e18;
    for(int i=0;i<n;i++){
        if(st.find(i)==st.end()){
            ans = min(ans,dist[i]);
        }
    }
    if(ans<1e18){
        cout<<ans<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
 
    return 0;
}