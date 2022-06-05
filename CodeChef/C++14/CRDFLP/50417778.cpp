#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        long long ct=0,ans= (1<<30)-1;
        cin>>n;
        vector<long long> a(n),b(n),state(n,-1);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(long long i=0;i<n;i++){
            cin>>b[i];
        }
        for(long long bit = 1<<29;bit>0;bit>>=1){
            bool pos = true;
            for(long long i=0;i<n;i++){
                if(state[i]==0 && !(bit&a[i])) pos = false;
                else if(state[i]==1 && !(bit&b[i])) pos = false;
                else if(!(bit&b[i]) and !(bit&a[i])) pos = false;
            }
            if(!pos) continue;
            for(int i=0;i<n;i++){
                if(state[i]!=-1) continue;
                else if(!(bit&a[i])) state[i]=1;
                else if(!(bit&b[i])) state[i]=0;
            }
        }
        for(long long i=0;i<n;i++){
            if(state[i]==1){
                ct++;
                ans=ans&b[i];
            }
            else{
                ans=ans&a[i];
            }
        }
        cout<<ans<<" "<<ct<<"\n";
    }
    return 0;
}