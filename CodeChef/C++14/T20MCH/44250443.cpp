#include<bits/stdc++.h>
using namespace std;

int main(){
    long long r,o,c;
    cin>>r>>o>>c;
    long long total = (20-o)*36+c;
    if(total>r){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}