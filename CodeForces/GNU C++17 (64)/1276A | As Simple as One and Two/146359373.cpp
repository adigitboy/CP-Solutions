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
        string s;
        cin>>s;
        vector<long long> ans;
        for(int i=0;i<s.size();i++){
            string val = "";
            // cout<<i<<" ";
            for(int j=0;j<3 && i+j<s.size();j++){
                val.push_back(s[i+j]);
            }
            string eval="";
            for(int j=0;j<5 && i+j<s.size();j++){
                eval.push_back(s[i+j]);
            }
            // cout<<eval<<" ";
            if(eval=="twone"){
                ans.push_back(i+2);
                // s[i+2]=s[i+3];
                i+=4;
            }
            else if(val=="one" || val=="two"){
                ans.push_back(i+1);
                // s[i+1]=s[i+2];
                i+=2;
            }
            
        }
        // cout<<s<<" ";
        cout<<ans.size()<<"\n";
        for(auto it : ans){
            cout<<it+1<<" ";
        }
        cout<<"\n";
    }
    return 0;
}