#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n,p,k;
        cin>>n>>p>>k;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long lastPicked = 0,ans=-1;
        vector<long long> dp(n+1,0);
        dp[0]=v[0];
        dp[1]=v[1];
        for(int i=2;i<n;i++){
            dp[i]=v[i]+dp[i-2];
        }
        for(int i=0;i<n;i++)
        {
            if(dp[i]<=p){
                ans=i;
            }
        }
        cout<<ans+1<<"\n";
    }
    return 0;
}
 