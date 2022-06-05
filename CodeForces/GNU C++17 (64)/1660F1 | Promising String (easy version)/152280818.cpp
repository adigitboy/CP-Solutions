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
        string s;
        cin>>s;
        // cout<<s<<" ";
        long long ans=0;
        for(int i=0;i<n;i++){
            long long p=0,m=0;
            for(int j=i;j<n;j++){
                
                if(s[j]=='-'){
                    m++;
                }
                if(s[j]=='+'){
                    p++;
                }
                // cout<<s[j]<<" ";
                if(p==m || (m>p && (m-p)%3==0)){
                    // cout<<i<<" "<<j<<"\n";
                    ans++;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}