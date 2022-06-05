#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        cin>>n;
        unordered_map<int,int> mp;
        vector<int> v(n);
        vector<int> adj[n];
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp.insert({v[i]-i,i});
        }
        // for(auto it : mp){
        //     cout<<it.first<<" "<<it.second<<"\n";
        // }
        for(int i=0;i<n;i++){
            if(mp.count(v[i]-i) > 0){
                auto it = mp.find(v[i]-i);
                if(it->second!=i){
                    // cout<<v[i]-i<<" "<<i<<"\n";
                    adj[i].push_back(it->second);
                    adj[it->second].push_back(i);
                    // cout<<i<<"\n";
                }
            }
        }
        bool visited[n];
        for(int i=0;i<n;i++){
            visited[i]=false;
        }
        int ct=0;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(visited[i]==false){
                q.push(i);
                while(q.empty()==false){
                    int i = q.front();
                    q.pop();
                    visited[i]=true;
                    for(auto it : adj[i]){
                        if(visited[it]==false){
                            q.push(it);
                            visited[it]=true;
                        }
                    }
                }
                ct++;
            }
            
        }
        cout<<n-ct+1<<"\n";
    }
    return 0;
}