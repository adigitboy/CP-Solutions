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
        for(int i=0;i<n;i++){
            long long u;
            cin>>u;
            vp.push_back({u,i});
        }
        vector<long long> ans(n);
        
        sort(vp.begin(),vp.end());
        long long count = 0;
        for(auto p : vp){
            if(count<=p.first-1){
              
                ans[p.second]=count;
                count++;
            }
            else{
                ans[p.second]=p.first;
            }
        }
        for(auto it : ans){
            cout<<it<<" ";
        }
        cout<<"\n";
        
    }
    return 0;
}