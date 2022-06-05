#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
 
 
long long helper(vector<long long> &v,long long idx,long long k,long long et,vector<vector<long long>> &dp){
    if(idx>=v.size()){
        return 0;
    }
    if(dp[idx][k]!=-1){
        return dp[idx][k];
    }
    long long jump=INT_MAX;
    long long noJump=INT_MAX;
    if(k>0){
        jump = helper(v,idx+1,k-1,et+1,dp);
    }
    noJump = v[idx] + et + helper(v,idx+1,k,et,dp);
    return dp[idx][k] = min(jump,noJump);
 
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n,k;
        cin>>n>>k;
        
            
        vector<long long> v(n);
        long long sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            
        }        
        vector<pair<long long,long long>> ans;
        for(int i=0;i<n;i++){
            ans.push_back({v[i]-(n-i-1 - (k-1)),i}); 
        }
        sort(ans.begin(),ans.end(),greater<pair<long long,long long>>());
        long long total = 0;
        map<long long,long long> mp;
        for(int i=0;i<min(n,k);i++){
            mp[ans[i].second]=1;
        }
        long long et = 0;
        for(int i=0;i<n;i++){
            if(mp[i]!=1){
                sum = sum +v[i]+et;
            }
            else{
                et++;
            }
        }
        cout<<sum<<"\n";
       
    }
    return 0;
}