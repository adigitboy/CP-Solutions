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
    long long ans = 0;
    pair<long long,long long> en,on;
    vector<long long> right(n+1,0);
    en.first=-1;
    en.second=0;
    on.first=n;
    on.second=0;
    long long cnt=0;
    for(int i=n-1;i>=0;i--){
        if(v[i]<0){
            if(cnt%2==0){
                right[i]=(on.first-i+en.second);
                en.first=i;
                en.second=right[i];
            }
            else{
                right[i]=(en.first-i+on.second);
                on.first=i;
                on.second=right[i];
            }
            cnt++;
        }
    }
    en.first=-1;
    en.second=0;
    on.first=-1;
    on.second=0;
    cnt=0;
    for(int i=0;i<n;i++){
        if(v[i]<0){
            if(cnt%2==0){
                right[i]=((i-on.first)*right[i]);
                en.first=i;
            }
            else{
                right[i]=((i-en.first)*right[i]);
                on.first=i;
            }
            cnt++;
        }
    }
    for(int i=0;i<n;i++){
        // cout<<right[i]<<" ";
        ans+=right[i];
    }
    // ans = ans + min(on.first,en.first)-0;
    long long val = n*(n+1)/2-ans;
    cout<<ans<<" "<<val<<"\n";
    return 0;
}