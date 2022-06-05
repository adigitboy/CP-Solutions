#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
bool isPrime(long long n)
{
  
    if (n <= 1)
        return false;
 
    
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n,e;
        cin>>n>>e;
        vector<long long> v(n);
        vector<long long> ones(n,0);
        vector<long long> dp(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<e;i++){
            if(v[i]==1){
                ones[i]=1;
            }
        }
        for(int i=e;i<n;i++){
            if(v[i]==1){
                ones[i]=1+ones[i-e];
                long long j = i-ones[i]*e;
                if(j>=0 && isPrime(v[j])){
                    dp[i]=dp[j]+1;
                }
            }
            else if(isPrime(v[i])){
                dp[i]=ones[i-e];
            }
        }
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=dp[i];
        }
        cout<<ans<<"\n";
    }
    return 0;
}