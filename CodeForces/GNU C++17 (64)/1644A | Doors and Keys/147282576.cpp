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
        long long posR,posr,posG,posg,posb,posB;
        for(int i=0;i<s.size();i++){
            if(s[i]=='R'){
                posR = i;
            }
            if(s[i]=='r'){
                posr=i;
            }
            if(s[i]=='G'){
                posG = i;
            }
            if(s[i]=='g'){
                posg=i;
            }
            if(s[i]=='B'){
                posB = i;
            }
            if(s[i]=='b'){
                posb=i;
            }
 
        }
        if(posR<posr || posB<posb || posG<posg){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }
    }
    return 0;
}