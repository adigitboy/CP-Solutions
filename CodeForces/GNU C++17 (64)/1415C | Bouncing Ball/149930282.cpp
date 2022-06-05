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
        long long n,p,k,x,y;
        cin>>n>>p>>k;
        string s;
        cin>>s;
        cin>>x>>y;
        vector<long long> dp(n+1,0);
        for(int i=1;i<=k;i++){
            for(int j=n-i;j>=0;j-=k){
                if(s[j]=='0'){
                    dp[j]+=x;
                }
                if(j!=n-i){
                   dp[j]+=dp[j+k];
                }
            }
        }
        long long ans = INT_MAX;
        // for(int i=0;i<n;i++){
        //     cout<<dp[i]<<" ";
        // }
        // cout<<"\n";
        for(long long i=p-1;i<n;i++){
            
            ans = min(ans,dp[i] + (i-p+1)*y);
        }
        cout<<ans<<"\n";
    }
    return 0;
}