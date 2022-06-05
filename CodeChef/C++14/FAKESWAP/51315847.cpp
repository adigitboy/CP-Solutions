#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        cin>>n;
        string s,p;
        cin>>s>>p;
        if(s==p){
            cout<<"YES\n";
            continue;
        }
        int s_0=0,s_1=0,p_0=0,p_1=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                s_0++;
            }
            else{
                s_1++;
            }
            if(p[i]=='0'){
                p_0++;
            }
            else{
                p_1++;
            }

        }
        if(p_0&&p_1){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}