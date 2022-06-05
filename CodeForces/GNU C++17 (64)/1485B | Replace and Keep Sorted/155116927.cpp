#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long n,q,k;
    cin>>n>>q>>k;
    vector<long long> v(n,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long> pre(n+1,0);
    if(n!=1){
        pre[0]=v[1]-2;
    }
    else{
        pre[0] = v[0]-1;
    }
    for(int i=1;i<n-1;i++){
        pre[i]=v[i+1]-v[i-1]-2;
    }
    if(n!=1){
        pre[n-1]=k-v[n-2]-2;
    }
    else{
        pre[n-1]=k-v[n-1]-1;
    }
    for(int i=1;i<n;i++){
        pre[i]+=pre[i-1];
    }
    for(int i=0;i<q;i++){
        long long l,r;
        cin>>l>>r;
        l--;
        r--;
        if(l==r){
            cout<<k-1<<"\n";
        }
        else{
            long long ans = pre[r-1]-pre[l];
            long long left = v[l+1]-2;
            long long right = k-v[r-1]-2;
            ans = ans + left+right;
            cout<<ans+1<<"\n";
        }
    }
    return 0;
}