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
            long long x = (v[i]%n+n)%n;
            x = (x+i)%n;
            mp[x]++;
        }
        long long cnt=0;
        for(auto it : mp){
            if(it.second>1){
                cnt=2;
            }
        }
        if(cnt>=2){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}