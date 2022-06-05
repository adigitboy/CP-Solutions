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
        if(n%3==1){
            long long sum = 0;
            long long k=1;
            while(sum<n){
                if(k==1){
                    cout<<1;
                    sum+=1;
                    k=2;
                }
                else{
                    cout<<2;
                    sum+=2;
                    k=1;
                }
            }
        }
        else{
            long long sum = 0;
            long long k=2;
            while(sum<n){
                if(k==1){
                    cout<<1;
                    sum+=1;
                    k=2;
                }
                else{
                    cout<<2;
                    sum+=2;
                    k=1;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}