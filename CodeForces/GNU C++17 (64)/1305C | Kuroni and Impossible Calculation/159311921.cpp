#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long n,m;
    cin>>n>>m;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    if(n>m){
        cout<<0<<"\n";
    }
    else{
        long long ans = 1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans = ((ans%m)*(abs(v[i]-v[j])%m))%m;
            }
        }
        cout<<ans<<"\n";
    }
    
    return 0;
}