#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){
        vector<char> v;
        long long n,k;
        cin>>n>>k;
        long long ct=0;
        long long fg =0;
        char c;
        for(int i=0;i<n;i++){
            cin>>c;
            v.push_back(c);
            if(c=='*'){
                ct+=1;
                if(ct==k){
                    fg=1;
                }
            }
            else{
                ct=0;
            }
        }
        if(fg==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}