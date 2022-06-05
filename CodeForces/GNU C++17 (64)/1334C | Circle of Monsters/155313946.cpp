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
        vector<pair<long long,long long>> vp;
        long long mini=1e18,idx;
        for(int i=0;i<n;i++){
            long long u,v;
            cin>>u>>v;
            
            vp.push_back({u,v});
        }
        for(int i=0;i<n;i++){
            
            if(mini>vp[(i+1)%n].first-max((long long)0,vp[(i+1)%n].first-vp[i].second)){
                idx=(i+1)%n;
                mini=vp[(i+1)%n].first-max((long long)0,vp[(i+1)%n].first-vp[i].second);
            }
        }
        
        long long cnt=1;
        long long ans = vp[idx].first;
        long long power = vp[idx].second; 
        idx=(idx+1)%n;
        
        while(cnt<n){
            ans = ans + max((long long)0,vp[idx%n].first-power);
           
            power=vp[idx%n].second;
            
            idx=(idx+1)%n;
            cnt++;
        }
        
        cout<<ans<<"\n";
        
    }
    return 0;
}