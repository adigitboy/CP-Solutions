#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long case1 = (a+b-2)*c;
        long long dist = min(a,b);
        long long case2 = (dist-1)*d+abs(a-b)*c;
        long long case3 = min(a-1,b-1)*d+(abs(a-b)/2)*2*d+(abs(a-b)%2)*c;
        cout<<min(case1,min(case2,case3))<<"\n";
    }
    return 0;
}