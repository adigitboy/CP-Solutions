#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a,b,c;
    cin>>a>>b>>c;
    if(a==b || a==c || b==c){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No";
    }
    return 0;
}