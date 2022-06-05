#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
pair<long long,long long> maxSubArraySum(vector<long long> &v, long long n,long long &sum)
{
    long long max_so_far = INT_MIN, max_ending_here = 0,
       start =0, end = 0, s=0;
  
    for (int i=0; i<n; i++ )
    {
        max_ending_here += v[i];
  
        if (max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
  
        if (max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    sum=max_so_far;
    return {start,end};
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n,x;
        cin>>n>>x;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long sum=0;
        vector<long long> dp(n+1,INT_MIN); 
        for(int i=0;i<n;i++){
            sum=0;
            for(int j=i;j<n;j++){
                sum+=v[j];
                dp[j-i+1]=max(dp[j-i+1],sum);
            }
        }
        for(long long i=0;i<=n;i++){
            long long ans=0;
            for(long long j=0;j<=n;j++){
                ans = max(dp[j]+min(j,i)*x,ans);
            }
            cout<<ans<<" ";
        }
        cout<<"\n";
    }
    return 0;
}