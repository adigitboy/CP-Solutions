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
        for(int i=0;i<n;i++){
            cin>>v[i];
         
        }
    
        long long lastidx=n+2;
        for(int i=0;i<n;i++){
            if(v[i]!=i+1){
                lastidx=i+1;
            }
        }
        long double p1=1;
        for(int i=0;i<k;i++){
            long double idx,val;
            cin>>idx>>val; 
            if(idx>=lastidx){
                p1*= (1-val);
            }
        }
        if(lastidx==n+2){
            cout<<1<<"\n";
            
        }
        else{
            cout<<1-p1<<"\n";
        }
    }
    return 0;
}