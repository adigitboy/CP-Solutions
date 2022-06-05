#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
bool isValid(vector<long long> &v){
    long long n=v.size();
    for(int i=2;i<n;i++){
        if(v[i-1]+v[i-2]==v[i]){
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
        for(int i=n;i>=1;i--){
            v[i-1]=i;
            // cout<<v[i-1]<<" ";
        }
        // cout<<"\n";
        long long idx=1;
        while(idx<=n){
            prev_permutation(v.begin(),v.end());
            if(isValid(v)){
                idx++;
                for(int i=0;i<v.size();i++){
                    cout<<v[i]<<" ";
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}