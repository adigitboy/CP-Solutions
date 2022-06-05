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
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        vector<long long> v(n);
        vector<long long> ans;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]!=i){
                ans.push_back(v[i]);
            }
        } 
        long long val = 0;
        for(long long i=30;i>=0;i--){
            val = ( val | (1<<i) );
        }
        
        for(int i=0;i<ans.size();i++){
            val&=ans[i];
        }
        cout<<val<<"\n";
    }
    return 0;
}