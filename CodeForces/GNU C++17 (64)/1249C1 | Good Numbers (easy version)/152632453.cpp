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
        long long n;
        cin>>n;
        vector<long long> dp;
        long long val=1;
        dp.push_back(1);
        while(val<=1e9){
            val*=3;
            dp.push_back(val);
        }
        long long ans=INT_MAX;
        for(int i=0;i<(1<<11);i++){
            long long val=0;
            for(int j=0;j<11;j++){
                if(i&(1<<j)){
                    val = val+dp[j];
                }
            }
            if(val>=n){
                ans = min(val,ans);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}