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
        bool flag=true;
        vector<pair<long long,long long>> vp;
        pair<long long,long long> range{-1e8,1e8};
        pair<long long,long long> tower;
        for(int i=0;i<n;i++){
            if(i==0 || i==n-1){
                tower = {v[i],v[i]};
            }
            else{
                tower = {v[i],v[i]+k-1};
            }
            range  = {range.first-k+1,range.second+k-1};
            pair<long long,long long> temp;
            temp = {max(range.first,tower.first),min(range.second,tower.second)};
            if(temp.first>temp.second){
                flag=false;
                break;
            }
            range=temp;
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}