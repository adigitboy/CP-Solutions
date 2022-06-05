#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long oddcount=0,evencount=0,temp;
        for(int i=0;i<n;i++){
            cin>>temp;
            if(temp%2==0){
                evencount++;
            }
            else{
                oddcount++;
            }
        }
        cout<<min(evencount,oddcount)<<endl;
    }
    return 0;
}