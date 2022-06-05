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
        long long low=3,high=1e9;
        long long ans = 0;
        while(low<=high){
            long long mid = low + (high-low)/2;
            if( (mid*mid+1)/2 <=n){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if(ans==0){
            cout<<0<<"\n";
            continue;
        }
        ans = (ans-1)>>1;
        cout<<ans<<"\n";
    }
    return 0;
}