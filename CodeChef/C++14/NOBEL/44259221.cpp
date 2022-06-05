#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n,m;
        cin>>n>>m;
        long long arr[n];
        long long prf[m+1] = {0};
        long long k=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            prf[arr[i]]=1;
        }
        for(int i=1;i<=m;i++){
            if(prf[i]==0){
                k = 1;
            }
        }
        if(k==1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}