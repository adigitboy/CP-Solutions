#include<bits/stdc++.h>
using namespace std;
 
vector<long long> adj[200005];
vector<long long> stat(200005,0);
set<long long> st;
 
void dfs(long long src){
    bool flag=stat[src];
    
    for(auto child : adj[src]){
        flag=flag&stat[child];
        dfs(child);
    }
    if(flag){
        st.insert(src);
    }
 
}
 
 
int main(){
    long long n;
    cin>>n;
    long long par;
    for(int i=0;i<n;i++){
        long long u;
        cin>>u>>stat[i+1];
       
        if(u!=-1){
            adj[u].push_back(i+1);
        }
        else{
            par=i+1;
        }
    }
    dfs(par);
  
    if(st.size()>=1){
        for(auto it : st){
            cout<<it<<" ";
        }
        cout<<"\n";
    }
    else{
        cout<<-1<<"\n";
    }
    cout<<"\n";
    
}
 