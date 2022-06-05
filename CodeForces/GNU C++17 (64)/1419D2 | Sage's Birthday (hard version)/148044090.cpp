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
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    vector<long long> ans;
    int j=0,k=n-1;
    ans.push_back(v[k]);
    k--;
    while(j<=k){
        if(j==k){
            ans.push_back(v[j]);
            break;
        }
        ans.push_back(v[j]);
        ans.push_back(v[k]);
        j++;
        k--;
    }
    long long val=0;
    long long idx=1;
    for(int i=1;i<n-1;i+=2){
        if(ans[i]==ans[i+1] || ans[i]==ans[i-1]){
            swap(ans[i],ans[idx]);
            idx+=2;
        }
    }
    for(int i=1;i<n-1;i+=2){
        if(ans[i]<ans[i-1] && ans[i]<ans[i+1]){
            val++;
        }
    }
    cout<<val<<"\n";
    for(auto it : ans){
        cout<<it<<" ";
    }
    cout<<"\n";
    return 0;
}