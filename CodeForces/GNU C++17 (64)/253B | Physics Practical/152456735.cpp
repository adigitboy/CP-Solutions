#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    freopen("input.txt", "rt", stdin);
    freopen("output.txt", "wt", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long ans = INT_MAX;
    for(int i=0;i<n;i++){
        long long idx = lower_bound(v.begin(),v.end(),2*v[i]+1)-v.begin();
        ans = min(ans,n+i-idx);
    }
    cout<<ans<<"\n";
    return 0;
}