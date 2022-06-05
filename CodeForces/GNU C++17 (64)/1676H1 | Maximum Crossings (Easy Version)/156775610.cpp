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
        long long total=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(v[j]>=v[i]){
                    total++;
                }
            }
            for(int k=i+1;k<n;k++){
                if(v[k]<=v[i]){
                    total++;
                }
            }
           
        }
        cout<<total/2<<"\n";
    }
    return 0;
}