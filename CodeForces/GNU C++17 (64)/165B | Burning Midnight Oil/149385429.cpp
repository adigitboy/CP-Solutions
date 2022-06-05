#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
bool isPoss(long long val,long long k,long long n){
    long long sum=0;
    long long powk = 1;
    while(val/powk>0){
        sum = sum + val/powk;
        powk = powk*k;
    }
    if(sum>=n){
        return true;
    }
    return false;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k;
    cin>>n>>k;
    long long low = 1;
    long long high = n;
    long long ans;
    while(low<=high){
        long long mid = (low+high)>>1;
        if(isPoss(mid,k,n)){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}