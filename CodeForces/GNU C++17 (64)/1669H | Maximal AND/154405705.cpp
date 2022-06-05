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
        long long n,k;
        cin>>n>>k;
        vector<long long> v(n);
        map<long long,long long> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<31;j++){
                if(v[i]&(1<<j)){
                    mp[j]++;
                }
            }
        }
        long long ans=0;
        for(int i=30;i>=0;i--){
     
            if(n-mp[i]<=k){
                ans = (ans | (1<<i));
                k-=(n-mp[i]);
            }
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}