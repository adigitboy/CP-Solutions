#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
// long long dp[6005];
 
// long long minCost(vector<long long> &disp,vector<long long> &cost,long long idx,long long picks,long long lastP){
//     if(picks==3){
//         return 0;
//     }
//     if(idx==disp.size()){
//         return INT_MAX;
//     }
//     if(dp[idx]!=-1){
//         return dp[idx];
//     }
//     if(disp[idx]>lastP){
//         long long pick;
//         long long nonPick;
//         long long temp = lastP;
//         temp = disp[idx];
//         pick = cost[idx] + minCost(disp,cost,idx+1,picks+1,temp);
//         nonPick = minCost(disp,cost,idx+1,picks,lastP);
//         return dp[idx] = min(pick,nonPick);
//     }
//     return dp[idx] = minCost(disp,cost,idx+1,picks,lastP);
// }
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    vector<long long> disp(n,0),cost(n,0);
    for(int i=0;i<n;i++){
        cin>>disp[i];
    }
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    vector<vector<long long>> dp(n+1,vector<long long>(4,INT_MAX));
    long long ans = INT_MAX;
    for(int i=0;i<n;i++){
        dp[i][1]=cost[i];
        for(int j=0;j<i;j++){
            if(disp[j]<disp[i]){
                dp[i][2]=min(dp[i][2],cost[i] + dp[j][1]);
                dp[i][3]=min(dp[i][3],cost[i] + dp[j][2]);  
            }
        }
        ans = min(ans,dp[i][3]);
    }
    if(ans==INT_MAX){
        cout<<-1<<"\n";
    }
    else{
        cout<<ans<<"\n";
    }
    return 0;
}