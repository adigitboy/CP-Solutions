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
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long maxi=INT_MIN;
        long long ans=0;
        for(int i=0;i<n;i++){
            maxi=max(maxi,v[i]);
        }
        for(int i=0;i<n;i++){
            if(v[i]==maxi){
                if(i-k+1>=0){
                    ans = ans + (n-i);
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}