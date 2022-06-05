#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin>>t;
    while(t--){	
        long long n;
        cin>>n;
        if(n%2==0){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<-1<<" ";
                }
                cout<<"\n";
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if(i==j){
                        cout<<-1<<" ";
                    }
                    else{
                        cout<<1<<" ";
                    }
                }
                cout<<"\n";
            }
        }
    }
    return 0;
}