#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
bool isPossible(vector<long long> &v,long long mid){
    long long val = mid/(v.size()-1);
    if(mid%(v.size()-1)!=0){
        return false;
    }
    
    for(int i=0;i<v.size();i++){
        if(v[i]>val){
            return false;
        }
    }
    return true;
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
        long long tot=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            tot+=v[i];
        }
        sort(v.begin(),v.end());
        long long block = (tot+n-2)/(n-1);
        if(block<=v[n-1]){
            block = v[n-1]*(n-1);
        }
        else{
            block = block*(n-1);
        }
        cout<<block-tot<<"\n";
 
    }
    return 0;
}