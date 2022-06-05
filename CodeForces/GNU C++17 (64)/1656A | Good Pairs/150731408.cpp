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
        vector<pair<long long,long long>> v;
        for(int i=0;i<n;i++){
            long long u;
            cin>>u;
            v.push_back({u,i+1});
        }
        sort(v.begin(),v.end());
        long long i = v[0].second;
        long long j = v[n-1].second;
        cout<<i<<" "<<j<<"\n";
    }
    return 0;
}