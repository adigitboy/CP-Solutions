#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n,h;
    cin>>t>>n>>h;
    int arr[t];
    int maxi = 0;
    for(int i= 0;i<t;i++){
        cin>>arr[i];
        maxi = max(arr[i],maxi);
    }
    if((h+maxi)>=n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}