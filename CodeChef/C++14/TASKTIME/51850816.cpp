#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n,m,k;
        cin>>n>>m>>k;
        vector<long long> topics(n+1);
        vector<long long> time(n+1);
        for(int i=1;i<=n;i++){
            cin>>topics[i];
        }
        for(int i=1;i<=n;i++){
            cin>>time[i];
        }
        vector<vector<long long>> subjects(m+1);
        for(int i=1;i<=n;i++){
            subjects[topics[i]].push_back(time[i]);
        }
        for(int i=1;i<=m;i++){
            sort(subjects[i].begin(),subjects[i].end());
        }
        set<pair<long long,pair<long long,long long>>> st;
        for(int i=1;i<=m;i++){
            long long x=1;
            if(subjects[i].empty()==false){
                long long cost = subjects[i][0];
                st.insert({cost,{0,i}});
            }
        }
        long long score=0,times=0;
        while(!st.empty()){
            pair<long long,pair<long long,long long>> p = *st.begin();
            long long cost = p.first;
            long long x = p.second.first;
            long long ind = p.second.second;
            st.erase(*st.begin());
            if(cost+times>k){
                break;
            }
            times+=cost;
            score++;
            if(x+2<subjects[ind].size()){
                st.insert({subjects[ind][x+1]+subjects[ind][x+2],{x+2,ind}});
                
            }
        }
        cout<<score<<"\n";
        
    }
    return 0;
}