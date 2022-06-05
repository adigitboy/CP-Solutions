#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long x,y;
        cin>>x>>y;
        long long j,k;
        vector<pair<int,int>> v(2);
        for(int i=0;i<2;i++){
            cin>>j>>k;
            v[i].first = x-j;
            v[i].second = y-k;
        }
        if(v[0].first < 0 || v[0].second < 0){
            cout<<"NO\n";
            continue;
        }
        if(v[1].first < 0 || v[1].second < 0){
            cout<<"YES\n";
            continue;
        }
        long long tth = v[0].first + v[0].second;
        long long tpl = v[1].first + v[1].second - min(v[1].first, v[1].second);
        if(tth<=tpl){
            cout<<"YES\n";
            continue;
        }
        cout<<"NO\n";
    }
    return 0;
}