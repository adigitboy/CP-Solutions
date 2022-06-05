#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,curr=0,count=0;
        long long k;
        cin>>n>>m;
        pair<long long,long long> f[n+m];
        for(long long i=0;i<n;i++){
            cin>>k;
            f[i] = {k,0};
        }
        for(long long i=n;i<n+m;i++){
            cin>>k;
            f[i] = {k,1};
        }
        sort(f,f+(n+m));
        for(int i=0;i<n+m;i++){
            if(f[i].second!=curr){
                count++;
                curr = f[i].second;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}