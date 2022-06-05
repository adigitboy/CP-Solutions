#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long double k1,k2,k3,v;
        cin>>k1>>k2>>k3>>v;
        long double u = (100/9.58);
        long double v1 = (k1*k2*k3*v);
        
        if(v1>10.44386423){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}