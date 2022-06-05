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
        long long a,b;
        cin>>a>>b;
        if(a<=b){
            long long ans = 0;
            while(a<b){
                a = a + 2;
                ans++;
            }
            if(b==a){
                cout<<ans<<"\n";
            }
            else{
                cout<<ans+1<<"\n";
            }
        }
        else{
            cout<<abs(a-b)<<"\n";
        }
        
    }

    return 0;
}