#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
bool isPos(long long val,long long req,vector<long long> &v){
    long long sum=0;
    long long cnt=0;
    for(int i=0;i<v.size();i++){
        if(sum+v[i]<=val){
            sum+=v[i];
            if(sum==val){
                cnt++;
                sum=0;
            }
        }
        else{
            sum=v[i];
        }
    }
   
    return cnt==req;
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
        long long sum = accumulate(v.begin(),v.end(),(long long)0);
        long long ans;
        for(long long i=n;i>=1;i--){
            if(sum%i==0){
                if(isPos(sum/i,i,v)){
                    ans=n-i;
                    break;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}