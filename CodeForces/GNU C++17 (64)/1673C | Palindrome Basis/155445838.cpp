#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
#define mod 1000000007
 
long long countWays(long long val,long long idx,vector<int>& palindrome,vector<vector<int>> &dp){
    if(val==0){
        return 1;
    }
    if(val<0){
        return 0;
    }
    if(dp[val][idx]!=-1){
        return dp[val][idx]%mod;
    }
    if(idx==palindrome.size()){
        return 0;
    }
    long long ways1 = countWays(val-palindrome[idx],idx,palindrome,dp);
    long long ways2 = countWays(val,idx+1,palindrome,dp);
    return dp[val][idx] = (ways1%mod+ways2%mod)%mod;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> palindrome;
    for(int i=1;i<=4e4;i++){
        string s = to_string(i);
        string a = s;
        reverse(s.begin(),s.end());
        if(s==a){
            palindrome.push_back(i);
        }
    }
    vector<int> ways(4e4+5,0);
    vector<vector<int>> dp(4e4+1,vector<int>(palindrome.size()+1,-1));
    for(int i=0;i<=4e4;i++){
        ways[i]=countWays(i,0,palindrome,dp)%mod;
    }
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
       
        long long ans = ways[n]%mod;
        cout<<ans<<"\n";
    }
    return 0;
}