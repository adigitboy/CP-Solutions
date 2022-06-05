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
        long long n,m;
        cin>>n>>m;
        vector<pair<long long,pair<long long,long long>>> vp;
        for(int i=0;i<m;i++){
            long long x,w;
            cin>>x>>w;
            vp.push_back({w,{x,i+1}});
        }
        sort(vp.begin(),vp.end());
        vector<pair<long long,long long>> ans;
        long long sum = 0;
        for(int i=0;i<2*n;i++){
            ans.push_back({vp[i].second.first,vp[i].second.second});
            sum+=vp[i].first;
        }
        sort(ans.begin(),ans.end());
        cout<<sum<<"\n";
        for(int i=0;i<n;i++){
            cout<<ans[i].second<<" "<<ans[2*n-i-1].second<<"\n";
        }
        cout<<"\n";
    }
    return 0;
}