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
        long long n,k;
        cin>>n>>k;
        vector<long long> v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(k<n){
            
            long long maxi = 0;
            for(int i=0;i<n;i++){
                if(i){
                    v[i]+=v[i-1];
                }
            }
            maxi = max(maxi,v[k-1]);
            for(int i=k;i<n;i++){
                maxi = max(maxi,v[i]-v[i-k]);
            }
            long long ans = maxi;
            long long cnt=1;
            for(int i=0;i<k-1;i++){
                ans = ans + cnt;
                cnt++;
            }
            cout<<ans<<"\n";
 
        }
        else{
            long long ans = v[0]+(k-n);
            long long cnt = k-n+1;
            for(int i=1;i<n;i++){
                ans = ans + v[i] + cnt;
                cnt++;
            }
            cout<<ans<<"\n";
 
        }
    }
    return 0;
}