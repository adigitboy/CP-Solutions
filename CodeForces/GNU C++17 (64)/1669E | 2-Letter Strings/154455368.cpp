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
        vector<string> v(n);
        map<char,long long> s,e;
        map<string,long long> mp;
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long long ans = 0;
        for(int i=0;i<n;i++){
            ans = ans + s[v[i][0]]+e[v[i][1]]-2*mp[v[i]];
            s[v[i][0]]++;
            e[v[i][1]]++;
            mp[v[i]]++; 
        
        }
        cout<<ans<<"\n";
    }
    return 0;
}