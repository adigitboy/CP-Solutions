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
        map<long long,long long> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp[1]>1 || mp[1]==0 || mp[n]>1){
            cout<<"NO\n";
            continue;
        }
        bool flag=true;
        for(int i=0;i<n-1;i++){
            if(v[i+1]-v[i]>1){
                flag=false;
                break;
            }
 
        }
        if( (v[0]-v[n-1])>1){
            flag=false;
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