#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        if(n==1){
            cout<<3<<"\n";
            continue;
        }
        else if(n%2!=0){
            cout<<1<<"\n";
        }
        else if((n&(n-1))==0){
            long long fs =0;
            long long fu = 0;
            for(long long i=0;i<=30;i++){
                // cout<<n<<" ";
                if( ( n&((long long)1<<i) )==0){
                    fu=i;
                    break;
                }
            }
            
            for(long long i=0;i<=30;i++){
                if( (n&((long long)1<<i))>0){
                    fs=i;
                    break;
                }
            }
            // cout<<fu<<" "<<fs<<"\n";
            long long ans = (1<<fs) | (1<<fu);
            cout<<ans<<"\n";
        }
        else{
            long long fs =0;
            long long fu = 0;
            for(long long i=0;i<=30;i++){
                // cout<<n<<" ";
                if( ( n&((long long)1<<i) )==0){
                    fu=i;
                    break;
                }
            }
            
            for(long long i=0;i<=30;i++){
                if( (n&((long long)1<<i))>0){
                    fs=i;
                    break;
                }
            }
            // cout<<fu<<" "<<fs<<"\n";
            long long ans = (1<<fs);
            cout<<ans<<"\n";
        }
    }
    return 0;
}