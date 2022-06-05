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
        map<char,long long> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        if(mp['a']==1 || mp['b']==1){
            cout<<"NO\n";
        }
        else{
            if( (s.find("aba")!=string::npos) || ((s.find("bab")!=string::npos)) ){
                cout<<"NO\n";
            }
            else{
                long long n=s.size();
                if(s.size()>2 && (s[0]=='a' && s[1]=='b' && s[2]=='b')){
                    cout<<"NO\n";
                }
                else if(s.size()>2 && (s[0]=='b' && s[1]=='a' && s[2]=='a')){
                    cout<<"NO\n";
                }
                else if(s.size()>2 && (s[n-1]=='b' && s[n-2]=='a' && s[n-3]=='a') ){
                    cout<<"NO\n";
                }
                else if(s.size()>2 && (s[n-1]=='a' && s[n-2]=='b' && s[n-3]=='b') ){
                    cout<<"NO\n";
                }
                else{
                    cout<<"YES\n";
                }
            }
        }
    }
    return 0;
}