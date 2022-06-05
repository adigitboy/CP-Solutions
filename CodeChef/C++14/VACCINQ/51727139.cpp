#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n,p,x,y;
        cin>>n>>p>>x>>y;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long ans=0;
        for(int i=0;i<p-1;i++){
            if(v[i]==0){
                ans+=x;
            }
            else{
                ans+=y;
            }
        }
        ans+=y;
        cout<<ans<<"\n";
    }
    return 0;
}