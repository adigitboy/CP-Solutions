#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long u,v,a,s;
        cin>>u>>v>>a>>s;
        long long x = ceil(((u*u)-(v*v))/(2.0*a));
        if(x<=s){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}