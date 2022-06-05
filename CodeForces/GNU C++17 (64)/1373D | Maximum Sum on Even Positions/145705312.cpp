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
        vector<long long> odd,eve;
        for(int i=1;i<n;i+=2){
            odd.push_back(v[i]-v[i-1]);
        }
        for(int i=2;i<n;i+=2){
            eve.push_back(v[i-1]-v[i]);
        }
        
        long long maxEnd = 0;
        long long maxi=0;
        for(int i=0;i<odd.size();i++){
            maxEnd = max(maxEnd+odd[i],odd[i]);
            maxi = max(maxi,maxEnd);
        }
        maxEnd = 0;
        for(int i=0;i<eve.size();i++){
            maxEnd = max(maxEnd+eve[i],eve[i]);
            maxi = max(maxi,maxEnd);
        }
        long long totalsum=0;
        for(int i=0;i<n;i+=2){
            totalsum+=v[i];
        }
        long long ans = totalsum+maxi;
        cout<<ans<<"\n";
        
    }
    return 0;
}