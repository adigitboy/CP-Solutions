#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    map<long long,long long> mp;
    for(int i=-1;i<100005;i++){
        mp[i]=-1;
    }
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long ans = INT_MIN;
    long long prv_upd=-1;
    for(int i=0;i<n;i++){
        long long idx = max(mp[v[i]+2],max(mp[v[i]-2],prv_upd));
       
        ans = max(i-idx,ans);
        mp[v[i]]=i;
        // cout<<v[i]<<" "<<ans<<" "<<prv_upd<<"\n";
        prv_upd = idx;
 
    }
    cout<<ans<<"\n";
    
   
    return 0;
}