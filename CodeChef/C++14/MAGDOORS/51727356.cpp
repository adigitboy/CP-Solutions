#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        string s;
        cin>>s;
        long long ans=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                ans = ans+2;
            }
        }
        if(s[s.size()-1]=='0'){
            ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}