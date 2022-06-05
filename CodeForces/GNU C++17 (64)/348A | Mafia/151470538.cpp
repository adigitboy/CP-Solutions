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
    long long sum = 0;
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        sum+=v[i];
    }
    if(sum>=v[n-1]*(n-2)-1){
        // cout<<sum+v[n-1]+n-2<<"\n";
        long long ans = (sum+v[n-1]+n-2)/(n-1);
        cout<<ans<<"\n";
    }
    else{
        cout<<v[n-1]<<"\n";
    }
    return 0;
}