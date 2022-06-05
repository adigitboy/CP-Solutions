#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    long long n = s.size();
    vector<vector<long long>> dp(26,vector<long long>(26,0));
    map<char,long long> mp;
    long long maxi = 0;
    for(int i=0;i<n;i++){
        long long val = s[i]-'a';
        // dp[val][val]=1;
        for(int j=0;j<26;j++){
            dp[val][j]=dp[val][j]+mp['a'+j];
            maxi = max(maxi,dp[val][j]);
            
        }
        mp[s[i]]++;
        maxi = max(maxi,mp[s[i]]);
    }
    cout<<maxi<<"\n";
    return 0;
}