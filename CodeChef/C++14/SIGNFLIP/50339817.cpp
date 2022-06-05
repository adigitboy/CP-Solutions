#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n,k;
        cin>>n>>k;
        long long sum=0;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        for(int i=0;i<k;i++){
            if(v[i]<0){
                v[i]=-v[i];
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]>0){
                sum+=v[i];
            }
        }
        cout<<sum<<"\n";
        
    }
    return 0;
}