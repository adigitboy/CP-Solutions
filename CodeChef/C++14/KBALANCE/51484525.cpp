#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long ans=0;
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                long long dep=0;
                if(i+k<n){
                    if(s[i+k]=='1'){
                        if(i+2*k<n){
                            if(s[i+2*k]=='0'){
                                dep++;
                            }
                        }
                        else{
                            dep++;
                        }
                    }
                }
                if(i-k>-1){
                    if(s[i-k]=='1'){
                        if(i-2*k>-1){
                            if(s[i-2*k]=='0'){
                                dep++;
                            }
                        }
                        else{
                            dep++;
                        }
                    }
                }
                if(dep==2){
                    s[i]='1';
                    ans++;
                }
            }
        }
        // cout<<ans<<" ";
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                if(i+k>=n && i-k<0){
                    ans++;
                
                }
                else if(i+k<n && i-k>-1){
                    if(s[i+k]=='0' && s[i-k]=='0'){
                        ans++;
                    }
                 
                }
                else if( i-k >= 0 && s[i-k]=='0'){
                    ans++;
                    
                }
                else if(i+k<n && s[i+k]=='0'){
                    ans++;
                  
                }
            }
        }
        // cout<<"\n";
        // cout<<s<<" ";
        cout<<ans<<"\n";
    }
    return 0;
}