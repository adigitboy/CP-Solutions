#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    long long ans = 0;
    if(s[0]=='0' || s[0]=='4' || s[0]=='8'){
        ans++;
    }
    for(int i=1;i<s.size();i++){
        string val = "";
        val.push_back(s[i-1]);
        val.push_back(s[i]);
        if(s[i]=='0' || s[i]=='4' || s[i]=='8'){
            ans++;
        }
        long long num = stoi(val);
        if(num%4==0){
            ans = ans + i;
            // cout<<val<<" ";
            
        }
    }
    cout<<ans<<"\n";
    return 0;
}