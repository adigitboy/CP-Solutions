#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long k;
    cin>>k;
    string s;
    cin>>s;
    long long n = s.size();
    if(k==0){
        vector<long long> ans;
        long long cnt=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ans.push_back(cnt);
                cnt=0;
            }
            else{
                cnt++;
            }
        }
        ans.push_back(cnt);
        long long val=0;
        for(int i=0;i<ans.size();i++){
            val = val + (ans[i]*(ans[i]+1))/2;
        }
        cout<<val<<"\n";
    }
    else{
        vector<long long> dp;
        dp.push_back(-1);
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                dp.push_back(i);
            }
        }
        dp.push_back(n);
        long long cnt=1;
        long long ans = 0;
        // for(auto it : dp){
        //     cout<<it<<" ";
        // }
        for(int i=0;i<n;i++){
            if(cnt>=k && s[i]=='1'){
                ans = ans + ( (dp[cnt-k+1]-dp[cnt-k])*(dp[cnt+1]-i) );
            }
            if(s[i]=='1'){
                cnt++;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}