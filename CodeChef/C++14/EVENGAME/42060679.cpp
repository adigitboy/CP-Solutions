#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long arr[n],result = 0;;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            result+=arr[i];
        }
        if(result%2==0){
            cout<<"1"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
    }
    return 0;
}