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
        long long l,r,m;
        cin>>l>>r>>m;
       
        for(int i=l;i<=r;i++){
            long long rem = m%i;
            long long rem2 = i-m%i;
            if(rem==0){
                cout<<i<<" "<<i<<" "<<i<<"\n";
                break;
            }
            else if(min(rem,rem2)<=r-l){
                if(rem2<=r-l){
                    cout<<i<<" "<<l<<" "<<l+rem2<<"\n";
                }
                else{
                    cout<<i<<" "<<r<<" "<<r-rem<<"\n";
                }
                break;
            }
        }
        
    }
    return 0;
}