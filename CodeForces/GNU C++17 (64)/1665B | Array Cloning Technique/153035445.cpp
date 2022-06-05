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
        map<long long,long long> mp;
        long long maxi = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
            maxi = max(maxi,mp[v[i]]);
        }
        long long cnt=0,val=0;
        long long temp = maxi;
        while(maxi<n){
            val = val+maxi;
            maxi*=2;
            cnt++;
        }
        
        long long ans = cnt+n-temp;
        cout<<ans<<"\n";
    }
    return 0;
}