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
        long long l,r;
        cin>>l>>r;
        vector<long long> v(r+1);
        long long maxi = 0;
        long long val = 0;
        long long n = r+1;
        for(int i=0;i<=r;i++){
            cin>>v[i];
            if(v[i]==0){
                val++;
            }
            maxi = max(maxi,v[i]);
        }
        map<long long,long long> mp,mp1;
        for(int i=0;i<n;i++){
            long long ele = v[i];
            for(int j=0;j<=18;j++){
                if(ele&(1<<j)){
                    mp[j]++;
                }
            }
        }
        for(int i=0;i<n;i++){
            long long ele = i;
            for(int j=0;j<=18;j++){
                if(ele&(1<<j)){
                    mp1[j]++;
                }
            }
        }
        val = 0;
        for(int i=0;i<=18;i++){
            if(mp1[i]!=mp[i]){
                val = val|(1<<i);
            }
        }
        cout<<val<<"\n";
        
        
    }
    return 0;
}