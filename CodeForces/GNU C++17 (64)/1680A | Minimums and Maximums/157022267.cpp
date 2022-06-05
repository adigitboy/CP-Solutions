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
        long long l1,r1,l2,r2;
        cin>>l1>>r1>>l2>>r2;
        if(l2>=l1 && l2<=r1){
            cout<<l2<<"\n";
        }
        else if(l1>=l2 && l1<=r2){
            cout<<l1<<"\n";
        }
        else{
            cout<<l1+l2<<"\n";
        }
    }
    return 0;
}