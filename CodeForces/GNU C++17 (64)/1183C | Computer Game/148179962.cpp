#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
bool isPos(long long mid,long long n,long long k,long long a,long long b){
    k = k-mid*a;
    k = k - (n-mid)*b;
    if(k>=1){
        return true;
    }
    return false;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long k,n,a,b;
        cin>>k>>n>>a>>b;
        long long low = 1;
        long long high = min(k/a,n);
        long long ans = 0;
        if(k/b<n){
            cout<<-1<<"\n";
            continue;
        }
        if(k/b+k%b<=n){
            cout<<-1<<"\n";
            continue;;
        }
        while(low<=high){
            long long mid = (low+high)/2;
            // cout<<mid<<" ";
            if(isPos(mid,n,k,a,b)){
                ans = mid;
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
 
 
 
 
 