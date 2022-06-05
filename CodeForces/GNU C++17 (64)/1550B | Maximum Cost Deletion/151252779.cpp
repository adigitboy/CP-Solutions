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
        long long n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        if(b<0){
            long long cnt=0;
            for(int i=0;i<n;i++){
                while(i<n-1 && s[i]==s[i+1]){
                    i++;
                }
                cnt++;
            }
            // cout<<cnt<<" ";
            long long ans = n*a+(cnt/2+1)*b; 
            cout<<ans<<"\n";
        }
        else{
            long long ans = n*a + n*b;
            cout<<ans<<"\n";
        }
    }
    return 0;
}