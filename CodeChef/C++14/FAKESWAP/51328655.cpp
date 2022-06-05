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
        unordered_set<char> st1;
        unordered_set<char> st2;
        for(int i=0;i<n;i++){
            st1.insert(p[i]);
        }
        for(int i=0;i<n;i++){
            st2.insert(s[i]);
        }
        if(st1.size()==1 && st2.size()==1){
            if(*st1.begin()!= *st2.begin()){
                cout<<"NO\n";
                continue;
            }
           
        }
        else if(st1.size()==1 && st2.size()==2){
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";

    }
    return 0;
}