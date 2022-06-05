#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
long long maxSegment(vector<long long> &v){
    long long cnt=0;
    for(int i=0;i<v.size();i++){
        if(v[i]==0){
            cnt++;
        }
    }
    return v.size()+cnt;
}
 
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
        long long ans = 0;
        for(int i=0;i<n;i++){
            vector<long long> temp;
            for(int j=i;j<n;j++){
                temp.push_back(v[j]);
                ans+=maxSegment(temp);
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}