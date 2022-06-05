#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k,q;
    cin>>n>>k>>q;
    vector<long long> count(200005,0),ans(200005,0);
    for(int i=0;i<n;i++){
        long long u,v;
        cin>>u>>v;
        count[u]+=1;
        count[v+1]-=1;
    }
    for(int i=1;i<=200003;i++){
        count[i]+=count[i-1];
    }
    // for(int i=90;i<=99;i++){
    //     cout<<count[i]<<" ";
    // }
    for(int i=0;i<=200003;i++){
        if(count[i]>=k){
            ans[i]++;
        }
    }
    for(int i=1;i<=200003;i++){
        ans[i]+=ans[i-1];
    }
    for(int i=0;i<q;i++){
        long long u,v;
        cin>>u>>v;
        cout<<ans[v]-ans[u-1]<<"\n";
    }
    cout<<"\n";
    return 0;
}