#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long v1,v2,n,diff;
    cin>>v1>>v2>>n>>diff;
    long long ans=0;
 
    for(int i=1;i<n-1;i++){
        ans = ans + min(v1+i*diff,v2+(n-i-1)*diff);
        
    }
    cout<<ans+v1+v2<<"\n";
    return 0;
}