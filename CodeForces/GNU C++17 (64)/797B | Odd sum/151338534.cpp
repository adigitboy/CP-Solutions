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
    vector<long long> v;
    long long sum = 0;
   
    for(int i=0;i<n;i++){
        long long u;
        cin>>u;
        if(u%2==0){
            if(u>0){
                sum+=u;
            }
        }
        else{
            v.push_back(u);
        }
 
    }
    sort(v.begin(),v.end(),greater<long long>());
    long long ans = INT_MIN,val=0;
    for(int i=0;i<v.size();i++){
        val+=v[i];
        if(val%2!=0){
            ans = max(ans,val);
        }
    }
    cout<<ans+sum<<"\n";
    return 0;
}