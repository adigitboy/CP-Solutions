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
    string s;
    cin>>s;
    map<pair<char,long long>,long long> mp; 
    map<char,long long> occ;
    
    for(int i=0;i<n;i++){
        mp[{s[i],occ[s[i]]}] = i+1; 
        occ[s[i]]++;
    }
    // cout<<mp[{'r',0}]<<"\n";
    long long q;
    cin>>q;
    
    for(int i=0;i<q;i++){
        string val;
        cin>>val;
        for(int i=0;i<val.size();i++){
            occ[val[i]]=0;
        }
        long long ans=0;
        for(int i=0;i<val.size();i++){
            // cout<<val[i]<<" "<<occ[val[i]]<<"\n";
            ans = max(mp[{val[i],occ[val[i]]}],ans);
            occ[val[i]]++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}