#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,x;
    cin>>n>>x;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    long long ans = 0;
    for(int i=0;i<n-1;i++){
        long long idx = upper_bound(v.begin(),v.end(),v[i]+x)-v.begin();
        if(idx==i+1){
            continue;
        }
        idx--;
        ans = ans + ((idx-i)*(idx-i-1))/2;
    }
    cout<<ans<<"\n";
    return 0;
}