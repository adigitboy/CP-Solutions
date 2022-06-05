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
        long long st,in,ex;
        cin>>st>>in>>ex;
        long long high = ex;
        long long low = 0;
        long long ans = 0;
        while(low<=high){
            long long mid = (low+high)/2;
            // cout<<mid<<" ";
            if(mid+st>ex-mid+in){
                ans = ex-mid+1;
                
                high = mid-1;
            }
            else{
                low=mid+1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}