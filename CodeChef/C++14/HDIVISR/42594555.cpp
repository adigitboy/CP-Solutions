#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int maxi = INT_MIN;
    cin>>n;
    for(int i=1;i<11;i++){
        if(n%i==0){
            maxi = max(i,maxi);
        }
    }
    cout<<maxi<<endl;
    return 0;
    
}