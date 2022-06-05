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
        long long sum = 0,val=1;
        long long cnt  = 0;
        while(sum+val<n){
            sum+=val;
            val+=2;
            cnt++;
        }
        if(sum==n){
            cout<<cnt<<"\n";
        }
        else{
            cout<<cnt+1<<"\n";
        }
    }
    return 0;
}