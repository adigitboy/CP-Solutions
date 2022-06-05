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
        long long n,x;
        cin>>n>>x;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        map<long long,long long> mp;
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
            mp[i+1]=sum;
        }
        long long val=0;
        for(int i=n;i>=1;i--){
            if(mp[i]<=x){
                val = val + (x-mp[i])/i+1;
                // cout<<x<<" "<<mp[i]<<" "<<i<<"\n";
                // cout<<(x-mp[i]+i-1)/i<<" ";
            }
            
        }
        cout<<val<<"\n";
    }
    return 0;
}