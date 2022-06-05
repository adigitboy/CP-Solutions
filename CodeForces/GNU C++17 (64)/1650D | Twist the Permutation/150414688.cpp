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
        for(int i=0;i<n;i++){
            cin>>v[i];
        
        }
        vector<long long> ans(n,0);
        for(int i=n-1;i>=0;i--){
            long long idx;
            for(idx=0;idx<=i;idx++){
                if(v[idx]==i+1){
                    break;
                }
            }
            if(idx==i) idx=-1;
            // cout<<idx<<" ";
            rotate(v.begin(),v.begin()+idx+1,v.begin()+i+1);
           
            // cout<<"\n";
            ans[i]=idx+1;
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}