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
        vector<pair<long long,long long>> vp;
        vector<pair<long long,long long>> vp1;
        for(int i=0;i<n;i++){
            long long ele;
            cin>>ele;
            vp.push_back({ele,i+1});
        }
        for(int i=0;i<n;i++){
            long long ele;
            cin>>ele;
            vp1.push_back({ele,i+1});
        }
        
        sort(vp.begin(),vp.end());
        sort(vp1.begin(),vp1.end());
        long long ans=0;
        for(int i=0;i<n;i++){
            ans = ans + (vp1[i].second-vp[i].second)*vp[i].first;
        }
        cout<<ans<<"\n";

    }
    return 0;
}