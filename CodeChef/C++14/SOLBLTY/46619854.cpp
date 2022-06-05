#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long x,a,b;
        cin>>x>>a>>b;
        long long terms = 100-x;
        long long ans = a+(terms)*b;
        long long value = ans*10;
        cout<<value<<"\n";
    }
    return 0;
}