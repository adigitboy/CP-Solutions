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
        string a,b;
        cin>>a>>b;
        
        map<char,long long> mp;
        for(int i=0;i<b.size();i++){
            mp[b[i]]++;
        }
        if(b.size()==1 && mp['a']==1){
            cout<<1<<"\n";
        }
        else if(mp['a']>=1){
            cout<<-1<<"\n";
        }
        else{
            map<char,long long> mp1;
            for(int i=0;i<b.size();i++){
                mp1[b[i]]++;
            }
            long long diff = a.size();
            long long ans = ((long long)1<<diff);
            cout<<ans<<"\n";
        }
    }
    return 0;
}