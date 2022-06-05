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
        string s;
        cin>>s;
        long long a = s[0]-'0';
        long long b = s[1]-'0';
        long long c = s[2]-'0';
        long long d = s[3]-'0';
        long long e = s[4]-'0';
        long long f = s[5]-'0';
        long long ans1 = a+b+c;
        long long ans2 = d+e+f;
        if(ans1==ans2){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}