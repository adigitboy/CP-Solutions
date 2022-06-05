#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n,k;
        cin>>n>>k;
        if(k>n){
            cout<<-1<<"\n";
            continue;
        }
        if(n-1==k){
            cout<<-1<<"\n";
            continue;
        }
        if(k==n){
            for(int i=1;i<=n;i++){
                cout<<i<<" ";
                
            }
            cout<<"\n";
        }
        else{
            for(int i=1;i<=k;i++){
                cout<<i<<" ";
            }
            for(int i=k+1;i<n;i++){
                cout<<i+1<<" ";
            }
            cout<<k+1<<"\n";
        }
    }
    return 0;
}