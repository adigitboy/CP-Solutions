#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
// long long dp[1005][1005];
 
// bool LCS(string &s,string &t,long long m,long long n,long long idx1,long long idx2,long long prvidx){
//     if(idx2==n){
//         return true;
//     }
//     if(idx1>=m || idx2>=n){
//         return false;
//     }
//     if(dp[idx1][idx2]!=-1){
//         return dp[idx1][idx2];
//     }
//     else if(s[idx1]==t[idx2]){
//         if(prvidx==-1){
//             return dp[idx1][idx2] = LCS(s,t,m,n,idx1+1,idx2+1,idx1) | LCS(s,t,m,n,idx1+1,idx2,prvidx); 
//         }
//         else{
//             if((idx1-prvidx)%2!=0){
//                 return dp[idx1][idx2] = LCS(s,t,m,n,idx1+1,idx2+1,idx1) | LCS(s,t,m,n,idx1+1,idx2,prvidx);
//             }
//             else{
//                 return dp[idx1][idx2] = LCS(s,t,m,n,idx1+1,idx2,prvidx);
//             }
//         }
//     }
//     else{
//         return dp[idx1][idx2] = LCS(s,t,m,n,idx1+1,idx2,prvidx);
//     }
// }
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        string s,t;
        cin>>s>>t;
        int n = t.size()-1;
        bool flag=false;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==t[n]){
                n--;
            }
            else{
                i--;
            }
            if(n<0){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}