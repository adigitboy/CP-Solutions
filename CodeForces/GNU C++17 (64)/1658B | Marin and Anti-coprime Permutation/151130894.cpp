#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
#define mod 998244353
 
long long modFact(long long n)
{
    long long result = 1;
    for (long long i = 1; i <= n; i++)
        result = (result * i) % mod;
 
    return result;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> dp(10005,0);
    for(int i=0;i<=1004;i++){
        dp[i] = modFact(i);
    }
    
    long long t;
    cin>>t;
    
    while(t--){ 
        long long n;
        cin>>n;
        // cout<<n<<" ";
        if(n%2!=0){
            cout<<0<<"\n";
            continue;
        }
        long long ans = dp[n/2];
        if(n==2){
            cout<<1<<"\n";
            continue;
        }
        ans = ( (ans%mod)*(ans%mod) )%mod;
        cout<<ans<<"\n";
    }
    return 0;
}