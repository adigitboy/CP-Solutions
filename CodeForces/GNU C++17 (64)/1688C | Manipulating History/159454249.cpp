#include<bits/stdc++.h>
using namespace std;
 
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
 
using namespace __gnu_pbds;
 
template<class T>
 
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template<class key, class value, class cmp = std::less<key>>
using ordered_map = tree<key, value, cmp, rb_tree_tag, tree_order_statistics_node_update>;
 
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){ 
        long long n;
        cin>>n;
        vector<string> v;
        map<char,long long> mp;
        for(int i=0;i<2*n;i++){
            string s;
            cin>>s;
            v.push_back(s);
            for(int j=0;j<s.size();j++){
                mp[s[j]]++;
            }
        }
        string target = "";
        cin>>target;
        for(int i=0;i<target.size();i++){
            mp[target[i]]++;
        }
       
        for(int i=0;i<2*n;i++){
            if(v[i].size()==1 && mp[v[i][0]]%2!=0){
                cout<<v[i][0]<<"\n";
                break;
            }
        }
         
    }
    return 0;
}