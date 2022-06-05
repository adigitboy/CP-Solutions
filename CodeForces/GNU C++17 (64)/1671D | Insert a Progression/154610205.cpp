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
        long long n,k;
        cin>>n>>k;
        vector<long long> v(n);
        long long val = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long mini=INT_MAX,maxi=INT_MIN;
        mini=min(v[0],mini);
        maxi=max(v[0],maxi);
        for(int i=1;i<n;i++){
            val+=abs(v[i]-v[i-1]);
            mini=min(mini,v[i]);
            maxi=max(maxi,v[i]);
        }
        long long min_add=0,max_add=0;
        if(1<mini){
            min_add = min(2*(mini-1),min(abs(v[0]-1),abs(v[n-1]-1)));
        }
        if(k>maxi){
            max_add = min(2*(k-maxi),min(abs(v[0]-k),abs(v[n-1]-k)));
        }
        cout<<val+min_add+max_add<<"\n";
 
    }
    return 0;
}