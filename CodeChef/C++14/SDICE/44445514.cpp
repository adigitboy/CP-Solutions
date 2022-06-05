#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        if(n==1){
            cout<<20<<endl;
            continue;
        }
        if(n==2){
            cout<<36<<endl;
            continue;
        }
        if(n==3){
            cout<<51<<endl;
            continue;
        }
        if(n==4){
            cout<<60<<endl;
            continue;
        }
        long long et = n/4;
        long long mt = n%4;
        // long long sa = ()
        if(mt==0){
            long long ans = (et*44+16);
            cout<<ans<<endl;
        }
        else if(mt==1){
            long long ans = (et*44+32);
            cout<<ans<<endl;
        }
        else if(mt==2){
            long long ans = (et*44+44);;
            cout<<ans<<endl;
        }
        else if(mt==3){
            long long ans = (et*44+55);;
            cout<<ans<<endl;
        }
    }
    return 0;
}