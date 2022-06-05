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
        long double a,b;
        cin>>a>>b;
        if(a==0 && b==0){
            cout<<0<<"\n";
            continue;
        }
        if(ceil(sqrt(a*a + b*b))==sqrt(a*a+b*b)){
            cout<<1<<"\n";
            continue;
        }
        cout<<2<<"\n";
    }
    return 0;
}