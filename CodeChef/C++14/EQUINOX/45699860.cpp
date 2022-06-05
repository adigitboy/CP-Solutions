#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin>>t;
    while(t--){	
        long long n,a,b;
        cin>>n>>a>>b;
        long long counta = 0;
        long long countb = 0;
        while(n--){
            string s;
            cin>>s;
            if(s.front()=='E' || s.front()=='Q'|| s.front()=='U'|| s.front()=='I'|| s.front()=='N'|| s.front()== 'O'||s.front()=='X' ){
                counta+=a;
            }
            else{
                countb+=b;
            }
        }
        if(counta>countb){
            cout<<"SARTHAK"<<"\n";
        }
        else if(counta==countb){
            cout<<"DRAW"<<"\n";
        }
        else{
            cout<<"ANURADHA\n";
        }
    }
    return 0;
}