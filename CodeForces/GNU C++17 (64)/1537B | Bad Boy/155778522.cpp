#include<bits/stdc++.h>
using namespace std;
 
int main(){
    long long t;
    cin>>t;
    while(t--){ 
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        long long tlc,trc,blc,brc;
        tlc = c-1+d-1;
        trc = (b-d)+(c-1);
        blc = a-c+d-1;
        brc = (a-c)+(b-d);
        if(tlc+brc>trc+blc){
            cout<<1<<" "<<1<<" "<<a<<" "<<b<<"\n";
        }
        else{
            cout<<1<<" "<<b<<" "<<a<<" "<<1<<"\n";
        }
    }
    return 0;
}