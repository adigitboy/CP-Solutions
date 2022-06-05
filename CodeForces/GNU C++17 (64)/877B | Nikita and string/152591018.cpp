#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
 
 
// long long dp[5001];
 
// long long maxVal(string &s){
//     bool flag=false;
//     // cout<<s<<" ";
//     long long lb=-1,fb=-1;
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='b' && fb==-1){
//             fb=i;
//             lb=i;
//         }
//         if(s[i]=='b'){
//             lb=i;
//         }
//     }
//     for(int i=0;i<s.size();i++){
//         if(s[i]=='a' && i>fb && i<lb){
            
//             return false;
//         }
//     }
//     return s.size();
// }
 
 
// long long maxLen(string &s,long long idx,string j){
//     if(idx==s.size()){
//         long long val = maxVal(j);
//         return val;
//     }
//     if(dp[idx]!=-1){
//         return dp[idx];
//     }
//     return dp[idx] = max(maxLen(s,idx+1,j+s[idx]),maxLen(s,idx+1,j));
 
// }
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    vector<vector<long long>> dp(s.size()+1,vector<long long>(4,1));
    for(int i=0;i<s.size();i++){
        if(s[i]=='a'){
            for(int j=0;j<i;j++){
                if(s[j]=='b'){
                    dp[i][3]=max(dp[i][3],dp[j][2]+1);
                    dp[i][2]=max(dp[j][1]+1,dp[i][2]);
                }
                if(s[j]=='a'){
                    dp[i][1]=max(dp[j][1]+1,dp[i][1]);
                    dp[i][3]=max(dp[i][3],dp[j][3]+1);
                }
            }
        }
        else{
            for(int j=0;j<i;j++){
                if(s[j]=='b'){
                    dp[i][1]=max(dp[j][1]+1,dp[i][1]);
                    dp[i][2]=max(dp[j][2]+1,dp[i][2]);   
                }
                if(s[j]=='a'){
                    dp[i][2]=max(dp[j][1]+1,dp[i][2]);
                }
            }
        }
    }
    long long ans = 0;
    for(int i=0;i<s.size();i++){
        for(int j=1;j<=3;j++){
            ans = max(ans,dp[i][j]);
        }
        // cout<<"\n";
    }
    cout<<ans<<"\n";
    return 0;
}