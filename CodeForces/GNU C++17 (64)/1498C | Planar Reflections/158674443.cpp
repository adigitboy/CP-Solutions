#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
#define mod 1000000007
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n,k;
        cin>>n>>k;
        if(k==1){
            cout<<1<<"\n";
        }
        else if(n==1){
            cout<<2<<"\n";
        }
        else{
            vector<vector<long long>> dp(k+1,vector<long long>(n+1,0));
            bool flag = true;
            vector<long long> pre(n+5,0);
            for(int j=1;j<n;j++){
                dp[0][j] = 1;
                pre[j] = 1;
            } 
            for(int j=n-2;j>=0;j--){
                pre[j] = (pre[j]%mod + pre[j+1]%mod)%mod;
            }
            for(int i=1;i<k;i++){
                for(int j=0;j<n;j++){
                    if(j<n-1 && flag){
                        dp[i][j] = (pre[j+1]%mod);
                    }
                    else if(j>0 && !flag){
                        dp[i][j] = (pre[j-1]%mod);
                    }
                    
                }
                if(flag){
                    for(int j=0;j<=n;j++){
                        if(j){
                            pre[j] = (dp[i][j]%mod + pre[j-1]%mod)%mod;
                        }
                    }
                    flag=false;
                }
                else{
                    for(int j=n-1;j>=0;j--){
                        if(j!=n-1){
                            pre[j] = (dp[i][j]%mod + pre[j+1]%mod)%mod;
                        }
                    }
                    flag=true;
                }
            }
            long long ans = 0;
            for(int i=0;i<k-1;i++){
                for(int j=0;j<n;j++){
                    ans= (ans%mod + dp[i][j]%mod)%mod;
                }
            }
            cout<<(ans+2)%mod<<"\n";
    
        }
    }
    return 0;
}