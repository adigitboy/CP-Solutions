#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,curr=0,count=0;
        long long k;
        cin>>n>>m;
        vector<pair<long long,long long>> v;
        for(int i=0;i<n;i++){
            cin>>k;
            v.push_back({k,0});
        }
        for(int i=0;i<m;i++){
            cin>>k;
            v.push_back({k,1});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i].second!=curr){
                count++;
                curr = v[i].second;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}