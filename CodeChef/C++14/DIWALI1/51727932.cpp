#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long p,a,b,c,x,y;
        cin>>p>>a>>b>>c>>x>>y;
        long long an = x*a+b;
        long long ch = y*a+c;
        cout<<max(p/an,max(p/ch,2*(p/(ch+an))))<<"\n";
    }
    return 0;
}