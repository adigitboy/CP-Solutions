#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long n,w,wr;
        cin>>n>>w>>wr;
        vector<long long> v(n);
        unordered_map<long long,long long> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(wr>=w){
            cout<<"YES\n";
            continue;
        }
        bool flag = false;
        long long remaining = w - wr;
        for(auto x : mp){
            if(x.second%2==0){
                if(x.second*x.first>=remaining){
                    flag = true;
                    break;
                }
                else{
                    remaining -=x.second*x.first;
                }
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}