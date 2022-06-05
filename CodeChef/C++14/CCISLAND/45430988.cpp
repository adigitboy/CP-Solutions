#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        if(xr>x || yr>y){
            cout<<"NO\n";
            continue;
        }
        long long j = x/xr;
        long long k = y/yr;
        if(j>=d){
            if(k>=d){
                cout<<"YES\n";
                continue;
            }
            cout<<"NO\n";
            continue;
        }
        else{
            cout<<"NO\n";
            continue;
        }
    }
    return 0;
}