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
        string s;
        cin>>n>>s;
        long long ans = 0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0'){
                long long ones = 0,zro = 1;
                for(int j=i+1;j<n;j++){
                    if(s[j]=='0'){
                        zro++;
                        break;
                    }
                    else{
                        ones++;
                    }
                }
                if(zro>ones){
                    ans = ans + zro-ones;
                }
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}