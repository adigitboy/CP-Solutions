#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long k,n;
        cin>>k>>n;
        if(k%n==0){
            cout<<k/n<<" "<<n<<endl;
        }
        else{
            cout<<ceil(k/(n*1.0))<<" "<<k%n<<endl;
        }
    }
    return 0;
}