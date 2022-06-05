#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    vector<long long> v(n);
    long long maxi = 0;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    vector<long long> ans(n,0);
    long long maxiSum = 0;
    for(int i=0;i<n;i++){
        vector<long long> curr(n,0);
        curr[i]=v[i];
        for(int j=i-1;j>=0;j--){
            curr[j]=min(v[j],curr[j+1]);
        }
        for(int j=i+1;j<n;j++){
            curr[j]=min(v[j],curr[j-1]);
        }
        long long sum=0;
        for(int j=0;j<n;j++){
            sum+=curr[j];
        }
        if(sum>maxiSum){
            ans = curr;
            maxiSum=sum;
        }
    }
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<"\n";
    
 
    return 0;
}