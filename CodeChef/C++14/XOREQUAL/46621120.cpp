#include<bits/stdc++.h>
using namespace std;

const long long mod = 1e9+7;
long long binEx(long long x,long long n){
    if(n==0){
        return 1;
    }
    if(n==1){
        return 2;
    }
    long long ans = (binEx(2,n/2)%mod)%mod;
    if(n%2==0){
        return ((ans%mod)*(ans%mod))%mod;
    }
    else{
        return ((2%mod)*(ans%mod)*(ans%mod))%mod;
    }
    
}

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        cin>>n;
        long long ans = (binEx(2,n-1));
        cout<<ans<<"\n";
    }
    return 0;
}