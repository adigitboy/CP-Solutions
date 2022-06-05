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
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<long long> pre(n,0),suf(n,0);;
        pre[0]=v[0];
        for(int i=1;i<n;i++){
            pre[i]=v[i]+pre[i-1];
        }
        suf[n-1]=v[n-1];
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]+v[i];
        }
        reverse(suf.begin(),suf.end());
        long long ans = 0;
        for(int i=0;i<n;i++){
            long long idx = lower_bound(suf.begin(),suf.end(),pre[i])-suf.begin();
            if(idx>=n){
                break;
            }
            
            if(n-idx-1>i && suf[idx]==pre[i]){
                ans = max(ans,i+idx+2);
            }
        }
        cout<<ans<<"\n";
 
    }
    return 0;
}