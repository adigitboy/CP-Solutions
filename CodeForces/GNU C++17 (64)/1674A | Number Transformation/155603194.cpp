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
        long long x,y;
        cin>>x>>y;
        bool flag=true;
        if(x==y){
            cout<<1<<" "<<1<<"\n";
        }
        else if(y<x){
            cout<<0<<" "<<0<<"\n";
        }
        else if(y%x!=0){
            cout<<"0 0\n";
        }
        else{
            cout<<1<<" "<<y/x<<"\n";
        }
    
    }
    return 0;
}