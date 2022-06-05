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
        long long n = s.size();
        if(s.size()==1){
            cout<<"NO\n";
        }
        else if(s[n-1]!='B'){
            cout<<"NO\n";
        }
        else{
            bool flag=true;
            long long cnta=0;
            long long cntb=0;
            for(int i=0;i<s.size();i++){
                if(s[i]=='A'){
                    cnta++;
                }
                else{
                    cntb++;
                }
                if(cntb>cnta){
                    flag=false;
                    break;
                }
            }
            if(flag){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}