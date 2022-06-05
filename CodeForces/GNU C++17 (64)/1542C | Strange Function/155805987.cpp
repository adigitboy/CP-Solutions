#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
#define mod 1000000007
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<long long> ans;
    long long val=3;
    long long inc=4;
    while(val<1e16){
        ans.push_back(val);
        val = val*inc;
        inc++;
    }
    ans.push_back(val);
    
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        long long lcm = 1;
        long long res = 0;
        for(long long i=2;;i++){
            if(lcm>n) break;
            long long l = n/lcm;
            lcm = (lcm/(__gcd(i,lcm)))*i;
            long long r = n/lcm;
            long long value = ((l-r)*i)%mod;
            res = (res+value)%mod;
        }
        cout<<res<<"\n";
    }
    return 0;
}