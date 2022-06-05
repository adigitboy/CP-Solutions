#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
 
bool isPos(long long mid,vector<long long> &v,long long n){
    long long cnt=0;
    long long val=1e10;
    
    vector<long long> temp=v;
    for(int i=n-1;i>=3;i--){
        if(temp[i]==temp[i-1]){
            cnt++;
            
            if(temp[i]==temp[i-2]){
 
            }
            temp[i-1]=val;
            temp[i-2]=val;
            val++;
        }
    }
    // for(int i=0;i<n;i++){
    //     cout<<temp[i]<<" ";
    // }
    // cout<<"\n";
    return cnt<=mid;
}
 
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
    
        long long ans=0;
        long long f=-1,l=-1;
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                if(f==-1){
                    f=i+1;
                    l=i+1;
                }
                else{
                    if(f==i){
                        l=i+1;
                    }
                    else{
                        l=i;
                    }
                }
            }
        }
        // cout<<l<<" "<<f<<"\n";
        cout<<l-f<<"\n";
        
    }
    return 0;
}