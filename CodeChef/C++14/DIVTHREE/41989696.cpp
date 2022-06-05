#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k,d;
        cin>>n>>k>>d;
        long long arr[n];
        long long result = 0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            result+=arr[i];
        }
        if(result/k >= d){
            cout<<d<<endl;
            continue;
        }
        else{
            cout<<result/k<<endl;
            continue;
        }
    }
    return 0;
}