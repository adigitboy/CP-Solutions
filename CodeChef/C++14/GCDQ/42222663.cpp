#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,q;
        cin>>n>>q;
        int arr[n+10];
        int prf[n+10];
        int prb[n+10];
        prf[0] = prb[n+1] = 0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            prf[i] = __gcd(arr[i],prf[i-1]);
        }
        for(int j=n;j>0;j--){
            prb[j] = __gcd(prb[j+1],arr[j]);
        }
        while(q--){
            int l,r;
            cin>>l>>r;
            cout<<__gcd(prf[l-1],prb[r+1])<<endl;
        }
    }
    return 0;
}