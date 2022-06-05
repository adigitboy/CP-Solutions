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
        string s,t;
        cin>>s>>t;
        vector<vector<long long>> nxt(s.size()+5,vector<long long>(26,INT_MAX));
        for(int i=(int)s.size()-1;i>=0;i--){
            for(int j=0;j<26;j++){
                nxt[i][j]=nxt[i+1][j];
            }
            nxt[i][s[i]-'a'] = i;
        }
        long long res=1,pos=0;
        for(int i=0;i<t.size();i++){
            if(pos==s.size()){
                pos=0;
                res++;
            }
            if(nxt[pos][t[i]-'a']==INT_MAX){
                pos=0;
                res++;
            }
            if(nxt[pos][t[i]-'a']==INT_MAX && pos==0){
                res=INT_MAX;
                break;
            }
            pos = nxt[pos][t[i]-'a']+1;
        }
        if(res==INT_MAX){
            cout<<-1<<"\n";
        }
        else{
            cout<<res<<"\n";
        }
    }
    return 0;
}