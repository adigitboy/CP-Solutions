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
        bool flag=true;
        unordered_map<char,int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=1;
        }
        for(char chf='a';chf<='z';chf++){
            
            for(char chs=chf+1;chs<='z';chs++){
 
                if(mp[chf]==1 && mp[chs]==1){
 
                    long long cntf=0,cnts=0;
 
                    for(int i=0;i<s.size();i++){
 
                        if(s[i]==chf){
                            if(cntf==1){
                                flag=false;
                                break;
                            }
                            else{
                                cntf++;
                                cnts=0;
                            }
                        }
 
                        else if(s[i]==chs){
                            if(cnts==1){
                                flag=false;
                                break;
                            }
                            else{
                                cnts++;
                                cntf=0;
                            }
                        }
 
                    }
                }
            }
        }
        if(flag){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}