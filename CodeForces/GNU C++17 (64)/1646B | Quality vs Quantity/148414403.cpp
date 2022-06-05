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
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long red = v[n-1];
        long long blue = v[0]+v[1];
        if(red>blue){
            cout<<"YES\n";
        }
        else{
            long long j = n-2;
            long long i = 2;
            bool flag=false;
            while(i<j){
                red+=v[j];
                blue+=v[i];
                if(red>blue){
                    cout<<"YES\n";
                    flag=true;
                    break;
                }
                i++;
                j--;
            }
            if(!flag){
                cout<<"NO\n";
            }
 
        }
    }
    return 0;
}