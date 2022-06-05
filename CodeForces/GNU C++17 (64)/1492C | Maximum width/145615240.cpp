#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
// long long dp[100005];
// long long cnt = 0;
// long long maxLen(string &a,string &b,long long idxa,long long idxb,long long len,long long prev){
//     cnt++;
//     if(idxb==b.size()){
//         return len;
//     }
//     if(idxa==a.size()){
//         return INT_MIN;
//     }
//     if(dp[idxa]!=-1){
//         return dp[idxa];
//     }
//     long long ans = INT_MIN;
//     if(a[idxa]==b[idxb]){
//         ans = maxLen(a,b,idxa+1,idxb+1,idxa-prev,idxa);
//         ans = max(ans,maxLen(a,b,idxa+1,idxb,len,prev));
//     }
//     else{
//         ans = maxLen(a,b,idxa+1,idxb,len,prev);
//     }
//     return dp[idxa] = ans;
// }
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    // long long ans = 0;
    // memset(dp,-1,sizeof dp);
    // ans = maxLen(a,b,0,0,0,0);
    // cout<<ans<<"\n";
    vector<long long> left,right;
    for(int i=0,j=0;i<n && j<m;i++){
        if(a[i]==b[j]){
            left.push_back(i);
            j++;
        }
    }
    for(int i=n-1,j=m-1;i>=0 && j>=0;i--){
        if(a[i]==b[j]){
            right.push_back(i);
            j--;
        }
    }
    reverse(right.begin(),right.end());
    long long ans = 0;
    for(int i=0;i<m-1;i++){
        ans = max(ans,right[i+1]-left[i]);
    }
    cout<<ans<<"\n";
    return 0;
}