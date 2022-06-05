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
        long long n = s.size();
        map<char,long long> mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        if(mp['1']==0 && mp['0']==0){
            cout<<n<<"\n";
            continue;
        }
        // else if(mp['1']>1 && mp['0']<=1){
        //     long long lo;
        //     for(int i=0;i<n;i++){
        //         if(s[i]=='1'){
        //             lo=i;
        //         }
        //     }
        //     long long ans = n-lo;
        //     cout<<ans<<"\n";
        // }
        // else if(mp['1']<=1 && mp['0']>1){
        //     long long lo;
        //     for(int i=s.size()-1;i>=0;i--){
        //         if(s[i]=='0'){
        //             lo=i;
        //         }
        //     }
        //     long long ans = lo+1;
        //     cout<<ans<<"\n";
        // }
        // else{
            long long lo=0;
            long long lz=n-1;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    lo=i;
                }
            }
            for(int i=s.size()-1;i>=0;i--){
                if(s[i]=='0'){
                    lz=i;
                }
            }
            long long ans = lz-lo+1;
            cout<<ans<<"\n";
        // }
    }
    return 0;
}