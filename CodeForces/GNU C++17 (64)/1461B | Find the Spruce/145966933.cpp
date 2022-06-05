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
        long long n,m;
        cin>>n>>m;
        vector<vector<char>> grid(n,vector<char>(m,'.'));
        vector<vector<long long>> dp(n,vector<long long>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>grid[i][j];
            }
        } 
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='*'){
                    dp[i][j]=1;
                }
            }
        }
        for(int i=n-2;i>=0;i--){
            for(int j=1;j<m-1;j++){
                if(grid[i][j]=='*'){
                    dp[i][j]=1+min(dp[i+1][j-1],min(dp[i+1][j+1],dp[i+1][j]));
                }
            }
        }
        long long ans = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                // cout<<dp[i][j]<<" ";
                ans+=dp[i][j];
            }
            // cout<<"\n";
        }
        cout<<ans<<"\n";
 
    }
    return 0;
}