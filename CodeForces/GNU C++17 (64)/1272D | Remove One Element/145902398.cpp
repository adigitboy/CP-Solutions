#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
// long long maxLen(vector<long long> &v,long long idx,long long k){
//     if(idx==v.size()){
//         return 0;
//     }
//     else if(v[idx]>v[idx-1]){
//         return 1+maxLen(v,idx+1,k);
//     }
//     else{
//         return max()
//     }
// }
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    vector<long long> v(n),pre(n+1,0),suf(n+1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    pre[0]=1;
    long long ans = 0;
    for(int i=1;i<n;i++){
        if(v[i]>v[i-1]){
            pre[i]=pre[i-1]+1;
        }
        else{
            pre[i]=1;
        }
        ans = max(ans,pre[i]);
    }
    suf[n-1]=1;
    for(int i=n-2;i>=0;i--){
        if(v[i]<v[i+1]){
            suf[i]=1+suf[i+1];
        }
        else{
            suf[i]=1;
        }
        ans = max(ans,suf[i]);
    }
    
    for(int i=1;i<n-1;i++){
        if(v[i+1]>v[i-1]){
            ans = max(ans,pre[i-1]+suf[i+1]);
        }
    }
    cout<<ans<<"\n";
    return 0;
}