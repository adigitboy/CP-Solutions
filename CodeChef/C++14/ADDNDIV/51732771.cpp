#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long a,b;
        cin>>a>>b;
        while(__gcd(a,b)!=1){
            a/=__gcd(a,b);
        }
        if(a==1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}