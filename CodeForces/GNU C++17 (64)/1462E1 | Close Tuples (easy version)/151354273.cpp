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
        long long ans = 0;
        for(int i=0;i<n-2;i++){
            long long idx = upper_bound(v.begin(),v.end(),v[i]+2)-v.begin();
            idx--;
            long long dist = idx-i;
            if(dist>=2){
                ans = ans + ( dist*(dist-1) )/2;
            }
            
        }
        cout<<ans<<"\n";
    }
    return 0;
}