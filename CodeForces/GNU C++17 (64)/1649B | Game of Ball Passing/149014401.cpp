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
        vector<long long> v(n);
        
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(v[n-1]==0){
            cout<<0<<"\n";
            continue;
        }
        long long sum=0;
        for(int i=0;i<n-1;i++){
            sum+=v[i];
        }
        long long ans = 0; 
        if(sum<v[n-1]){
            ans = v[n-1]-sum;
        }
        else{
            ans = 1;
        }
        cout<<ans<<"\n";
    }
    return 0;
}