#include<bits/stdc++.h>
using namespace std;
bool myCmp(pair<long long,long long> p1,pair<long long,long long> p2){
    return p1.second>p2.second;
}

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,x;
        long long maxi = 0;
        vector<pair<long long ,long long>> v;
        long long p,q;
        cin>>n>>x;
        for(int i=0;i<n;i++){
            cin>>p>>q;
            v.push_back({p,q});
        }
        sort(v.begin(),v.end(),myCmp);
        for(int i=0;i<n;i++){
            if(v[i].first<=x){
                cout<<v[i].second<<endl;
                break;
            }
        }
    }
    return 0;
}