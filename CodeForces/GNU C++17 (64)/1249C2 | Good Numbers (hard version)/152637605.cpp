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
        long long num=1,cnum=1;
        while(cnum<n){
            cnum+=num*3;
            num*=3;
        }
        while(num>0){
            if(cnum-num>=n){
                cnum-=num;
            }
            num/=3;
        }
        cout<<cnum<<"\n";
    }
    return 0;
}