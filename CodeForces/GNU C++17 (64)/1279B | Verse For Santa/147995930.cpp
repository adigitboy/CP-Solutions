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
        long long sum=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        if(sum<=k){
            cout<<0<<"\n";
        }
        else{
            long long val = 0,maxi=0,idx=0;
            for(int i=0;i<n;i++){
                val+=v[i];
                if(v[i]>maxi){
                    if(val-v[i]>k){
                        break;
                    }
                    else{
                        idx=i;
                        maxi = v[i];
                    }
                }
                if(val-maxi>k){
                    break;
                }
            }
            cout<<idx+1<<"\n";
            
        }
    }
    return 0;
}