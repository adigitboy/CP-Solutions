#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long a,b,c,d,am,bm,cm;
        cin>>a>>b>>c>>d>>am>>bm>>cm;
        if(am>=a && bm>=b && cm>=c && (am+bm+cm)>=d){
            cout<<"YES\n";
            continue;
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}