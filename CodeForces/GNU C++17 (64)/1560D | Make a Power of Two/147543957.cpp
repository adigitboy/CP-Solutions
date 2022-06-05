#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
long long cntDiff(string &s,string &val){
    long long n = s.size(),m=val.size();
    long long i=0,j=0,cnt=0;
    while(i<n && j<m){
        if(s[i]==val[j]){
            i++;
            j++;
        }
        else{
            i++;
            cnt++;
        }
    }
    if(i<n){
        cnt = cnt + n-i;
    }
    if(j<m){
        cnt = cnt + m-j;
    }
    // if(val=="1024"){
    //     cout<<i<<" "<<j<<"\n";
    // }
    return cnt;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        string s;
        cin>>s;
        long long val=1;
        vector<string> v;
        while(val<1e18){
            v.push_back(to_string(val));
            val*=2;
        }
        long long ans = INT_MAX;
        for(int i=0;i<v.size();i++){
           
            ans = min(ans,cntDiff(s,v[i]));
        }
        cout<<ans<<"\n";
    }
    return 0;
}