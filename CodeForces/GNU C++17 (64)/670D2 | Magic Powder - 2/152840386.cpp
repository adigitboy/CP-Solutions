#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
bool isPos(long long mid,vector<long long> &a,vector<long long> &b,long long k){
    for(int i=0;i<a.size();i++){
        if(mid*a[i]<0){
            return false;
        }
        k = k - max((long long)0,mid*a[i]-b[i]);
        if(k<0){
            return false; 
        }
    }
    return k>=0;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k;
    cin>>n>>k;
    vector<long long> a(n),b(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    long long lo=0,hi=1e18,ans=0;
    while(lo<=hi){
        long long mid = lo + (hi-lo)/2;
        
        if(isPos(mid,a,b,k)){
            ans = mid;
            lo = mid+1;
        }
        else{
            hi = mid-1;
        }
    }
    cout<<ans<<"\n";
    return 0;
}