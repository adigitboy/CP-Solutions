#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>


using namespace __gnu_pbds;

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

long long ncR(long long n,long long k){
    if(k>n){
        return 0;
    }
    if(n-k<k){
        k = n-k;
    }
    long long res=1;
    for(int i=0;i<k;i++){
        res = res*(n-i);
    }
    for(int i=k;i>0;i--){
        res/=i;
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        string s;
        long long n;
        cin>>n>>s;
        map<long long,long long> mp; 
        map<long long,long long> mp1; 
        for(int i=0;i<n;i++){
            
            mp[i+(s[i]-'0')]++;
            mp1[i-(s[i]-'0')]++;
        }
        long long ans=0;
        for(auto it : mp){
            if(it.second>=2){
                ans = ans + ncR(it.second,2);
            }
            // cout<<it.first<<" "<<it.second<<"\n";
        }
        for(auto it : mp1){
            if(it.second>=2){
                ans = ans + ncR(it.second,2);
            }
            // cout<<it.first<<" "<<it.second<<"\n";
        }
        
        // for(auto it : vadd){
        //     cout<<it<<" ";
        // }
        // cout<<"\n";
        // for(auto it : vsub){
        //     cout<<it<<" ";
        // }
        // cout<<"\n";
        cout<<ans<<"\n";
    }
    return 0;
}