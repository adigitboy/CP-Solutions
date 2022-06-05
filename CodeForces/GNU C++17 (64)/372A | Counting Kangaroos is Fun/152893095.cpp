#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    vector<long long> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long cnt=0;
    long long l=n-2,r=n-1;
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    // cout<<"\n";
    while(l>=0){
        if(2*v[l]<=v[r]){
            cnt++;
            l--;
            r--;
        }
        else{
            l--;
        }
    }
    cout<<n-min(n/2,cnt)<<"\n";
    return 0;
}