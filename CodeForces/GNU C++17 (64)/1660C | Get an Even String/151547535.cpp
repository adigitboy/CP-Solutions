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
        string s;
        cin>>s;
        long long lu = 0;
        long long ans = 0;
        map<char,long long> mp;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]>=1){
                ans = ans + i-lu-1;
                lu = i+1;
                mp[s[i]]--;
                mp.clear();
            }
            else{
                mp[s[i]]=1;
            }
            // cout<<ans<<" "<<lu<<"\n";
        }
        long long n = s.size();
        if(lu!=n){
            // cout<<"k";
            ans = ans + n-lu;
        }
        cout<<ans<<"\n";
    }
    return 0;
}