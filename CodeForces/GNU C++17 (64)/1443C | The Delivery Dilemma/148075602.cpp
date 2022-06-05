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
        vector<long long> a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<long long,long long>> vp;
        for(int i=0;i<n;i++){
            vp.push_back({a[i],b[i]});
        }
        sort(vp.begin(),vp.end(),greater<pair<long long,long long>>());
        long long val = 0;
        long long maxi = INT_MIN;
        for(int i=0;i<n;i++){
            if(val+vp[i].second<vp[i].first){
                val+=vp[i].second;
            }
            else{
                maxi = max(maxi,vp[i].first);
            }
        }
        long long ans = max(maxi,val);
        cout<<ans<<"\n";
    }
    return 0;
}