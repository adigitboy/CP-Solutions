#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int idx=n-1;
    while(s[idx]==s[0] && idx!=0){
        s.pop_back();
        idx--;
    }
    idx=s.size();
    for(int i=1;i<s.size();i++){
        string first="",second="";
        for(int j=0;j<i;j++){
            first.push_back(s[j]);
        }
        for(int k=i;k<2*i && k<n;k++){
            second.push_back(s[k]);
        }
        if(second>first){
            idx=i;
            break;
        }
    }
    for(int i=0;i<k;i++){
        cout<<s[i%idx];
        // cout<<i%idx<<" ";
    }
    return 0;
}