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
        map<long long,long long> mp;
        vector<long long> v(n);
        vector<long long> v1(n-1);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n-1;i++){
            cin>>v1[i];
        }
        sort(v.begin(),v.end());
        sort(v1.begin(),v1.end());
        for(int i=0;i<n;i++){
            if(i==n-1){
                mp[v1[i-1]-v[i]]++;
                continue;
            }
            if(i-1<0){
                mp[{v1[i]-v[i]}]++;
                continue;
            }
            else{
                mp[v1[i]-v[i]]++;
                mp[v1[i-1]-v[i]]++;
            }
        }
        long long res = 0,maxi=INT_MIN;
        for(auto it : mp){
            if(it.second>maxi && it.first>0){
                maxi = it.second;
                res = it.first;
            }
        }
        cout<<res<<"\n";
    }
    return 0;
}