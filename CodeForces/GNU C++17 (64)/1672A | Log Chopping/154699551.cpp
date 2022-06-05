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
        vector<long long> v(n);
        long long cnt=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            cnt+=v[i]-1;
        }
        if(cnt%2!=0){
            cout<<"errorgorn\n";
        }
        else{
            cout<<"maomao90\n";
        }
    }
    return 0;
}