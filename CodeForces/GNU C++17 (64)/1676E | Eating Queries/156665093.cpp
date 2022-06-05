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
        long long n,q;
        cin>>n>>q;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<long long>());
        for(int i=1;i<n;i++){
            v[i]+=v[i-1];
        }
        while(q--){
            long long x;
            cin>>x;
            long long idx=lower_bound(v.begin(),v.end(),x)-v.begin();
            if(idx==n){
                cout<<-1<<"\n";
            }
            else{
                cout<<idx+1<<"\n";
            }
        }
    }
    return 0;
}