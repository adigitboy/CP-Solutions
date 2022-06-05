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
        vector<long double> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        bool flag=false;
        for(int i=0;i<n;i++){
            long double sum = 0;
            for(int j=i-1;j>=0;j--){
                sum+=v[j];
            }
            for(int j=i+1;j<n;j++){
                sum+=v[j];
            }
            // cout<<sum/(n-1)<<" ";
            if((sum/(n-1))==v[i]){
                flag=true;
                break;
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}