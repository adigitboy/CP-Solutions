#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        char ress = s[0];
        int ans =0;
        for(int i=1;i<n;i++) {
            if(ress != s[i]) {
                ans++;
                ress = s[i];
            }
        }
        if(ans<k) {
            cout<<-1<<" \n";
            continue;
        }
        else if(s[0]=='0') {
            if(k%2) {
                for(int i=s.size()-1; i>=0; i--) {
                    if(s[i] == '1') {
                        cout<<i+1<<"\n";
                        break;
                    }
                }
            }
            else {
                for(int i=s.size()-1; i>=0; i--) {
                    if(s[i] == '0') {
                        cout<<i+1<<"\n";
                    break;
                    }
                }
            }
        }
        else {
            if(k%2) {
                for(int i=s.size()-1; i>=0; i--) {
                    if(s[i] == '0') {
                        cout<<i+1<<"\n";
                        break;
                    }
                }
            }
            else {
                for(int i=s.size()-1; i>=0; i--) {
                    if(s[i] == '1') {
                        cout<<i+1<<"\n";
                        break;
                    }
                }
            }
        }
    }
    return 0;
}