#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long n,x,k;
        cin>>n>>x>>k;
        if(((n+1-x)%k==0) ||(x)%k==0){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}