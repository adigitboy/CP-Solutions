#include <iostream>
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
void solve(){
    int n;
    string s;
    cin>>n>>s;
    string a="";
    string b="";
    int one=0;
    int zero=0;
    for(int i=0;i<n;i++){
        if(s[i]=='1') one++;
        else zero++;
    }
    if(one%2==1 || zero%2==1 || s[0]=='0' || s.back()=='0'){
        cout<<"NO"<<"\n";
        return;
    }
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            if(one){
                a+=(char)('(');
                b+=(char)('(');
                one-=2;
            }
            else{
                a+=(char)(')');
                b+=(char)(')');
            }
        }
        else{
            if(zero%2==0){
                a+=(char)('(');
                b+=(char)(')');
                zero--;
            }
            else{
                a+=(char)(')');
                b+=(char)('(');
                zero--;
            }
        }
    }
    cout<<"YES"<<"\n";
    cout<<a<<"\n";
    cout<<b<<"\n";
}  
int main(){
    ios::sync_with_stdio(0);
            cin.tie(0);
            cout.tie(0);
            cout<<fixed;
            cout<<setprecision(10);
    //        freopen("timber_input.txt", "r", stdin);
    //        freopen("timber_output.txt", "w", stdout);
            int t=1;
            cin>>t;
            for(int i=1;i<=t;i++){
            //    cout<<"Case #"<<i<<": ";  
                solve();
    }
    return 0;
}
 