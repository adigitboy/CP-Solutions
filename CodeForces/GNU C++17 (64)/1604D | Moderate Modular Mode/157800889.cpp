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
        long long a,b;
        cin>>a>>b;
        if(a>b){
            cout<<a+b<<"\n";
        }
        else{
            long long val = b - (b%a)/2 ;
            cout<<val<<"\n";
        }
    }
    return 0;
}