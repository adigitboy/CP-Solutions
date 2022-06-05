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
        long long n,k;
        cin>>n>>k;
        for(int i=0;i<k-3;i++){
            cout<<1<<" ";
        }
        n = n-k+3;
        if(n%2==0){
            if(n%4==0){
                cout<<n/4<<" "<<n/4<<" "<<n/2<<"\n";
            }
            else{
                cout<<n/2-1<<" "<<n/2-1<<" "<<2<<"\n";
            }
        }
        else{
            cout<<n/2<<" "<<n/2<<" "<<1<<"\n";
        }
    }
    return 0;
}