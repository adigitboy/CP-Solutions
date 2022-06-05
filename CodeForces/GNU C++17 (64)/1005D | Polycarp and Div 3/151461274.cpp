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
    map<long long,long long> mp;
    long long sum=0;
    for(int i=0;i<s.size();i++){
        long long val = (s[i]-'0');
        sum+=val;
        if(val%3==0 || sum%3==0){
            ans++;
            mp.clear();
            sum=0;
        }
        else{
            if(mp.find(sum%3)!=mp.end()){
                ans++;
                mp.clear();
                sum=0;
            }
            mp[sum%3]++;
        }
    }
    cout<<ans<<"\n";
    return 0;
}